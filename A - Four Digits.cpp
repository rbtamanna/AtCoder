#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin>>s;
     if(s.length()==4) cout<<s;
     else if(s.length()==3) cout<<0<<s;
      else if(s.length()==2) cout<<"00"<<s;
      else  cout<<"000"<<s;

}
