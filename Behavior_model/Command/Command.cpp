#include"Command.h"
#include"Reciever.h"


ConcreteCommand::ConcreteCommand(Reciever* rev) { _rev = rev; }

ConcreteCommand::~ConcreteCommand() { delete _rev; }

void ConcreteCommand::Excute()
{
    _rev->Action();
    cout << "ConcreteCommand......" << endl;
}