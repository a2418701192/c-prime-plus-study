#include <iostream>

using namespace std;

int main()
{
    int Sales_volume[12];
    int sum=0;
    char month[12][5]={
    {"Jan"},{"Feb"},{"Mar"},{"Apr"},{"Mar"},
    {"Jun",},{"Jul"},{"Aug"},{"Sept"},{"Oct"},
    {"Nov"},{"Dec"},
    };
    char(*pr)[5];
    pr=month;
    for(int i=0;i<12;i++){
        cout<<*(pr+i)<<":";
        cin>>Sales_volume[i];
    };
    for(int i=0;i<12;i++){
        sum+=Sales_volume[i];
    }
    cout<<"sum ="<<sum<<endl;
    return 0;
}
