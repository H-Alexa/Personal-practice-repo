#include<iostream>
#include<cstring>
using namespace std;

bool check(string& S, int* cnt,int* cns, int st, int en)
{
    for(int i=0;i<60;i++)
    {
       // if(cnt[i]>0) cout<<cnt[i]<<" "<<cns[i]<<"\n";
        if(cnt[i]>0&&cnt[i]>cns[i]) return false;
    }
    return true;
}
int idx(string& S, int i)
{
    if(S[i]>='A'&&S[i]<='Z') return S[i]-'A';
    else return S[i]-'a'+26;
}

string window(string S, string T) {
    int ns,nt,i,n;
    string ans;
    int cnt[60];
    int cns[60];
    memset(cns,0,sizeof(cns)); //variable
    memset(cnt,0,sizeof(cnt)); //Absolute
     //Variable
    ns=S.size();
    nt=T.size();
    if(nt>ns) return "";
    for(i=0;i<nt;i++) {
        int idx;
        if(T[i]>='A'&&T[i]<='Z') idx=T[i]-'A';
        else idx=T[i]-'a'+26;
        cnt[idx]++;
      //  cout<<T[i]<<" "<<idx;
    }
    cout<<"\n";
    int st,en;
    st=en=0;
    ans = S+"_";
    //cout<<ns<<" "<<nt<<"\n";
    bool ok=false;
    while(en<ns&&st<ns)
    {
        if(st>en) break;
    //    cout<<st<<" "<<en<<"\n";

        if(ok)
        {
            //cout<<"Y\n";
            if(en-st+1<=ans.size()) ans=S.substr(st,en-st+1);
            if(st+1>en||st+1>=ns) break;
            if(cnt[idx(S,st)]==0) {
                cns[idx(S,st)]--;
                st++;
            }
            else if(cnt[idx(S,st)]>=cns[idx(S,st)]) {
                en++;
                cns[idx(S,en)]++;
            }
            else if(cnt[idx(S,st)]<cns[idx(S,st)])
            {
                cns[idx(S,st)]--;
                st++;
            }
        }
        else  {
            cns[idx(S,en)]++;
            ok=check(S,cnt,cns,st,en);
            if(ok) continue;
            en++;
        }
        }
        en=ns-1;
        st++;
    if(ans.size()>S.size()) return "";
    return ans;
    }

void inp(string& s, string& t)
{
    cin>>s;
    cin>>t;
    return;
}
int main()
{
    string S,T;
    inp(S,T);
    cout<<window(S,T);
    return 0;
}