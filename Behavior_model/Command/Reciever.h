#ifndef _RECIEVER_H_
#define _RECIEVER_H_
#include<iostream>
using namespace std;

class Reciever
{
    public:
        Reciever() {}
        ~Reciever() {}
        void Action() { cout << "Reciever action......" << endl; }
    protected:
    private:
};

#endif