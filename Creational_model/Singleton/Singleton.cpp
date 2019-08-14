#include<iostream>
#include<mutex>

using namespace std;

class Singleton
{
    public:
        static Singleton* Instance();
        static void Delete();
    protected:
        Singleton() { cout << "Singleton....." << endl; }
        ~Singleton() {}
    private:
        static Singleton* _instance;
        static mutex* my_mutex;
};

Singleton* Singleton::_instance = nullptr;
mutex* Singleton::my_mutex = new mutex;

Singleton* Singleton::Instance()
{
    if(_instance == nullptr)
    {
        my_mutex->lock();
        if(_instance == nullptr)
        {
            _instance = new Singleton();
        }
        my_mutex->unlock();
    }
    return _instance;
}

void Singleton::Delete()
{
    if(_instance != nullptr && my_mutex != nullptr)
    {
        delete _instance;
        delete my_mutex;
    }
    else
    {
        throw "Singleton Delete error";
    }
    
}

int main(int argc, char* argv[])
{
    Singleton* sin = Singleton::Instance();
    Singleton* app = Singleton::Instance();
    Singleton::Delete();
    return 0;
}