#include <iostream>
/* 简单工厂模式 - 一类类(有一个共同的基类) */
using namespace std;

class Product
{
    public:
        virtual ~Product() = 0;
    protected:
        Product(){}
    private:
};

Product::~Product(){}

class ConcreteProduct : public Product
{
    public:
        ~ConcreteProduct(){}
        ConcreteProduct(){ cout << "ConcreteProduct...." << endl; }
    protected:
    private:
};


class Factory
{
    public:
        virtual ~Factory() = 0;
        virtual Product* CreateProduct() = 0;
    protected:
        Factory() {}
    private:
};

Factory::~Factory(){}

class ConcreteFactory : public Factory
{
    public:
        ~ConcreteFactory(){}
        ConcreteFactory() { cout << "ConcreFactory....." << endl; }
        Product* CreateProduct() { return new ConcreteProduct(); }
    protected:
    private:
};


int main(int argc, char* argv[])
{
    Factory *fac = new ConcreteFactory();
    Product* p = fac->CreateProduct();
    return 0;
}

