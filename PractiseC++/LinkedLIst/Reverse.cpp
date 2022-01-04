#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *Reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
//Reverse with recursive function.
node *RecursiveReverse(node*&head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* originhead= RecursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return originhead;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;//get error when we want delete head.(Corner case)
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

bool Search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void insertionAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertionAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}

int main()
{
    node *head = NULL;

    insertionAtTail(head, 4);
    insertionAtTail(head, 8);
    insertionAtTail(head, 6);
    insertionAtTail(head, 2);
    display(head);

    insertionAtHead(head, 0);
    display(head);

    insertionAtTail(head, 5);
    display(head);

    cout << Search(head, 5)<<endl;

    node *newhead = Reverse(head);
    display(newhead);

    deletion(newhead, 8);
    display(newhead);

    node *originhead = RecursiveReverse(newhead);
    display(originhead);

    return 0;
}