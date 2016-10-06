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

class LuckyRemainder
{
	public:
	int getLuckyRemainder(string X) 
	{
		int x,num=0;
		for(x=0;x<X.size();x++) num+=(int)(X[x]-'0');
		num-=(int)X.size()/9;
		return(num%9);
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
		cout << "Running example tests for LuckyRemainder..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1307531238)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		LuckyRemainder _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string X = "123";
				_expected = 6;
				_received = _obj.getLuckyRemainder(X); break;
			}
			case 1:
			{
				string X = "24816";
				_expected = 3;
				_received = _obj.getLuckyRemainder(X); break;
			}
			case 2:
			{
				string X = "8";
				_expected = 8;
				_received = _obj.getLuckyRemainder(X); break;
			}
			case 3:
			{
				string X = "11235813213455";
				_expected = 7;
				_received = _obj.getLuckyRemainder(X); break;
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
