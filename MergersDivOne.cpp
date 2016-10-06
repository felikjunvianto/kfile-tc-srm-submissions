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

class MergersDivOne
 {
	public:
	double findMaximum(vector <int> revenues) 
	{
		sort(revenues.begin(),revenues.end());
		double ans = revenues[0];
		
		for(int x=1;x<revenues.size();x++) ans=(ans+(double)revenues[x])/2.0;
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
		cout << "Running example tests for MergersDivOne..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1331122131)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		MergersDivOne _obj;
		double _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int revenues[] = {5, -7, 3};
				_expected = 1.5;
				_received = _obj.findMaximum(vector <int>(revenues, revenues+sizeof(revenues)/sizeof(int))); break;
			}
			case 1:
			{
				int revenues[] = {10, -17};
				_expected = -3.5;
				_received = _obj.findMaximum(vector <int>(revenues, revenues+sizeof(revenues)/sizeof(int))); break;
			}
			case 2:
			{
				int revenues[] = {12, 12, 12, 12, 12};
				_expected = 12.0;
				_received = _obj.findMaximum(vector <int>(revenues, revenues+sizeof(revenues)/sizeof(int))); break;
			}
			case 3:
			{
				int revenues[] = {0, 0, 0, 0, 0, 100};
				_expected = 50.0;
				_received = _obj.findMaximum(vector <int>(revenues, revenues+sizeof(revenues)/sizeof(int))); break;
			}
			case 4:
			{
				int revenues[] = {10, -10, 100, -100, 1000, -1000};
				_expected = 491.25;
				_received = _obj.findMaximum(vector <int>(revenues, revenues+sizeof(revenues)/sizeof(int))); break;
			}
			default: return 0;
		}
		if (abs(_expected-_received) < 1e-9 || (_received > min(_expected*(1.0-1e-9), _expected*(1.0+1e-9)) && _received < max(_expected*(1.0-1e-9), _expected*(1.0+1e-9))))
			cout << "#" << _tc << ": Passed" << endl;
		else
		{
			cout << "#" << _tc << ": Failed" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
