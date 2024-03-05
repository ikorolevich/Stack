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
    for (int i = 0; i < 2; i++)
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

    

    

    //Del_All(&begin);

    begin = NULL;
    begin = beginSource;

    int cnt = 0;
    while (beginSource != NULL)
    {
        cnt++;
        del = beginSource;
        beginSource = beginSource->nextElement;
        delete del;
        /*if (cnt ==5)
        {
            break;
        }*/

    }

    //begin = beginSource;
    /*while (begin != NULL)
    {
        std::cout << begin->val << std::endl;
        begin = begin->nextElement;
    }*/

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
