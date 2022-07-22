#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(9);
    s.push(6);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    return 0;
}
