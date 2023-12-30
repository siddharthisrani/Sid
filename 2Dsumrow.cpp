#include <iostream>
using namespace std;
int main(){
    int a[2][3];
    int sum=0,sum1=0,r,c;
    cout<<"Enter 6 numbers= ";
    for(r=0;r<2;r++){
        for( c=0;c<3;c++){

            cin>>a[r][c];
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }

    for(int r=0;r<2;r++){

        for(int c=0;c<3;c++){
            if(r==0){
                sum=sum+a[r][c];
                
            }
            else if(r==1){
                sum1=sum1+a[r][c];
               
            }
        }
    }
    cout<<" 1st row Sum is= "<<sum;
    cout<<" 2nd row Sum is= "<<sum1;
}