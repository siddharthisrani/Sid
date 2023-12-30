#include <iostream>
using namespace std;
int main(){
    int a[5]={2,5,7,23,1};
    int r,c,t;
    cout<<"Simple value"<<endl;
    for(r=0;r<5;r++){
        cout<<a[r]<<endl;
    }
    for(r=0;r<5;r++){
        for(c=r+1;c<5;c++){
            if(a[r]<a[c]){
            t=a[r];
            a[r]=a[c];
            a[c]=t;}
        }
    }

cout<<"After dcending"<<endl;
for(r=0;r<5;r++){
   cout<<a[r]<<endl;
}
}
