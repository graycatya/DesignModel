#pragma cone

class ConcreteElementA;

class ConcreteElementB;

class Element;

class Visitor
{
    public:
        virtual ~Visitor() {}
        virtual void VisitConcreteElementA(Element* elm) = 0;
        virtual void VisitConcreteElementB(Element* elm) = 0;
    protected:
        Visitor() {}
    private:
};

class ConcreteVisitorA : public Visitor
{
    public:
        ConcreteVisitorA() {}
        ~ConcreteVisitorA() {}
        void VisitConcreteElementA(Element* elm);
        void VisitConcreteElementB(Element* elm);
    protected:
    private:
};

class ConcreteVisitorB : public Visitor
{
    public:
        ConcreteVisitorB() {}
        ~ConcreteVisitorB() {}
        void VisitConcreteElementA(Element* elm);
        void VisitConcreteElementB(Element* elm);
    protected:
    private:
};