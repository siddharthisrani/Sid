#include<iostream>
using namespace std;
int main(){

    int a[5]={23,4,6,7,8};
    int max=a[0];

    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        { 
            max=a[i];
           
        }
        
    }
    cout<<max<<endl;
}