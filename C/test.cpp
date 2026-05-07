#include <iostream>
using namespace std;

void fun(int n, int *s)
{
    int f1, f2;
    if (n == 1 || n == 2)
        *s = 1;
    else
    {
        fun(n - 1, &f1);
        fun(n - 2, &f2);
        *s = 2 * f1 + f2 + 1;
        cout << f1 << ", " << f2 << endl;

    }
}

int main()
{
    int x;
    fun(4, &x);
    cout << "x=" << x << endl;
    return 0; 
}
