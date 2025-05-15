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

             //step 4 newNode.next = START
            newNode->next = START;

            //step 5 START.PREV = newNode (if Start exists)
            if (START != NULL)
                START->prev = newNode;

            //step 6: newNode.prev = NULL
            newNode->prev = NULL;

            //Step 7: START = newNode 
            START = newNode;
            return;
        }

        //insert in betweel node
        //step 8: locate position for insertion
        Node *current = START;
        while ( current->next != NULL && current->nextnoMhs < nim)
        {
            current = current->next;

        }

         if (current->next != NULL && current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed" << endl;
            return;
        }

         //step 9: insert betwell current and current->next
        newNode->next = current->next; //step 9a: newnode.next = current.next
        newNode->prev = current;       //step 9b: newnode.prev = current

         //insert last node
        if(current->next != NULL)
            current->next->prev = newNode;//step 9c: current.next.prev = newNode
        current->next =newNode;//step 9d: current->next = newNode
    }

    void hapus()
    {
        if(START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

         cout << "\nMasukkan NIM yang akan dideleted " << endl;
        int rollNo;
        cin >> rollNo;

        Node *current =  START;

        //Step 1: tranverse the list find the node
        while(current != NULL && current->noMhs != rollNo)
        {
            current = current->next;
        }

        if(current == NULL )
        {
            cout << "Record not found"<< endl;
            return;
        }
    }
};