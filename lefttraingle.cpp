#include <iostream>
using namespace std;
int main (){
    int i,j,num;
    cout<<"enter a num";
     cin>>num;
     for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            if(j<=i){
                cout<<" *";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
     }
}