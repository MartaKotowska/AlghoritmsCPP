#include <iostream>
using namespace std;

int divisor(int m, int n)
{
    while (n != 0)
    {
        int tmp;
        tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}
int main()
{
    cout << divisor(8, 4);
}