#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int sumMulThree = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
        if (i % 3 == 0)
        {
            sumMulThree = sumMulThree + i;
        }
    }
    cout << sum << '\n';
    cout << sumMulThree << '\n';

    return 0;
}
