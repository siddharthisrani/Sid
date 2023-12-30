#include <iostream>
using namespace std;
int main(){
    int a[2][3];

    int r,c;
    cout<<"Enter 6 numbers= ";
    for( r=0;r<2;r++){
        for( c=0;c<3;c++){
            cin>>a[r][c];
        }
    }

    int max=a[0][0];
    int max1=a[0][0];

    for( r=0;r<2;r++){
        for( c=0;c<3;c++){
            if(r==0 && a[r][c]>max){
                max=a[r][c];
            }
             else if(r==1 && a[r][c]>max1){
                max1=a[r][c];
            }
        }
       
    }
     cout<<"row1= "<<max;
        cout<<"row2= "<<max1;


}