#ifndef __STATE_H__
#define __STATE_H__
#include<iostream>

using namespace std;

class Context;

class State
{
    public:
        State();
        virtual ~State();
        virtual void OperationInterface(Context*) = 0;
        virtual void OperationChangeState(Context*) = 0;
    protected:
        bool ChangeState(Context* con, State* st);
    private:
};

class ConcreteStateA : public State
{
    public:
        ConcreteStateA();
        virtual ~ConcreteStateA();
        virtual void OperationInterface(Context* con);
        virtual void OperationChangeState(Context* con);
    protected:
    private:
};

class ConcreteStateB : public State
{
    public:
        ConcreteStateB();
        virtual ~ConcreteStateB();
        virtual void OperationInterface(Context* con);
        virtual void OperationChangeState(Context* con);
    protected:
    private:
};

#endif