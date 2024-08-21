#include <iostream>
using namespace std;
int main(){
 int i,j,f,num,numm;
 cout<<"enter num";
 cin>>num;
 numm=num*2-1;
 f=numm+1;
  for(i=1;i<=num;i++){
    for(j=1;j<=numm;j++){
        if(j>=i&&j<=f-i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
  }

}