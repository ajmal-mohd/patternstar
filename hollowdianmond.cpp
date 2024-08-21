#include <iostream>
using namespace std;
int main(){
    int i,j,k,t,numm,num,f;
    cout<<"enter num";
    cin>>num;
    numm=num*2-1;
    k=num+1;
    t=num-1;
    for(i=1;i<=num;i++){
        for(j=1;j<=numm;j++){
          if(j==k-i||j==t+i){
            cout<<"*";
          }else{
            cout<<" ";
          }

        }
        cout<<endl;
    }
    f=numm+1;
    for(i=1;i<=num;i++){
        for(j=1;j<=numm;j++){
            if(j==i||j==f-i){
                cout<<"*";
            }else{
                cout<<" ";

            }
        }
        cout<<endl;
    }
}