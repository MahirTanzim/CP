#include<iostream>
using namespace std;
int main()
{
    string s;
    int a=0, b=0l;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i]>=65&&s[i]<=90)
            a++;
        else if (s[i]>=97&&s[i]<=122)
            b++;
    }
    if(a>b)
    {
        for(int i = 0; i < s.length(); i++)
            if (s[i]>=97&&s[i]<=122)
                s[i]-=32;
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
            if (s[i]>=65&&s[i]<=90)
                s[i]+=32;
    }
    cout<<s<<endl;
    return 0;
}