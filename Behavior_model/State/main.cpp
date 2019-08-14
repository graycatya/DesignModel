#include<iostream>
#include"Context.h"
#include"State.h"
using namespace std;




int main(int argc, char* argv[])
{
    State* st = new ConcreteStateA();
    Context* con = new Context(st);
    con->OperationChangState();
    con->OperationChangState();
    con->OperationChangState();

    if(nullptr != con)
        delete con;

    if(nullptr != st)
        st = nullptr;
    return 0;
}