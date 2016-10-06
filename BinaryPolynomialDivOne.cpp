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

class BinaryPolynomialDivOne
 {
	public:
	int findCoefficient(vector <int> a, long long m, long long k) 
	{
		
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
		cout << "Running example tests for BinaryPolynomialDivOne..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1331124669)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 1000.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		BinaryPolynomialDivOne _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int a[] = {1, 0, 1};
				long long m = 3LL;
				long long k = 4LL;
				_expected = 1;
				_received = _obj.findCoefficient(vector <int>(a, a+sizeof(a)/sizeof(int)), m, k); break;
			}
			case 1:
			{
				int a[] = {1, 0, 1};
				long long m = 3LL;
				long long k = 5LL;
				_expected = 0;
				_received = _obj.findCoefficient(vector <int>(a, a+sizeof(a)/sizeof(int)), m, k); break;
			}
			case 2:
			{
				int a[] = {0, 0, 1, 1, 0, 1};
				long long m = 7LL;
				long long k = 15LL;
				_expected = 1;
				_received = _obj.findCoefficient(vector <int>(a, a+sizeof(a)/sizeof(int)), m, k); break;
			}
			case 3:
			{
				int a[] = {1};
				long long m = 1LL;
				long long k = 0LL;
				_expected = 1;
				_received = _obj.findCoefficient(vector <int>(a, a+sizeof(a)/sizeof(int)), m, k); break;
			}
			case 4:
			{
				int a[] = {1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0,
				           0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1};
				long long m = 2229508454872453LL;
				long long k = 96130299655104846LL;
				_expected = 1;
				_received = _obj.findCoefficient(vector <int>(a, a+sizeof(a)/sizeof(int)), m, k); break;
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
