#include <iostream>
using namespace std;
int main(){

    int min,sum=0;
    int a[2][3]={{10,3,4},{4,6,3}};
   
    for(int r=0;r<2;r++){
         min=sum;
         sum=0;
        for(int c=0;c<3;c++){
            sum=sum+a[r][c];
        }
        min=min>sum?sum:min;
    }
    cout<<"min value= "<<min;
}