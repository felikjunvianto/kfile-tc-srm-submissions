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

class ManySquares 
{
	public:
	int howManySquares(vector <int> sticks) 
	{
		int cnt[1010];
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < sticks.size(); i++) cnt[sticks[i]]++;
		
		int ans = 0;
		for(int i = 1; i <= 1000; i++) ans += cnt[i] / 4;
		return ans;
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
		cout << "Testing ManySquares (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1405004892;
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
		ManySquares _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int sticks[] = {1,1,2,2,1,1,2};
				_expected = 1;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			case 1:
			{
				int sticks[] = {3, 1, 4, 4, 4, 10, 10, 10, 10};
				_expected = 1;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			case 2:
			{
				int sticks[] = {1,2,3,4,1,2,3,4,1,2,3,1,2,3,4,1,2,3,3,3};
				_expected = 3;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			case 3:
			{
				int sticks[] = {1,1,1,2,2,2,3,3,3,4,4,4};
				_expected = 0;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			case 4:
			{
				int sticks[] = {1,1,1,2,1,1,1,3,1,1,1};
				_expected = 2;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			case 5:
			{
				int sticks[] = {2,2,4,4,8,8};
				_expected = 0;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}
			/*case 6:
			{
				int sticks[] = ;
				_expected = ;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int sticks[] = ;
				_expected = ;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
			}*/
			/*case 8:
			{
				int sticks[] = ;
				_expected = ;
				_received = _obj.howManySquares(vector <int>(sticks, sticks+sizeof(sticks)/sizeof(int))); break;
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
