#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int noMhs;
    Node *next;
    Node *prev;
}

class DoublyLinkedList {
private:
    DoublyLinkedList()
    {
        START = NULL;
    }

        void addNode()
    {
        int nim;
        cout <<"\nEnter the roll number or the student: ";
        cin >> nim;

        //stap 1: Allocation of new node
        Node *newNode = new Node();

        //step 2: Assign valoe to the data fields
        newNode->noMhs = nim;

        // step 3: insert at beginning if list is empty or nim is smaller than START
        if (START != NULL && nim == START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }

        }
    }

};