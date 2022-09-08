#include<iostream>
int pkString(int k, string s){
    // Write your code here
    int i,j,count=0;
    for(i=0;s[i]='\0';i++)
    {
        if(s[i]=='p')
        {
            count++;
        }
    }
    if(count==k)
    {
        return 1;
    }
}
int p()
{
    int n,k,t,i;
    cin >> t;
    for (i=0;i<t ;i++)
    { 
    cin >> n;
    cin >> k;
    string s;
    cin.getline(s,n);
    cout << pkString(k,s);
    }
   
    return 0;
}
