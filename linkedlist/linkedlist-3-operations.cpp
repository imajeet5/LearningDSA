#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp_itr = head;
    while (temp_itr != NULL)
    {
        cout << temp_itr->data << "->";
        temp_itr = temp_itr->next;
    }
    cout << "NULL" << endl;
    temp_itr = head;
}

/*
Note: Scope of the statically created memeory is only for one iteration, for next iteration it will be erased. 
So we have to allocate memory dynamically. 

*/

Node *takeInput_tail()
{
    int data;
    cin >> data;
    Node *head = NULL; // LL is empty
    Node *tail = NULL;

    while (data != -1)
    {
        // static creation will not work as it is valid for iteration, so we have to use dynamic memeory allocation
        Node *n = new Node(data);
        // if 1st node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            // current tail->next will point to new node
            tail->next = n;
            // update the current tail to new node
            tail = n;
        }

        cin >> data;
    }
    return head;
}
Node *takeInput_head()
{
    int data;
    cin >> data;
    Node *head = NULL; // LL is empty
    Node *tail = NULL;

    while (data != -1)
    {
        // static creation will not work as it is valid for iteration, so we have to use dynamic memeory allocation
        Node *n = new Node(data);
        // if 1st node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }

        cin >> data;
    }
    return head;
}

int lengthLL(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }

    return count;
}

// my implementation
void printithNode(Node *head, int index)
{
    int counter = 0;
    bool isNodeFound = false;
    while (head && !isNodeFound)
    {

        if (counter == index)
        {
            isNodeFound = true;
            cout << "Element at " << index << " is " << head->data << endl;
        }
        counter++;
        head = head->next;
    }
    if (!isNodeFound)
    {
        cout << "Node does not exist" << endl;
    }
}

// course implementation
void printIthNode2(Node *head, int i)
{

    if (i < 0)
    {
        cout << "Node does not exist" << endl;
        return;
    }
    int count = 1;
    while (count <= i && head != NULL)
    {

        head = head->next;
        count++;
    }
    if (head)
        cout << "Element at " << i << " is " << head->data << endl;
    else
        cout << "Node does not exist" << endl;
}

int main(int argc, char const *argv[])
{
    Node *head1 = takeInput_tail();
    Node *head2 = takeInput_head();

    // Dynamically

    printLL(head1);
    printLL(head2);
    cout << lengthLL(head1) << endl;
    cout << lengthLL(head2) << endl;
    int index = 0;
    cout << "Enter index: " << endl;
    cin >> index;
    printIthNode2(head1, index);

    return 0;
}