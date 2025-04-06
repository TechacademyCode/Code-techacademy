//Excercise: https://lqdoj.edu.vn/problem/cppb2p132

#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;


int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        set<char> digits;
        
        for(long long i = 0; i < n; i++){
            string num;
            
            cin >> num;
            for(char c : num){
                digits.insert(c);
            }
        }
        
        for(char d : digits){
            cout << d << " ";
        }
        cout << endl;
    }

    return 0;
}