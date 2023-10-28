#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "The Sky is Blue";
    string reverse;
    int l=s.length()-1;
    int lastindex{l};
    for(int i=l;i>=0;i--)
    {
        if(s[i]==' ')
        {
            for(int j=i+1;j<=lastindex;j++)
            {
                reverse.push_back(s[j]);
            }
            reverse += " ";
            lastindex=i-1;
        }
    }
    for(int i=0;;i++)
    {
        if(s[i]==' ')
        break;
        reverse.push_back(s[i]);
    }
    cout<<reverse;
}