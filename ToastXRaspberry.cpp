#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define PII pair<int,int> 
#define pi 2*acos(0.0)
#define eps 1e-9
#define LL long long

using namespace std;


class ToastXRaspberry 
{
	public:
	int apply(int upper_limit, int layer_count)
	{
		int ans=layer_count/upper_limit;
		if(layer_count%upper_limit) ans++;
		return(ans);
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
		cout << "Running example tests for ToastXRaspberry..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1302969726)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		ToastXRaspberry _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int upper_limit = 4;
				int layer_count = 13;
				_expected = 4;
				_received = _obj.apply(upper_limit, layer_count); break;
			}
			case 1:
			{
				int upper_limit = 8;
				int layer_count = 5;
				_expected = 1;
				_received = _obj.apply(upper_limit, layer_count); break;
			}
			case 2:
			{
				int upper_limit = 73;
				int layer_count = 265;
				_expected = 4;
				_received = _obj.apply(upper_limit, layer_count); break;
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
