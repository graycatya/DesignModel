#include<iostream>
#include"Context.h"
#include"Interpret.h"

using namespace std;

int main(int argc, char* argv[])
{
    Context_* c = new Context_();
    AbstractExpression* te = new TerminalExpression("hello");
    AbstractExpression* nte = new NonterminalExpression(te, 2);
    nte->Interpret(*c);
    return 0;
}