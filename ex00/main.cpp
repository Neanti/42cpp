#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony Stack;
    Stack.setName("Stack");
    Stack.printName();
    return;
}

void ponyOnTheHeap()
{
    Pony *Heap = new Pony();
    Heap->setName("Heap");
    Heap->printName();
    delete Heap;
    return;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}