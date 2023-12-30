#include <iostream>
using namespace std;
int main()
{
    int cybrom[5]={12,3,4,5};
    cout<<cybrom<<endl; //base address
    cout<<sizeof(cybrom)<<endl;
    cout<<cybrom[1]<<endl; //will print 3
    cout<<cybrom[5]<<endl;//print garbage
    cout<<cybrom[4]<<endl; //null 0 ans
    cout<<cybrom[6]<<endl;//print garbage
}