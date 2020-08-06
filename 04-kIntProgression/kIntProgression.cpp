#include <iostream>
#include <algorithm>
#include <vector>

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

    vector<int> step_vec;
    bool not_possible = false;

    for (int inc = -1; inc <= 1; inc++) {
        int steps = 0;
        if(inc =! 0)
            steps++;
        int a0 = digits[0] + inc;
        for (int i = 0 + 1; i < n; i++){
            cout << "digit, a0: " << digits[i] << ", "<< a0 << "\n";
            if(digits[i] == a0 + i * k)
                continue;
            else if(digits[i] - 1 == a0 + i * k || digits[i] + 1 == a0 + i * k)
                steps++;
            else{
                not_possible = true;
                break;
            }
        }
        cout << steps << "\n";
        if(not_possible == false)
            step_vec.push_back(steps);
    }

    for (int i = 0; i < step_vec.size(); i++) {
		cout << step_vec.at(i) << '|';
	}
    cout << (int) min_element(step_vec.begin(), step_vec.end());
}
