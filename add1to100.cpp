#include <iostream>

using namespace std;

int main()
{
    int Sum = 0;
    int SumMulThree = 0;
    for (int i = 1; i <= 100; i++)
    {
        Sum = Sum + i;/*
        if (i % 3 == 0)
        {
            SumMulThree = SumMulThree + i;
        }*/
    }
    //*,/등이 들어가면 시간이 더 걸린다
    for (int i = 3; i <= 100; i += 3)
    {
        SumMulThree += i;
    }
    cout << Sum << endl;
    cout << SumMulThree << endl;

    return 0;
}
