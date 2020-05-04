#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long int n;
    long int num_dividers = 0;
    
    cin >> n;
    double sqrt_n = sqrt(n);

    for(int i = 1; i <= sqrt_n; i++){
        if(n%i == 0)
            num_dividers += 2;
    }
    if(sqrt_n-floor(sqrt_n) == 0)
        num_dividers -= 1;
    
    cout << num_dividers;
    return 0;
}