#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pi 2*acos(0.0)
#define eps 1e-9
#define PII pair<int,int> 
#define PDD pair<double,double>
#define LL long long
#define INF 1000000000

using namespace std;

class MarbleDecoration
 {
	public:
	int maxLength(int R, int G, int B) 
	{
		vector<int> mar;
		mar.pb(R);mar.pb(G);mar.pb(B);
		sort(mar.begin(),mar.end());
		
		if(mar[1]==mar[2]) return(mar[1]+mar[2]);
		return(mar[1]*2+1);
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
		cout << "Running example tests for MarbleDecoration..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1310569368)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 256.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		MarbleDecoration _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int R = 0;
				int G = 0;
				int B = 0;
				_expected = 0;
				_received = _obj.maxLength(R, G, B); break;
			}
			case 1:
			{
				int R = 3;
				int G = 0;
				int B = 0;
				_expected = 1;
				_received = _obj.maxLength(R, G, B); break;
			}
			case 2:
			{
				int R = 5;
				int G = 1;
				int B = 2;
				_expected = 5;
				_received = _obj.maxLength(R, G, B); break;
			}
			case 3:
			{
				int R = 7;
				int G = 7;
				int B = 4;
				_expected = 14;
				_received = _obj.maxLength(R, G, B); break;
			}
			case 4:
			{
				int R = 2;
				int G = 3;
				int B = 5;
				_expected = 7;
				_received = _obj.maxLength(R, G, B); break;
			}
			case 5:
			{
				int R = 13;
				int G = 13;
				int B = 13;
				_expected = 26;
				_received = _obj.maxLength(R, G, B); break;
			}
			default: return 0;
		}
		if (_received == _expected)
			cout << "#" << _tc << ": Passed" << endl;
		else
		{
			cout << "#" << _tc << ": Failed" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
