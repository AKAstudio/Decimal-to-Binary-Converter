#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long int a[10],n,j,m,i,k,p,s,r,z,c;
cout<<" Baraye Kharej Shodan Az Barname 0 Ra Vared Konid :) "<<endl;
while(m!=0&&k!=0)
{
cout<<" Mabna Ra Vared Konid ! (2 ya 10)"<<endl;
cin>>m;
if(m==2)
{
cout<<" Adad Ra Vare Konid ? "<<"\n";
cin>>n;
k=n;
while(n>0)
{
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
cout<<endl;
cout<<k<<" Adad Dar Mabnaye 2 : ";
for(j=i-1;j>=0;j--)
cout<<setw(2)<<a[j];
cout<<endl;
}
cout<<endl;
}
if(m==10)
{
z=0;
c=1;
cout<<" Adad Ra Vare Konid ? "<<endl;
cin>>n;
cout<<endl;
k=n;
while(n!=0)
{
r=n%10;
z=z+r*c;
c=c*2;
n=n/10;
}
cout<<k<<" Adad Dar Mabnaye 10 : ";
cout<<z<<endl;
cout<<endl;
}
if(m!=2&&m!=10&&m!=0)
cout<<" Faghat 2 Ya 10 :/ "<<endl;
}
cout<<" Barname Ra Bebandid !!! ";
    return 0;
}

