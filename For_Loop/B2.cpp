
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            sum = sum + i; // n = 10 i = 2
            if(i != n / i)
            {
                sum = sum + n / i;
            }
        }
    }
    if(sum == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
