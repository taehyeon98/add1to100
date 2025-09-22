#include <iostream>

using namespace std;

int main()
{
    int Sum = 0;
    int SumMulThree = 0;
    for (int i = 1; i <= 100; i++)
    {
        Sum = Sum + i;
        if (i % 3 == 0)
        {
            SumMulThree = SumMulThree + i;
        }
    }
    cout << Sum << '\n';
    cout << SumMulThree << '\n';

    return 0;
}
