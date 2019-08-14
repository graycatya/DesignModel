#pragma cone
#include<string>

class Context_;

using namespace std;

class AbstractExpression
{
    public:
        virtual ~AbstractExpression() {}
        virtual void Interpret(const Context_& c) {}
    protected:
        AbstractExpression() {}
    private:
};

class TerminalExpression : public AbstractExpression
{
    public:
        TerminalExpression(const string& statement);
        ~TerminalExpression();
        void Interpret(const Context_& c);
    protected:
    private:
        string _statement;
};

class NonterminalExpression : public AbstractExpression
{
    public:
        NonterminalExpression(AbstractExpression* expression, int times);
        ~NonterminalExpression();
        void Interpret(const Context_& c);
    protected:
    private:
        AbstractExpression* _expression;
        int _times;
};