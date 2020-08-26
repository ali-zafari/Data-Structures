#include <iostream>

using namespace  std;

long long sum_digit(long long x)
{
    if (x < 10)
        return x;
    
    long long sum = x % 10; 
    sum += sum_digit(x/10);
    
    return sum;
}

int main()
{
    long long x;
    cin >> x;

    cout << sum_digit(x);
}