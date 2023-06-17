//AC solution
//Problem link https://codeforces.com/contest/1823/problem/C


#include<bits/stdc++.h>
using namespace std;

int ar[1009];

int ev,od;
void cal(int x)
{
ev+=(x/2);
od+=x%2;
}

int solve(int n)
{
int cn,bn;
ev=od=0;
 int i, j;
for(i=2;i<10000;i++)
{
cn=0;
	for(j=0;j<n;j++)
{
	if(ar[j]%i==0)
{
while(ar[j]%i==0)
{
	cn++;
ar[j]/=i;
}
}

}
cal(cn);


}

sort(ar, ar+n);

for(i=0;i<n;i++)
{
bn=0;
if(ar[i]>1)
{
	bn = 1;
int num = ar[i];
for(j=i+1;j<n;j++)
{
if(ar[j]%num==0)
{
	ar[j]/=num;
bn++;
}
}
cal(bn);
}
}
ev+=od/3;
return ev;

}


void sol()
{
int n,i;
cin>>n;
for(i=0;i<n;i++) cin>>ar[i];
cout<<solve(n)<<"\n";
return;
}


int main()

{

int t;

cin>>t;

while(t--)
sol();

return 0;

}
