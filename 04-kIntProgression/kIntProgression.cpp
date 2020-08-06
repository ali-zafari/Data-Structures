#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    vector <int> digits;

    cin >> n >> k;

    int digit;
    for(int j = 0; j < n; j++){
        cin >> digit;
        digits.push_back(digit);
    }

    long long min_steps = 1000 * 1000 * 1000;

    for (int a1 = -100000; a1 <= 100000; a1++){
        long long steps = 0;
        for (int i = 0; i < n; i++){
            long long temp_steps = abs(digits[i] - (a1 + i * k));
            steps += temp_steps;
        }
        min_steps = min(steps, min_steps);
        steps = 0;
    } 

    cout << min_steps << '\n';
    return 0;
}
