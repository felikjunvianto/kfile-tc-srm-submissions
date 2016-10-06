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

class BlackBoxDiv1 {
	public:
	int count(int N, int M) {
		
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
		cout << "Testing BlackBoxDiv1 (1000.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1389328786;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 1000.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		BlackBoxDiv1 _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int N = 2;
				int M = 2;
				_expected = 5;
				_received = _obj.count(N, M); break;
			}
			case 1:
			{
				int N = 1;
				int M = 1;
				_expected = 0;
				_received = _obj.count(N, M); break;
			}
			case 2:
			{
				int N = 3;
				int M = 5;
				_expected = 32478;
				_received = _obj.count(N, M); break;
			}
			case 3:
			{
				int N = 194;
				int M = 197;
				_expected = 647560542;
				_received = _obj.count(N, M); break;
			}
			/*case 4:
			{
				int N = ;
				int M = ;
				_expected = ;
				_received = _obj.count(N, M); break;
			}*/
			/*case 5:
			{
				int N = ;
				int M = ;
				_expected = ;
				_received = _obj.count(N, M); break;
			}*/
			/*case 6:
			{
				int N = ;
				int M = ;
				_expected = ;
				_received = _obj.count(N, M); break;
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
