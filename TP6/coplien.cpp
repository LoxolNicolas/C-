#include <iostream>

class M 
{
    public:
    M() 
    {
        std::cout << "M::M()" << std::endl;
    }

    ~M() 
    {
        std::cout << "M::~M()" << std::endl;
    }

    M(const M& m) 
    {
        std::cout << "M::M(const M&)" << std::endl;
    }

    M& operator=(const M& m)
    {
        std::cout << "Appel operateur m" << std::endl;

        return *this;
    }
};

class F : public M {

    public:
    F()
    {
        std::cout << "F::F()" << std::endl;
    }
    ~F()
    {
        std::cout << "F::~F()" << std::endl;
    }
    
    F(const F& f) : M(f)
    {
        std::cout << "F::F(const F&)" << std::endl;
    }

    F& operator=(const F& f)
    {

        //((M*)this)->operator=(f); downcasting
        
        M::operator=(f);
        
        std::cout << "Appel operateur f" << std::endl;

        return *this;
    }
};

class A
{
    private:
        M m1;

    public:
    A() 
    {
        std::cout << "A::A()" << std::endl;
    }

    ~A() 
    {
        std::cout << "A::~A()" << std::endl;
    }

    A(const A& a) : m1(a.m1)
    {
        std::cout << "A::A(const A&)" << std::endl;
    }

    A& operator=(const A& a)
    {
        std::cout << "Appel operateur a" << std::endl;

        return *this;
    }
};

int main(int, char**) 
{

  /*F f1;
  F f2 = f1;

  f1 = f2;
  */

  A a1;

  A a2(a1);

  return 0;
}