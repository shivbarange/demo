#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class List
{
private:
    Node* head;
    Node* tail;

public:
    List()
    {
        head = tail = nullptr;
    }

    ~List()
    {
        while(head)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    // Insert at beginning
    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at end
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if(head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete from beginning
    void pop_front()
    {
        if(head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head == nullptr)
            tail = nullptr;

        delete temp;
    }

    // Delete from end
    void pop_back()
    {
        if(head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        if(head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }

        Node* temp = head;

        while(temp->next != tail)
            temp = temp->next;

        delete tail;
        tail = temp;
        tail->next = nullptr;
    }

    // Print list
    void printlist()
    {
        Node* temp = head;

        while(temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Reverse list
    void reverselist()
    {
        if(head == nullptr || head->next == nullptr)
            return;

        tail = head;

        Node* prev = nullptr;
        Node* curr = head;

        while(curr)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    // Find middle node
    void middleNode()
    {
        if(head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle: " << slow->data << endl;
    }

    // Insert at position (0-based indexing)
    void insert(int val, int pos)
    {
        if(pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }

        if(pos == 0)
        {
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1 && temp != nullptr; i++)
            temp = temp->next;

        if(temp == nullptr)
        {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if(newNode->next == nullptr)
            tail = newNode;
    }
};

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original List:\n";
    ll.printlist();

    ll.reverselist();
    cout << "\nAfter Reverse:\n";
    ll.printlist();

    ll.middleNode();

    ll.insert(8, 2);
    cout << "\nAfter Inserting 8 at Position 2:\n";
    ll.printlist();

    ll.pop_front();
    cout << "\nAfter pop_front():\n";
    ll.printlist();

    ll.pop_back();
    cout << "\nAfter pop_back():\n";
    ll.printlist();

    return 0;
}
