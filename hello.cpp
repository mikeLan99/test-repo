#include<bits/stdc++.h>

using namespace std;

// program for factorial 

int fact(int x)
{
    if(x<=1)
        return 1;

    return x*fact(x-1);
}
int main()
{
    int x = 10;

    int res = fact(x);
    cout<<res;
    

    return 0;

}