#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }
        int minVol = stations[0];
        for(int i = 0; i < n-1; i++){
            int difference = stations[i+1] - stations[i];  
            minVol = max(minVol, difference);
        }
        minVol = max(minVol, (x-stations[n-1])*2);
        cout << minVol << endl;
    }
    return 0;

}