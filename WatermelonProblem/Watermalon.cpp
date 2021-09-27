#include<iostream>
using namespace std;
int main()
{int w;bool c=false;

   cin>>w;
if(w>0 && w<=100)
    {for(int i=1;i<=(w/2);i++)
    {if(i%2==0 && (w-i)%2!=1 &&(w)>0 )
    {c=true;cout<<"YES";
    break;
}}}
if(c==false)cout<<"NO";

}
