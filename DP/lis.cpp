
#include<bits/stdc++.h>
using namespace std;

int lis(int *arr, int n)
{
    int *output = new int[n];
    output[0] = 1;
    for (int i=1; i<n; i++) {
        output[i] = 1;
        for (int j=i-1; j>=0; j--) {
            if (arr[j] < arr[i]) {
                int possibleAns = output[j] + 1;
                if (output[i] < possibleAns) {
                    output[i] = possibleAns;
                }
            }
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        ans = max(output[i], ans);
    }
//     deletinh output array
    delete []output;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<< lis(arr, n) << endl;
    return 0;
}
