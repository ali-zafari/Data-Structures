#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count=0;
    for (int a = 1; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int c = n - (a + b);
            if (a + b > c && c >= b)
            {
                count++;
            }
        }
    }

    cout << count << "\n";
}
