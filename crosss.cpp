#include <iostream>
using namespace std;
int main (){
         int i,j,f,num;
         cout<<"enter a num";
         cin>>num;
         f=num+1;
         for(i=1;i<=num;i++){
            for(j=1;j<=num;j++){
                if(j==i||j==f-i){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
         }
}