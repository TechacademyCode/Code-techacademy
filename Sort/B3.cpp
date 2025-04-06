// https://lqdoj.edu.vn/problem/cppb2p127

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

vector<int> merge(vector<int>& a, vector<int>& b)
{
    int i = 0, j = 0;
    vector<int> c;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        vector<int> c;
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }

        c = merge(a, b);
        for (auto i : c)
        {
            cout << i << " ";
        }
        
    }
    return 0;
    
}