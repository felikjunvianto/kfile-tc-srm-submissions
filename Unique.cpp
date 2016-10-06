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

class Unique {
	public:
	string removeDuplicates(string S) {
		bool used[30];
		string ret;
		
		memset(used, false, sizeof(used));
		
		for(int i = 0; i < S.size(); i++) if(!used[S[i] - 'a'])
		{
			used[S[i] - 'a'] = true;
			ret += S[i];
		}
		
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
		cout << "Testing Unique (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1398529473;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		Unique _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string S = "banana";
				_expected = "ban";
				_received = _obj.removeDuplicates(S); break;
			}
			case 1:
			{
				string S = "aardvark";
				_expected = "ardvk";
				_received = _obj.removeDuplicates(S); break;
			}
			case 2:
			{
				string S = "xxxxx";
				_expected = "x";
				_received = _obj.removeDuplicates(S); break;
			}
			case 3:
			{
				string S = "topcoder";
				_expected = "topcder";
				_received = _obj.removeDuplicates(S); break;
			}
			/*case 4:
			{
				string S = ;
				_expected = ;
				_received = _obj.removeDuplicates(S); break;
			}*/
			/*case 5:
			{
				string S = ;
				_expected = ;
				_received = _obj.removeDuplicates(S); break;
			}*/
			/*case 6:
			{
				string S = ;
				_expected = ;
				_received = _obj.removeDuplicates(S); break;
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
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
