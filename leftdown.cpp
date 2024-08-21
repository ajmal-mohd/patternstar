#include <iostream>
using namespace std;
int main(){
    int i,j,num,k;
    cout<<"enter num";
    cin>>num;
    k=num+1;
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            if(j<=k-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}