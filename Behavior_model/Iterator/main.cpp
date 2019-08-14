#include<iostream>
#include"Aggregate.h"
#include"Iterator.h"

using namespace std;

int main(int argc, char* argvp[])
{
    Aggregate* ag = new ConcreteAggregate();
    Iterator* it = new ConcreteIterator(ag);

    for(; !(it->IsDone()); it->Next())
    {
        cout << it->CurrentItem() << endl;
    }
    return 0;
}