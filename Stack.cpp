// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Stack {
    int val;
    Stack* nextElement;

};

void Del_All(Stack** p) {
    Stack* t;
        while (*p != NULL) {
            t = *p;
            *p = (*p)->nextElement;
            delete t;
        }
}

int main()
{
    /*Stack *stackPointer;
    stackPointer = new Stack;
    stackPointer->val = 1;*/
    
    
    Stack* begin, *beginSource, *del;

    beginSource = NULL;
    for (int i = 0; i < 15; i++)
    {
        Stack* myStack = new Stack;
        myStack->val = i;
        if (i==0)
        {
            myStack->nextElement = NULL;
        }
        else {
            myStack->nextElement = beginSource;
        }
        beginSource = myStack;
    }
    begin = beginSource;

    while (begin != NULL)
    {
        std::cout << begin->val << std::endl;
        begin = begin->nextElement;
    }

    return 0;

    Stack *myStack = new Stack;
    myStack->val = 1;
    myStack->nextElement = NULL;

    begin = myStack;

    Stack *next = new Stack;
    next->val = 2;
    next->nextElement = begin;

    begin = next;

    Stack* next1 = new Stack;
    next1->val = 3;
    next1->nextElement = begin;

    begin = next1;
    
    Stack* t;
    while (begin != NULL)
    {
        std::cout << begin->val <<std::endl;
        begin = begin->nextElement;
    }

    begin = next1;

    std::cout << "Top of the stack:" << begin->val << std::endl;

    del = begin;
    begin = begin->nextElement;
    delete del;

    while (begin != NULL)
    {
        std::cout << begin->val << std::endl;
        begin = begin->nextElement;
    }

    begin = next;

    //Del_All(&begin);

    while (begin != NULL)
    {
        del = begin;
        begin = begin->nextElement;
        delete del;

    }

    return 0;






    
    std::cout << "Hello World!\n";
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
