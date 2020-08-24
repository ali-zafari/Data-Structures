#include <iostream>

using namespace std;

long long* sequentioal_ins_sort(long long* a, int n){
    for (int j = 1; j < n; j++)
    {
        int p = j;
        while (p > 0 && a[p] < a[p-1])
        {
            long long temp = a[p];
            a[p] = a[p-1];
            a[p-1] = temp;
            p -= 1;
        }  
    }
    return a; 
}


long long* sort(long long* a, int i){
    if (i == 1)
        return a;
    
    long long* sorted = sort(a, i-1);
    long long key = a[i-1];

    for (int j = i-2; j >= 0; j--)
    {
        if (key < sorted[j])
        {
            long long temp = sorted[j];
            sorted[j] = key;
            sorted[j+1] = temp; 
        }
    }
    return sorted; 
}


int main()
{
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // long long* b = sequentioal_ins_sort(a, n);

    long long* b = sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }


    return 0;
}
