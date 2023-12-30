#include <iostream>
using namespace std;
int main()
{   int b=0,c=0,d=0,e=0;
    int a[8]={3,1,2,3,2,1,2,5};

    for(int i=0;i<8;i++){
        if(a[i]==3){
        b++;            
        }
        if(a[i]==1){
            c++;
        }
        if(a[i]==2){
            d++;
        }
        if(a[i]==5){
            e++;
        }

    }
    cout<<"3="<<b<<endl;
     cout<<"1="<<c<<endl;
      cout<<"2="<<d<<endl;
       cout<<"5="<<e<<endl;
}