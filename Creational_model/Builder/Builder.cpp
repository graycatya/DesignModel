#include<iostream>
#include<string>

using namespace std;

class ProductPart;

class Product
{
    public:
        Product() { /* ProductPart::BuildPart();*/ cout << "return a product" << endl; }
        ~Product() { }
        void ProducePart() { cout << "build part of product." << endl; }
    protected:
    private:
};


class ProductPart
{
    public:
        ProductPart() {}
        ~ProductPart() {}
        ProductPart* BuildPart() { return new ProductPart; }
    protected:
    private:
};

class Builder
{
    public:
        virtual ~Builder() {}
        virtual void BuildPartA(const string& buildPara) = 0;
        virtual void BuildPartB(const string& buildPara) = 0;
        virtual void BuildPartC(const string& buildPara) = 0;
        virtual Product* GetProduct() = 0;
    protected:
        Builder() {}
    private:
};

class ConcreteBuilder : public Builder
{
    public:
        ConcreteBuilder() {}
        ~ConcreteBuilder() {}
        void BuildPartA(const string& buildPara) { cout << "Step1:Build PartA..." << buildPara << endl; }
        void BuildPartB(const string& buildPara) { cout << "Step1:Build PartB..." << buildPara << endl; }
        void BuildPartC(const string& buildPara) { cout << "Step1:Build PartC..." << buildPara << endl; }
        Product* GetProduct() 
        { 
            BuildPartA("pre-defined"); 
            BuildPartB("pre-defined"); 
            BuildPartC("pre-defined");
            return new Product();
        }
    protected:
    private:
};

class Director
{
    public:
        Director(Builder* bld) { _bld = bld; }
        ~Director() {}
        void Construct() 
        {
            _bld->GetProduct()->ProducePart();
        }
    protected:
    private:
        Builder* _bld;
};

int main(int argc, char* argv[])
{
    Director* d = new Director(new ConcreteBuilder());
    d->Construct();
    return 0;
}