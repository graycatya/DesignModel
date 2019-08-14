#include<iostream>

using namespace std;

//组件
class Component
{
    public:
        virtual ~Component() {}
        virtual void Operation() {}
    protected:
        Component() {}
    private:
};

//具体组件
class ConcreteComponent : public Component
{
    public:
        ConcreteComponent() {}
        ~ConcreteComponent() {}
        void Operation() { cout << "ConcreteComponent operation..." << endl; }
    protected:
    private:
};

//装饰器
class Decorator : public Component
{
    public:
        Decorator(Component* com) { this->_com = com; }
        virtual ~Decorator() { delete _com; }
        void Operation() {}
    protected:
        Component* _com;
    private:
};

//具体装饰器
class ConcreteDecorator : public Decorator
{
    public:
        ConcreteDecorator(Component* com) : Decorator(com) {}
        ~ConcreteDecorator() {}
        void Operation() { _com->Operation(); this->AddedBehavior(); }
        void AddedBehavior() { cout << "ConcreteDecorator::AddedBehacior......" << endl; }
    protected:
    private:
};

int main()
{
    Component* com = new ConcreteComponent();
    Decorator* dec = new ConcreteDecorator(com);
    dec->Operation();
    delete dec;
    return 0;
}