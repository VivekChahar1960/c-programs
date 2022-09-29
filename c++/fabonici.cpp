#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,i,num;
    cout<<"enter num:-";
    cin>>num;
    cout<<a<<endl;
    cout<<b<<endl;
    for(i=2;i<num;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;

}