#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>

#define LL long long
#define INF 1000000000
#define EPS 1e-9
#define PI 2*acos(0.0)

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int,int> 

using namespace std;

const LL MOD = 1000000007;

LL modExp(LL a, int b)
{
	if(b == 0) return 1LL;
	if(b == 1) return a;
	
	LL halved = modExp((LL) a, b / 2) % MOD;
	LL ret = (halved * halved) % MOD;
	if(b & 1) ret = (ret * a) % MOD;
	return ret;
}

class PairsOfStrings {
	public:
	int getNumber(int n, int k) {
		vector<int> d;
		for(int i = 1; i * i <= n; i++) if(n % i == 0)
		{
			d.pb(i);
			if(i * i != n) d.pb(n / i);
		} sort(d.begin(), d.end());
		
		LL total[(int) d.size() + 10];
		for(int i = 0; i < d.size(); i++)
		{
			LL all = modExp((LL) k, d[i]) % MOD;
			for(int j = 0; j < i; j++) if(d[i] % d[j] == 0)
			{
				all = (all - total[j]) % MOD;
				while(all < 0) all += MOD;
			}
			total[i] = all;
		}
		
		LL ret = 0;
		for(int i = 0; i < d.size(); i++) ret = (ret + (total[i] * d[i]) % MOD) % MOD;
		return ret;
	}
};

// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1) 
	{
		cout << "Testing PairsOfStrings (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1389264765;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		PairsOfStrings _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int n = 2;
				int k = 2;
				_expected = 6;
				_received = _obj.getNumber(n, k); break;
			}
			case 1:
			{
				int n = 3;
				int k = 2;
				_expected = 20;
				_received = _obj.getNumber(n, k); break;
			}
			case 2:
			{
				int n = 3;
				int k = 4;
				_expected = 184;
				_received = _obj.getNumber(n, k); break;
			}
			case 3:
			{
				int n = 6;
				int k = 2;
				_expected = 348;
				_received = _obj.getNumber(n, k); break;
			}
			case 4:
			{
				int n = 100;
				int k = 26;
				_expected = 46519912;
				_received = _obj.getNumber(n, k); break;
			}
			/*case 5:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.getNumber(n, k); break;
			}*/
			/*case 6:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.getNumber(n, k); break;
			}*/
			/*case 7:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.getNumber(n, k); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
