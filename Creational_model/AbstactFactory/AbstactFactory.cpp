#include<iostream>
/* 抽象工厂模式 - () */
using namespace std;

class AbstractProductA
{
    public:
        virtual ~AbstractProductA();
    protected:
        AbstractProductA() {}
    private:
};

AbstractProductA::~AbstractProductA() {}

class AbstractProductB
{
    public:
        virtual ~AbstractProductB();
    protected:
        AbstractProductB() {}
    private:
};

AbstractProductB::~AbstractProductB() {}

class ProductA1 : public AbstractProductA
{
    public:
        ProductA1() { cout << "ProductA1..." << endl; }
        ~ProductA1() {}
    protected:
    private:
};

class ProductA2 : public AbstractProductA
{
    public:
        ProductA2() { cout << "ProductA2..." << endl; }
        ~ProductA2() {}
    protected:
    private:
};

class ProductB1 : public AbstractProductB
{
    public:
        ProductB1() { cout << "ProductB1..." << endl; }
        ~ProductB1() {}
    protected:
    private:
};

class ProductB2 : public AbstractProductB
{
    public:
        ProductB2() { cout << "ProductB2..." << endl; }
        ~ProductB2() {}
    protected:
    private:
};

class AbstractFactory
{
    public:
        virtual ~AbstractFactory(){}
        virtual AbstractProductA* CreateProductA() = 0;
        virtual AbstractProductB* CreateProductB() = 0;
    protected:
        AbstractFactory(){}
    private:
};


class ConcreteFactory1 : public AbstractFactory
{
    public:
        ConcreteFactory1(){}
        ~ConcreteFactory1(){}

        AbstractProductA* CreateProductA(){ return new ProductA1(); }
        AbstractProductB* CreateProductB(){ return new ProductB1(); }
    protected:
    private:
};

class ConcreteFactory2 : public AbstractFactory
{
    public:
        ConcreteFactory2(){}
        ~ConcreteFactory2(){}

        AbstractProductA* CreateProductA(){ return new ProductA2(); }
        AbstractProductB* CreateProductB(){ return new ProductB2(); }
    protected:
    private:
};

int main(int argc, char* argv[])
{
    AbstractFactory* cf1 = new ConcreteFactory1();
    cf1->CreateProductA();
    cf1->CreateProductB();

    AbstractFactory* cf2 = new ConcreteFactory2();
    cf2->CreateProductA();
    cf2->CreateProductB();

    return 0;
}