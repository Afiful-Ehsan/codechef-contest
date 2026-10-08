#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x ;
    cin >> x ;
     int k;
    cin>> k;
     int y;
    cin>> y;

    int i = k;

    while(i <= x * k)
    {
        if(i == y)
        {
            cout << "YES" << endl;
            return 0;
        }

        i += k;
    }

    cout << "NO" << endl;

    return 0;
}