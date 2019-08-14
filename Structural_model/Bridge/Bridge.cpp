#include<iostream>

using namespace std;

class AbstractionImp
{
    public:
        virtual ~AbstractionImp() { cout << "AbstractionImp....." << endl; }
        virtual void Operation() = 0;
    protected:
        AbstractionImp() {}
    private:
};

class ConcreteAbstractionImpA : public AbstractionImp
{
    public:
        ConcreteAbstractionImpA() { cout << "ConcreteAbstractionImpA....." << endl; }
        ~ConcreteAbstractionImpA() {}
        virtual void Operation() { cout << "Operation ConcreteAbstractionImpA......" << endl; }
    protected:
    private:
};

class ConcreteAbstractionImpB : public AbstractionImp
{
    public:
        ConcreteAbstractionImpB() { cout << "ConcreteAbstractionImpB....." << endl; }
        ~ConcreteAbstractionImpB() {}
        virtual void Operation() { cout << "Operation ConcreteAbstractionImpB......" << endl; }
    protected:
    private:
};

class Abstraction
{
    public:
        Abstraction(AbstractionImp* imp) : _imp(imp){}
        ~Abstraction() {}
        virtual void Operation() = 0;
    protected:
        Abstraction() {}
    private:
        AbstractionImp* _imp;
};

class RefinedAbstraction : public Abstraction
{
    public:
        RefinedAbstraction(AbstractionImp* imp) : _imp(imp){}
        ~RefinedAbstraction();
        void Operation() { this->_imp->Operation(); }
    protected:
        RefinedAbstraction() {}
    private:
        AbstractionImp* _imp;
};


int main(int argc, char* argv[])
{
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    Abstraction* abs = new RefinedAbstraction(imp);

    AbstractionImp* imp2 = new ConcreteAbstractionImpB();
    Abstraction* abs2 = new RefinedAbstraction(imp2);

    abs->Operation();
    abs2->Operation();
    return 0;
}