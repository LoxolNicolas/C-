#ifndef B_HPP
#define B_HPP

class A;

class B
{
    public:
        int j;
    
    public:
        B(int x);
        void send(A* a, int x);
        void exec(int x);
};

#endif