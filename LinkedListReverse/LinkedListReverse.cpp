// LinkedListReverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class ListNode
{
public:
    ListNode()
        : next(NULL)
        , prev(NULL)
        , data(0)
    {
    }

    static ListNode* ReverseList(ListNode* head)
    {
        ListNode* newHead = head;

        return newHead;
    }

    ListNode* next;
    ListNode* prev;
    int data;
};

int main()
{
    ListNode* curr = NULL;
    ListNode* last = NULL;
    ListNode* head = NULL;
    for (int elementIndex = 0; elementIndex < 5; ++elementIndex)
    {
        curr = new ListNode();
        if (last != NULL)
        {
            last->next = curr;
            curr->prev = last;
        }
        else
        {
            head = curr;
        }

        curr->data = elementIndex;
        last = curr;
    }

    ListNode* temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << "Done printing" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
