#include <iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"After changing:"<<endl;
     
     for(int r=0;r<3;r++){
        for(int c=0;c<2;c++){
            cout<<a[c][r]<<" ";
        }
        cout<<endl;
    }
}