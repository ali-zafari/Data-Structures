#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long numbers[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    
    bool operation = false;
    bool yes = true; //yes
    for (long long i = 0; i < n; i++)
    {
        // for (int i = 0; i < n; i++)
        // {
        //     cout << numbers[i] << "|";
        // }
        
        // cout << "\n";

        if ((i + 1) != numbers[i])
        {
            if (operation == true)
            {    
                yes = false;
                break;
            }
            operation = true;
            if (numbers[numbers[i] - 1] != (i + 1))
            {
                yes = false;
                break;
            }
            numbers[numbers[i] - 1] = numbers[i];
        }
    }

    if (yes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}