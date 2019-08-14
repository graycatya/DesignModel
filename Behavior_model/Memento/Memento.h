#ifndef __MEMENTO_H__
#define __MEMENTO_H__
#include<iostream>

using namespace std;

class Memento;

class Originator
{
    public:
        typedef string State;
        Originator();
        Originator(const State& std);
        ~Originator();
        Memento* CreateMemento();
        void SetMemento(Memento* men);
        void RestoreToMemento(Memento* mt);
        State GetState();
        void SetState(const State& sdt);
        void PrintState();
    protected:
    private:
        State _sdt;
        Memento* _mt;
};

class Memento
{
    public:
    protected:
    private:
        friend class Originator;
        typedef string State;
        Memento();
        Memento(const State& sdt);
        ~Memento();
        void SetState(const State& sdt);
        State GetState();
    
    private:
        State _sdt;
};

#endif