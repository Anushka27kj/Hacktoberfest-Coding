#include<bits/stdc++.h>
using namespace std;

int fibb(int n)
{
    if (n==0 || n==1) {
        return 1;
    }
    return fibb(n-1) + fibb(n-2);
}

int main()
{
    int n = 5;
    cout<< fibb(n) <<endl;
    return 0;
}
