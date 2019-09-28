#ifndef A_HPP
#define A_HPP

class B;

class A
{
    public:
        int i;
    
    public:
        A(int x);
        void send(B* b, int x);
        void exec(int x);
};

#endif