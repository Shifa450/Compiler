#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while(cin>>x)
    {
        double y;
        cin>>y;

        if(x%5!=0)
            cout<<fixed<<setprecision(2)<<y<<endl;
        else if(x>(y-.5))
        {
            cout<<fixed<<setprecision(2)<<y<<endl;
        }
        else
            cout<<fixed<<setprecision(2)<<(y-.5)-x<<endl;
    }

    return 0;
}

