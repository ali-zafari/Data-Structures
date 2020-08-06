#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int q;
    vector<int> people;

    cin >> n >> q;

    int person;
    for(int j = 0; j < n; j++){
        cin >> person;
        people.push_back(person);
    }
    
    for(int i = 0; i < q; i++){
        int today_temp;
        int sad_people_num = 0;

        cin >> today_temp;
        for(int j = 0; j < n; j++){
            if(today_temp > people[j])
                sad_people_num++;
        }
        cout << sad_people_num << "\n";
    }
}