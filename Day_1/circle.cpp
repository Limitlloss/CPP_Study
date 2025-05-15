#include <iostream>
using namespace std;
int main()
{
    int i = -65536;
    for (; i <= 65535; i++)
    {
        if (i % 10000 == 0)
        {
            cout << "i=" << i << endl;
        }
    }
    return 0;
}