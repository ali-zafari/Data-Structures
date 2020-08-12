#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
        if ((i + 1) != numbers[i])
            count++;

    if (count == 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}