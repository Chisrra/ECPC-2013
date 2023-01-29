#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("cubes.in", "r", stdin);

    int test, n, vals, mitad, pos;
    vector<ll> cubes;
    vector<ll> arreglo;

    cin>>test;
    for(int t = 0; t < test; t++)
    {
        cin >> n;
        cubes.clear();
        arreglo.resize(n);

        for(ll i = 0; i < n; i++)
        {
            cin >> vals;
            cubes.push_back(vals);
        }

        pos = 0;
        mitad = (cubes.size()) / 2;
        sort(cubes.begin(), cubes.end());

        if( (cubes.size() % 2) == 0)
        {
            for(ll i = 0; i < mitad; i++)
            {
                arreglo[mitad - i -1] = cubes[pos];
                arreglo[mitad + i] = cubes[pos+1];
                pos += 2;
            }
        }
        else
        {
            arreglo[mitad] = cubes[0];
            pos++;
            for(ll i = 1; i <= mitad; i++)
            {
                arreglo[mitad - i] = cubes[pos];
                arreglo[mitad + i] = cubes[pos+1];
                pos += 2;
            }
        }

        cout << "Case " << t + 1 << ":" << endl;
        for(ll i = 0; i < (arreglo.size() - 1); i++)
            cout<< arreglo[i] << " ";
        cout << *arreglo.rbegin() << endl;
    }
    return 0;
}
