#include<iostream>
#include"Mediator.h"
#include"Colleage.h"
using namespace std;

int main(int argc, char* argv[])
{

    ConcreteMediator* m = new ConcreteMediator();

    ConcreteColleageA* c1 = new ConcreteColleageA(m);
    ConcreteColleageB* c2 = new ConcreteColleageB(m);

    m->IntroColleage(c1, c2);

    c1->SetSate("old");
    c2->SetSate("old");
    c1->Aciton();
    c2->Aciton();
    cout << endl;

    c1->SetSate("new");
    c1->Aciton();
    c2->Aciton();
    cout << endl;

    c2->SetSate("old");
    c2->Aciton();
    c1->Aciton();
    cout << endl;
    return 0;
}