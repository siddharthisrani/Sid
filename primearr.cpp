#include <iostream>
using namespace std;
int main(){

    int d[8],i,g;
    int a[8]={23,5,7,9,89,1,87,31};
    for(i=0;i<8;i++){

        for(g=2;g<a[i];g++){

            if(a[i]%g==0){
                break;
            }
        }
        if(a[i]==g){
            cout<<g<<"\t";
        }
    }
}