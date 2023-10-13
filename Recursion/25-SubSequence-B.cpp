#include <bits/stdc++.h>
using namespace std;

void solve(string str, int index, string output, vector<string> &ans)
{
    // reached to the end states (index overflow)
    if (index >= str.length())
    {
        // => push to putput
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // exclude the element => go for next index
    solve(str, index + 1, output, ans);

    // include the element => push the element then go for next index
    char element = str[index];
    output.push_back(element);
    solve(str, index + 1, output, ans);
}

vector<string> subsequences(string str)
{
    // index of selection
    int index = 0;
    // current selected string
    string output = "";
    vector<string> ans;

    solve(str, index, output, ans);
    return ans;
}


int main(){
    
}