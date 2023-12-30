#include <iostream>
using namespace std;
int main(){
    int a[2][3];
    int sum=0;
    cout<<"Enter 6 numbers= ";
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cin>>a[r][c];
        }
    }

    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            sum=sum+a[r][c];
        }
    }
    cout<<"Sum is= "<<sum;
}