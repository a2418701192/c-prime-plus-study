#include <iostream>

using namespace std;

int main()
{
    int Sales_volume[3][12];
    int sum[3]={0,0,0};
    char month[12][5]={
    {"Jan"},{"Feb"},{"Mar"},{"Apr"},{"Mar"},
    {"Jun",},{"Jul"},{"Aug"},{"Sept"},{"Oct"},
    {"Nov"},{"Dec"},
    };
    char(*pr)[5];
    pr=month;
    for(int n=0;n<3;n++){
    for(int i=0;i<12;i++){
        cout<<*(pr+i)<<":";
        cin>>Sales_volume[n][i];
    };
    for(int i=0;i<12;i++){
        sum[n]+=Sales_volume[n][i];
    }
    cout<<n+1<<"year "<<"sum ="<<sum[n]<<endl;
    }
    int total_sum=0;
    for(int i=0;i<3;i++){
       total_sum+=sum[i];
    }
    cout<<"total sum ="<<total_sum<<endl;
    return 0;
}
