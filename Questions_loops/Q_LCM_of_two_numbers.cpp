#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int start=max(a,b);
    int end=(a*b);
    for(int i=start;i<=end;i++){
        if(i%a==0 && i%b==0){
            cout<<i;
            break;
        }
    }
 
    return 0;
}