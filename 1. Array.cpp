include<bits/std++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; vector<int>arr(n); 
        for (int i = 0; i < n; i++) 
        { 
            cin >> arr[i];
            Solution1 ob;
            cout << ob.largest (arr, n) << "\n";
        }
    }
    return 0;
}

// Largest element in the array
class Solution1
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr.back();
    }
};


