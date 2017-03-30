#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long n;
    int a[100020],s1[100020],s2[100020];
    cin>>t;
    while(t--)
        {
        cin>>n;
        for(long i=0;i<n;i++)
            {
            cin>>a[i];
        }
        s1[0]=0;
        s1[0]=0;
        for(int i=0;i<n-1;i++)
            {
            s1[i+1]=max(s1[i],abs(a[i]-1)+s2[i]);
            s2[i+1]=max(s2[i]+abs(a[i]-a[i+1]),s1[i]+abs(a[i+1]-1));
        }
        cout<<max(s1[n-1],s2[n-1])<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}