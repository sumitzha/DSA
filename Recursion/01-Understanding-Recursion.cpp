#include <bits/stdc++.h>
using namespace std;

void ReachHome(float src, float dest)
{
    cout << "source : " << src;
    cout << "\tDestination : " << dest << endl;

    if (src >= dest)
    {
        cout << "----Got to the home----";
        return;
    }

    // taking a step at a time src moves closer to destination
    // we know that averge human step = 0.75
    src = src + 0.75;
    // we can also do dest-=0.75;

    // again move towards destination
    ReachHome(src, dest);
}

int main()
{
    // suppose your initial point as 0
    // you need to go 10 metres and you take a average step of
    float src = 0, dest = 10;

    ReachHome(src, dest);

    return 0;
}