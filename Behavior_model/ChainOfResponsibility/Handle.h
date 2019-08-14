#pragma cone

class Handle
{
    public:
        virtual ~Handle() { delete _succ; }
        virtual void HandleRequest() = 0;
        void SetSuccessor(Handle* succ) { _succ = succ; }
        Handle* GetSuccessor() { return _succ; }
    protected:
        Handle() { _succ = nullptr; }
        Handle(Handle* succ) { _succ = succ; }
    private:
        Handle* _succ;
};

class ConcreteHandleA : public Handle
{
    public:
        ConcreteHandleA();
        ~ConcreteHandleA();
        ConcreteHandleA(Handle* succ);
        void HandleRequest();
    protected:
    private:
};

class ConcreteHandleB : public Handle
{
    public:
        ConcreteHandleB();
        ~ConcreteHandleB();
        ConcreteHandleB(Handle* succ);
        void HandleRequest();
    protected:
    private:
};