#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

#define EgyptGoal 1
#define GhanaGoal 6

int main()
{
    string score;
    int n, pos;
    int eGoals;
    int gGoals;

    freopen("ghanophobia.in", "r", stdin);
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> score;
        pos = score.find(':');

        eGoals = EgyptGoal;
        gGoals = GhanaGoal;
        eGoals += stoi(score.substr(0,pos));
        gGoals += stoi(score.substr(pos+1));

        if(eGoals > gGoals)
            cout << "Case " << i << ": YES" << endl;
        else if(eGoals < gGoals)
            cout << "Case " << i << ": NO" << endl;
        else
        {
            eGoals += EgyptGoal;
            gGoals += gGoals - GhanaGoal;

            if(eGoals > gGoals)
                cout << "Case " << i << ": YES" << endl;
            else if(eGoals < gGoals)
                cout << "Case " << i << ": NO" << endl;
            else
                cout << "Case " << i << ": PENALTIES" << endl;
        }

    }

    return 0;
}
