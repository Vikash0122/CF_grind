#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],s1[105];
    cin >> s >> s1;
    for(int i=0;i<strlen(s);i++)
       {s[i] = tolower(s[i]);
        s1[i] = tolower(s1[i]);}
    cout << strcmp(s,s1) << endl;
}