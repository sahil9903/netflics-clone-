#include <iostream>
#include <cmath>
using namespace std;
int decimaltobinary(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit= (n&1);
        binaryno = bit*pow(10,i++) + binaryno ;
        n = n >>1;
    }
    return binaryno;
}

int main(){
    int n;
    cin>>n;
    int binary= decimaltobinary(n);
    cout<<binary<<endl;
}