#include <bits/stdc++.h>;
using namespace std;

// (int* &p) It's ref of a pointer, It's refer the pointer from main function, that means if I change the address from fun then change also in main
// (int* p) it's different pointer than main p
void fun(int *&p)
{
    int y = 50;
    // *p = y;
    p = &y;
    cout << "From fun: " << p << endl;
    // cout << "From fun val: " << *p << endl;
}

int main()
{
    int x = 5;
    int *p = &x;
    fun(p);

    cout << "From main: " << p << endl;
    // cout << "From main val: " << *p << endl;
    return 0;
}