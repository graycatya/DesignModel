#include<iostream>

using namespace std;

#ifndef _OBJECT

class Target
{
    public:
        Target() {}
        virtual ~Target() {}
        virtual void Request() { cout << "Target::Request" << endl; }
    protected:
    private:
};

class Adaptee
{
    public:
        Adaptee() {}
        ~Adaptee() {}
        void SpecificRequest() { cout << "Adaptee::SpecificRequest" << endl; }
    protected:
    private:
};

class Adapter : public Target, private Adaptee
{
    public:
        Adapter() {}
        ~Adapter() {}
        void Request() { this->SpecificRequest(); }
    protected:
    private:
};

#else

class Target
{
    public:
        Target() {}
        virtual ~Target() {}
        virtual void Request() { cout << "Target::Request" << endl; }
    protected:
    private:
};

class Adaptee
{
    public:
        Adaptee() {}
        ~Adaptee() {}
        void SpecificRequest() { cout << "Adaptee::SpecificRequest object" << endl; }
    protected:
    private:
};

class Adapter : public Target
{
    public:
        Adapter(Adaptee* ade) { _ade = ade; }
        ~Adapter() {}
        void Request() { _ade->SpecificRequest(); }
    protected:
    private:
        Adaptee *_ade;
};

#endif

int main(int argc, char* argv[])
{
    #ifndef _OBJECT
        Target* adt = new Adapter();
    #else
        Adaptee* ade = new Adaptee;
        Target*adt = new Adapter(ade);
    #endif
    adt->Request();

    return 0;
}