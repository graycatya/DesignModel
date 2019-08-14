#ifndef __COLLEAGE_H__
#define __COLLEAGE_H__

#include<string>
#include<iostream>
using namespace std;

class Mediator;

class Colleage
{
    public:
        virtual ~Colleage();
        virtual void Aciton() = 0;
        virtual void SetSate(const string& sdt) = 0;
        virtual string GetState() = 0;
    protected:
        Colleage();
        Colleage(Mediator* mdt);
        Mediator* _mdt;
    private:
};

class ConcreteColleageA : public Colleage
{
    public:
        ConcreteColleageA();
        ConcreteColleageA(Mediator* mdt);
        ~ConcreteColleageA();
        void Aciton();
        void SetSate(const string& sdt);
        string GetState();
    protected:
    private:
        string _sdt;
};

class ConcreteColleageB : public Colleage
{
    public:
        ConcreteColleageB();
        ConcreteColleageB(Mediator* mdt);
        ~ConcreteColleageB();
        void Aciton();
        void SetSate(const string& sdt);
        string GetState();
    protected:
    private:
        string _sdt;
};

#endif