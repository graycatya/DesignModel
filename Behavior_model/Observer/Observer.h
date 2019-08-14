#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "Subject.h"

#include<string>

using namespace std;

typedef string State;

class Observer
{
    public:
        virtual ~Observer() { _st = '\0'; }
        virtual void Update(CSubject* sub) = 0;
        virtual void PrintInfo() = 0;
    protected:
        Observer() {}
        State _st;
    private:
};

class ConcreteObserverA : public Observer
{
    public:
        virtual CSubject* GetSubject();
        ConcreteObserverA(CSubject* sub);
        virtual ~ConcreteObserverA();
        void Update(CSubject* sub);
        void PrintInfo();
    protected:
    private:
        CSubject* _sub;
};

class ConcreteObserverB : public Observer
{
    public:
        virtual CSubject* GetSubject();
        ConcreteObserverB(CSubject* sub);
        virtual ~ConcreteObserverB();
        void Update(CSubject* sub);
        void PrintInfo();
    protected:
    private:
        CSubject* _sub;
};


#endif