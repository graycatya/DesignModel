#include<iostream>

using namespace std;

class Prototype
{
    public:
        virtual ~Prototype() {}
        virtual Prototype* Clone() const = 0;
    protected:
        Prototype() {}
    private:
};

Prototype* Prototype::Clone() const
{
    return nullptr;
};

class ConcretePrototype : public Prototype
{
    public:
        ConcretePrototype() {}
        ConcretePrototype(const ConcretePrototype& cp) { cout << "ConcretePrototype copy..." << endl; }
        ~ConcretePrototype() {}
        Prototype* Clone() const { return new ConcretePrototype(*this); }
    protected:
    private:
};

int main(int argc, char* argv[])
{
    Prototype* p = new ConcretePrototype();
    Prototype* p1 = p->Clone();
    return 0;
}