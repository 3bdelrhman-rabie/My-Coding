
/*  _    _         _           _                               ____        _     _
   / \  | |__   __| | ___ _ __| |__  _ __ ___   __ _ _ __     |  _ \ __ _ | |__ (_) ___
  / _ \ | '_ \ / _` |/ _ \ '__| '_ \| '_ ` _ \ / _` | '_ \    | |_) / _` || '_ \| |/ _ \
 / ___ \| |_) | (_| |  __/ |  | | | | | | | | | (_| | | | |   |  _ < (_| || |_) | |  __/
/_/   \_\_.__/ \__,_|\___|_|  |_| |_|_| |_| |_|\__,_|_| |_|___|_| \_\__,_||_.__/|_|\___|
                                                         |_____|

 ____      _    _   _ ____   ___  __  __     ____ ___  ____  _____ ____  ____
|  _ \    / \  | \ | |  _ \ / _ \|  \/  |   / ___/ _ \|  _ \| ____|  _ \/ ___|
| |_) |  / _ \ |  \| | | | | | | | |\/| |  | |  | | | | | | |  _| | |_) \___ \
|  _ <  / ___ \| |\  | |_| | |_| | |  | |  | |__| |_| | |_| | |___|  _ < ___) |
|_| \_\/_/   \_\_| \_|____/ \___/|_|  |_|___\____\___/|____/|_____|_| \_\____/
                                       |_____|
*/

#include <bits/stdc++.h>
#include <tr1/unordered_map>

#define ull unsigned long long
#define ll long long
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).end()
#define NO cout <<

#define YES cout <<

#define T     \
    int t;    \
    cin >> t; \
    while (t--)
#define OO 0x3f3f3f3f
#define IN(v, n)                \
    for (int i = 0; i < n; i++) \
    cin >> v[i]
#define VIN                     \
    for (int i = 0; i < n; i++) \
    cin >> v[i]
#define pb(x) push_back(x)
#define pob pop_back()
#define vint vector<int>
#define vll vector<ll>
#define pqint priority_queue<int>
#define pqll priority_queue<int>
#define unmap unordered_map
#define ii pair<int, int>
#define cout(x)           \
    for (auto &i : x)     \
        cout << i << ' '; \
    endl

                                                                                                                        const long long INF = 1ll << 32;
const int N = 1e6;
const int mod = 1e9 + 7;
// abcdefghijklmnopqrstuvwxyz

using namespace std::tr1;
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int index = 0, ma = 0;

    for (size_t i = 0; i < n; i++)
    {
        v[i] = (v[i] - 1) / x;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (ma <= v[i])
        {
            ma = v[i];
            index = i;
        }
    }

    cout << index + 1;

    return 0;
}