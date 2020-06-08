//  problem 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        count+=n/100;
        count+=(n%100)/20;
        count+=((n%100)%20)/10;
        count+=(((n%100)%20)%10)/5;
        count+=((((n%100)%20)%10)%5)/1;
        cout<<count<<endl;
    }
    return 0;
}
