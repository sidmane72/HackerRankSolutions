    //problem 2


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[2*n-1][2*n-1];
    int low=0,high=2*n-1,num=n;;
    while(num!=0){
        for(int i=low;i<high;i++)
            a[low][i]=num;
        for(int i=low;i<high;i++)
            a[i][high-1]=num;
        for(int i=low;i<high;i++)
            a[high-1][i]=num;
        for(int i=low;i<high;i++)
            a[i][low]=num;
        low=low+1;
        high=high-1;
        num=num-1;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

