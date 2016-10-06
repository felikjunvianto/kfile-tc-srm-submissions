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

class TheArray {
	public:
	int find(int n, int d, int first, int last) {
		int ans = max(first, last);
		
		for(int i = 2; i < n; i++)
		{
			bool lanjut = false;
			for(int dd = d; dd >= 0 && !lanjut; dd--) if(first + dd <= last + (n - i) * d)
			{
				first += dd;
				ans = max(ans, first);
				lanjut = true;
			}
			
			for(int dd = d; dd >= 0 && !lanjut; dd--) if(first - dd >= last - (n - i) * d)
			{
				first -= dd;
				ans = max(ans, first);
				lanjut = true;
			}
		}
		
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
		cout << "Testing TheArray (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1362849004;
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
		TheArray _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int n = 3;
				int d = 5;
				int first = 2;
				int last = 4;
				_expected = 7;
				_received = _obj.find(n, d, first, last); break;
			}
			case 1:
			{
				int n = 10;
				int d = 100;
				int first = 999;
				int last = 100;
				_expected = 999;
				_received = _obj.find(n, d, first, last); break;
			}
			case 2:
			{
				int n = 1000000;
				int d = 0;
				int first = 474;
				int last = 474;
				_expected = 474;
				_received = _obj.find(n, d, first, last); break;
			}
			case 3:
			{
				int n = 97;
				int d = 53;
				int first = -92;
				int last = 441;
				_expected = 2717;
				_received = _obj.find(n, d, first, last); break;
			}
			case 4:
			{
				int n = 99;
				int d = 3;
				int first = -743;
				int last = -619;
				_expected = -535;
				_received = _obj.find(n, d, first, last); break;
			}
			/*case 5:
			{
				int n = ;
				int d = ;
				int first = ;
				int last = ;
				_expected = ;
				_received = _obj.find(n, d, first, last); break;
			}*/
			/*case 6:
			{
				int n = ;
				int d = ;
				int first = ;
				int last = ;
				_expected = ;
				_received = _obj.find(n, d, first, last); break;
			}*/
			/*case 7:
			{
				int n = ;
				int d = ;
				int first = ;
				int last = ;
				_expected = ;
				_received = _obj.find(n, d, first, last); break;
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
