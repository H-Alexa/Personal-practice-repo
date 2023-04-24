#include<bits/stdc++.h>
using namespace std;
int br[30];
char ar[30];
void sol()
{
    map <string, bool> mp;
    int n,i,a;
    for(i=0;i<26;i++)
    {
        cin>>br[i];
    }
    for(i=0;i<26;i++)
    {
        ar[i]=br[i]+'0';
    }

    string s[60009];
    cin>>n;
    bool ans=false;
    for(i=0;i<n;i++)
    {
    cin>>s[i];
    int ll = s[i].size();
    for(int j = 0;j<ll;j++)
    {
        s[i][j]=ar[s[i][j]-'A'];
    }
    if(!ans)
    {
    if(mp.find(s[i])!=mp.end()){

        ans=true;
    }
    else{
            mp[s[i]]=true;
    }
    }
}
    if(ans) cout<<"YES\n";


    else    cout<<"NO\n";

}

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cout<<"Case #"<<i<<": ";
        sol();
    }

}
