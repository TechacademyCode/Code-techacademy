#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    // 153
    while(n > 0)
    {
        sum = sum + pow(n % 10, 3);
        n = n / 10;
    }
    if(temp == sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
