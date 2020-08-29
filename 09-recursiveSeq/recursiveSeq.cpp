#include <iostream>

using namespace std;

int rec_seq(long long i)
{
    if ( i == 0)
        return 5;
    
    int tmp = rec_seq(i-1);

    if ( i % 2 == 0)
        return tmp - 21;
    else
        return tmp * tmp;
}

int main()
{
    long long n;
    cin >> n;
    
    cout << rec_seq(n) << "\n";
}
