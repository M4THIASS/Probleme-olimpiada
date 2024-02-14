#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    int n,m,t,si,pi,vs[100],nr,vp[100],v[200]={0},k=1;
    f>>n>>m>>t;
    nr=2;
    int i=1,j=1;
    while(f>>si>>pi)
    {
        vs[i]=si;
        vp[i]=pi;
        i++;
    }
    for(i=1;i<=m;i++)
    {
    int ok=0;
        for(j=1;j<=n;j++)
            {if(!v[j])
        {
            v[j]=vp[i];
            cout<<j<<endl;
            ok=1;
            break;
        }
        else if(v[j]<vs[i])
        {
            v[j]=vp[i];
            cout<<j<<endl;
            ok=1;
            break;
        }}
        if(ok==0)
        cout<<-1<<endl;
        
    }
        for(j=1;j<=n;j++)
            if(v[j]<=t)
            v[j]=0;
        for(j=1;j<=n;j++)
        if(v[j])
        cout<<j<<" ";
        else cout<<-1<<" ";
    
    
    return 0;
}


/*
2 4 6
1 3
2 10
4 6
5 8
*/
