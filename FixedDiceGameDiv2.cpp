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

class FixedDiceGameDiv2 
{
	public:
	double getExpectation(int a, int b) 
	{
		int allWin = 0, totExp = 0;
		for(int aa = 2; aa <= a; aa++)
		{
			int num = min(aa - 1, b);
			totExp += num;
			allWin += num * aa;
		}
		
		return allWin / (double) totExp;
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
		cout << "Testing FixedDiceGameDiv2 (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1403971380;
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
		FixedDiceGameDiv2 _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int a = 2;
				int b = 2;
				_expected = 2.0;
				_received = _obj.getExpectation(a, b); break;
			}
			case 1:
			{
				int a = 4;
				int b = 2;
				_expected = 3.2;
				_received = _obj.getExpectation(a, b); break;
			}
			case 2:
			{
				int a = 3;
				int b = 3;
				_expected = 2.6666666666666665;
				_received = _obj.getExpectation(a, b); break;
			}
			case 3:
			{
				int a = 11;
				int b = 13;
				_expected = 7.999999999999999;
				_received = _obj.getExpectation(a, b); break;
			}
			/*case 4:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.getExpectation(a, b); break;
			}*/
			/*case 5:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.getExpectation(a, b); break;
			}*/
			/*case 6:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.getExpectation(a, b); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (abs(_expected-_received) < 1e-9 || (_received > min(_expected*(1.0-1e-9), _expected*(1.0+1e-9)) && _received < max(_expected*(1.0-1e-9), _expected*(1.0+1e-9))))
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
