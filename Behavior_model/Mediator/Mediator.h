#ifndef __MEDIATOR_H__
#define __MEDIATOR_H__

class Colleage;

class Mediator
{
    public:
        ~Mediator() {}
        virtual void DoActionFromAtoB() = 0;
        virtual void DoActionFromAtoA() = 0;
    protected:
        Mediator() {}
    private:
};

class ConcreteMediator : public Mediator
{
    public:
        ConcreteMediator();
        ConcreteMediator(Colleage* clgA, Colleage* clgB);
        ~ConcreteMediator();
        void SetConcreteColleageA(Colleage* clgA);
        void SetConcreteColleageB(Colleage* clgB);
        Colleage* GetConcreteColleageA();
        Colleage* GetConcreteColleageB();
        void IntroColleage(Colleage* clgA, Colleage* clgB);
        void DoActionFromAtoB();
        void DoActionFromAtoA();
    protected:
    private:
        Colleage* _clgA;
        Colleage* _clgB;
};

#endif