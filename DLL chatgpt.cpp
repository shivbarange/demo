#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList
{
    Node* head;
    Node* tail;

public:
    DoublyList()
    {
        head = NULL;
        tail = NULL;
    }

    // Insert at beginning
    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert at end
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete from beginning
    void pop_front()
    {
        if(head == NULL)
        {
            cout << "DLL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head != NULL)
        {
            head->prev = NULL;
        }
        else
        {
            tail = NULL;
        }

        delete temp;
    }

    // Delete from end
    void pop_back()
    {
        if(head == NULL)
        {
            cout << "DLL is empty\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL)
        {
            tail->next = NULL;
        }
        else
        {
            head = NULL;
        }

        delete temp;
    }

    // Print the list
    void print()
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyList dll;

    dll.push_front(20);
    dll.push_front(10);

    dll.push_back(30);
    dll.push_back(40);

    cout << "Original List:\n";
    dll.print();

    cout << "\nAfter pop_front():\n";
    dll.pop_front();
    dll.print();

    cout << "\nAfter pop_back():\n";
    dll.pop_back();
    dll.print();

    return 0;
}
