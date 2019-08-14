#include<iostream>

using namespace std;

class Strategy
{
    public:
        Strategy() {}
        virtual ~Strategy() 
        {
            cout << "~Strategy......" << endl;
        }
        virtual void AlgrithmInterface() = 0;
    protected:
    private:
};

class ConcreteStrategyA : public Strategy
{
    public:
        ConcreteStrategyA() {}
        virtual ~ConcreteStrategyA() 
        {
            cout << "~ConcreteStrategyA......" << endl;
        }
        void AlgrithmInterface() 
        {
            cout << "test ConcreteStrategyA......" << endl;
        }
    protected:
    private:
};

class ConcreteStrategyB : public Strategy
{
    public:
        ConcreteStrategyB() {}
        virtual ~ConcreteStrategyB() 
        {
            cout << "~ConcreteStrategyB......" << endl;
        }
        void AlgrithmInterface() 
        {
            cout << "test ConcreteStrategyB......" << endl;
        }
    protected:
    private:
};

class Context
{
    public:
        Context(Strategy* stg)
        {
            _stg = stg;
        }
        ~Context()
        {
            if(nullptr != _stg)
            {
                delete _stg;
            }
        }
        void DoAction()
        {
            _stg->AlgrithmInterface();
        }
    protected:
    private:
        Strategy* _stg;
};

int main(int argc, char* argv[])
{
    Strategy* ps = new ConcreteStrategyA();

    Context* pc = new Context(ps);

    pc->DoAction();

    if(nullptr != pc)
    {
        delete pc;
    }

    return 0;
}