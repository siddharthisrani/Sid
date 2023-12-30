#include <iostream>
using namespace std;
int main()
{     int r,c;
      int a[3][3];
      int b[3][3];
      int sum[3][3];
    cout<<"Enter 1st array 9 numbers= ";
    for( r=0;r<3;r++){
        for( c=0;c<3;c++){
            cin>>a[r][c];
        }
    }
    cout<<"Enter 2nd array 9 number";
      for( r=0;r<3;r++){
        for( c=0;c<3;c++){
            cin>>b[r][c];
        }
    }
    cout<<"First array= "<<endl;
    for( r=0;r<3;r++){
            for( c=0;c<3;c++){
                cout<<a[r][c]<<" ";
            }
            cout<<endl;
        }
    cout<<"Second array= "<<endl;
    for( r=0;r<3;r++){
            for( c=0;c<3;c++){
                cout<<b[r][c]<<" ";
            }
            cout<<endl;
        }

 cout<<"sum of matrix= "<<endl;
   for(r=0;r<3;r++){
    for( c=0;c<3;c++){
   sum[r][c]=a[r][c]+b[r][c];
   cout<<sum[r][c]<<" ";
   }
   cout<<endl;
   }
}