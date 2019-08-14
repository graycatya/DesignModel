#include<iostream>

using namespace std;

class Subject
{
    public:
        virtual ~Subject() {}
        virtual void Request() = 0;
    protected:
        Subject() {}
    private:
};

class ConcreteSubject : public Subject
{
    public:
        ConcreteSubject() {}
        ~ConcreteSubject() {}
        void Request()
        {
            cout << "ConcreteSubject...... request......" << endl;
        }
    protected:
    private:
};

class Proxy
{
    public:
        Proxy() {}
        Proxy(Subject* sub) { _sub = sub; }
        ~Proxy() { delete _sub; }
        void Request() 
        { 
            cout << "Proxy request......" << endl;
            _sub->Request();
        }
    protected:
    private:
        Subject* _sub;
};

int main(int argc, char* argv[])
{
    Subject* sub = new ConcreteSubject();
    Proxy* p = new Proxy(sub);
    p->Request();
    return 0;
}