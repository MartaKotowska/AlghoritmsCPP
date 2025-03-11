#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return recursion(n - 1) + recursion(n - 2);
    }
}

int main()
{
    cout << recursion(4);
}