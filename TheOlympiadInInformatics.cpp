#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <utility>
#include <set>
#include <bitset>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pi 2*acos(0.0)
#define eps 1e-9
#define PII pair<int,int> 
#define PDD pair<double, double> 
#define LL long long
#define INF 1000000000

using namespace std;

vector<int> num;

bool check(int score, int lim)
{
	if(score < 0) return false;
	
	int tot = 0;
	for(int i = 0; i < num.size(); i++) 
	{
		tot += num[i] / (score + 1);
		if(tot > lim) return false;
	}
	
	return true;
}

int binser(int lim)
{
	int l = 0, r = 1000000000;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		bool okenow = check(mid, lim), okeprev = check(mid - 1, lim);
		
		if(okenow && !okeprev) return mid; else
			if(okenow && okeprev) r = mid - 1; else
				if(!okenow) l = mid + 1;
	} return r;
}

class TheOlympiadInInformatics {
	public:
	int find(vector <int> sums, int k) {
		num = sums;
		return binser(k);
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
		cout << "Testing TheOlympiadInInformatics (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1362850673;
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
		TheOlympiadInInformatics _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int sums[] = {4, 7, 0, 5};
				int k = 0;
				_expected = 7;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}
			case 1:
			{
				int sums[] = {4, 7};
				int k = 2;
				_expected = 3;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}
			case 2:
			{
				int sums[] = {999999999};
				int k = 1000000000;
				_expected = 0;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}
			case 3:
			{
				int sums[] = {95, 23, 87, 23, 82, 78, 59, 44, 12};
				int k = 70;
				_expected = 6;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}
			/*case 4:
			{
				int sums[] = ;
				int k = ;
				_expected = ;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}*/
			/*case 5:
			{
				int sums[] = ;
				int k = ;
				_expected = ;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
			}*/
			/*case 6:
			{
				int sums[] = ;
				int k = ;
				_expected = ;
				_received = _obj.find(vector <int>(sums, sums+sizeof(sums)/sizeof(int)), k); break;
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
