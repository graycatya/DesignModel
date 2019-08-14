#ifndef __CONTEXT_H__
#define __CONTEXT_H__

class State;

class Context
{
    public:
        Context();
        Context(State* state);
        ~Context();
        void OprationInterface();
        void OperationChangState();
    protected:
    private:
        friend class State;
        bool ChangeState(State* state);
    private:
        State* _state;
};

#endif