#include<iostream>
using namespace std;
int main(){

    int a[5]={23,4,6,3,8};
    int min=a[0];

    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min;
}