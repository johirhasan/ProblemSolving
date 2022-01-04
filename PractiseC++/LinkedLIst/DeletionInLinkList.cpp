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

//For corner case
void headDeletion(node *&head)//dont need to take int val beacause we know that we want to delete head.
{
    node*todelete = head;
    head=head->next;
    delete todelete;
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

void insertionAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    if (head==NULL)//When linklist have no element.(Corner case)
    {
        return;
    }

    if(head->next==NULL)//When linklist have only one element.(Corner case)
    {
        headDeletion(head);
        return;
    }
    
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    insertionAtHead(head, 4);
    insertionAtHead(head, 3);
    insertionAtHead(head, 2);
    insertionAtHead(head, 1);
    insertionAtHead(head, 0);
    display(head);

    deletion(head, 3);
    display(head);

    headDeletion(head);
    display(head);

    return 0;
}