#include"Context.h"
#include"State.h"

Context::Context() {}
Context::Context(State* state)
{
    this->_state = state;
}
Context::~Context() 
{
    delete _state;
}
void Context::OprationInterface()
{
    _state->OperationInterface(this);
}
void Context::OperationChangState()
{
    this->_state->OperationChangeState(this);
}
bool Context::ChangeState(State* state)
{
    this->_state = state;
    return true;
}