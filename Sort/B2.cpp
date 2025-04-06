// Exercise: https://lqdoj.edu.vn/problem/cppb2p127

#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <set>
#include <unordered_set>

int countMissing(vector<int> &a)
{
    int Left = a[0], Right = a[0];
    
    unordered_set<int> s;
    
    for(int num : a){
        if(num < Left) Left = num;
        if(num > Right) Right = num;
        s.insert(num);
    }
    
    int count = 0;
    
    for(int i = Left + 1; i < Right; i++){
        if(s.find(i) == s.end()){
            count ++;
        }
    }
    
    return count;
}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << countMissing(a);
    }
    
    return 0;
}