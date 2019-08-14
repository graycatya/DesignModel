#include<iostream>
#include<vector>

using namespace std;

class Component
{
    public:
        Component() {}
        virtual ~Component() {}

    public:
        virtual void Operation() = 0;
        virtual void Add(Component*) {}
        virtual void Remove(Component*) {}
        virtual Component* GetChild(int) {}

    protected:
    private:
};

class Composite : public Component
{
    public:
        Composite() { comVec.clear(); }
        ~Composite() {}
    
    public:
        void Operation() 
        { 
            vector<Component*>::iterator comIter = comVec.begin(); 
            for(; comIter != comVec.end(); comIter++)
            {
                (*comIter)->Operation();
            }
        }
        void Add(Component* com) { this->comVec.push_back(com); }
        void Remove(Component* com) 
        { 
            for(int i = 0; i < comVec.size(); i++)
            {
                if(comVec[i] == com)
                {
                    comVec.erase(comVec.begin() + i);
                }
            }
        }
        Component* GetChild(int index) { return comVec[index]; }

    protected:
    private:
        vector<Component*> comVec;
};

class Leaf : public Component
{
    public:
        Leaf() {}
        ~Leaf() {}
        void Operation() { cout << "Leaf operation......" << endl; }
    protected:
    private:
};

int main()
{
    Leaf* l = new Leaf();
    l->Operation();

    Composite* com = new Composite();
    com->Add(l);
    com->Operation();
    Component* ll = (Component*)com->GetChild(0);
    ll->Operation();
    ll->Remove(com);

    return 0;
}