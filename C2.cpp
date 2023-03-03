#include <iostream>

using namespace std;

bool check(string s)
{
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main ()
{
    string s; cin >> s;
    if(check(s)) cout << "Yes";
    else cout << "No";
    return 0;
}
