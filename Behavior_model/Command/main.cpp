#include"Command.h"
#include"Invoker.h"
#include"Reciever.h"

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    //接收器
    Reciever* rev = new Reciever();

    Command* cmd = new ConcreteCommand(rev);
    //请求者
    Invoker* inv = new Invoker(cmd);
    inv->Invoke();
    return 0;
}