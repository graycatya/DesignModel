#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <list>
#include <string>

using namespace std;

typedef string State;

class Observer;

class CSubject
{
    public:
        virtual ~CSubject();
        virtual void Attach(Observer* obv);
        virtual void Detach(Observer* obv);
        virtual void Notify();
        virtual void SetState(const State& st) = 0;
        virtual State GetState() = 0;
    protected:
        CSubject();
    private:
        list<Observer*>* _obvs;
};

class ConcreteSubject : public CSubject
{
    public:
        ConcreteSubject();
        ~ConcreteSubject();
        State GetState();
        void SetState(const State& st);
    protected:
    private:
        State _st;
};

#endif