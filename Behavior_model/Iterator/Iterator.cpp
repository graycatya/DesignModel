#include"Iterator.h"
#include"Aggregate.h"
#include<iostream>

using namespace std;

ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx)
{
    this->_ag = ag;
    this->_idx = idx;
}

ConcreteIterator::~ConcreteIterator()
{

}

void ConcreteIterator::First()
{
    _idx = 0;
}

void ConcreteIterator::Next()
{
    if(_idx < _ag->GetSize())
        _idx++;
}

bool ConcreteIterator::IsDone()
{
    return (_idx == _ag->GetSize());
}

Object ConcreteIterator::CurrentItem()
{
    return _ag->GetItem(_idx);
}