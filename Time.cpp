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


class Time 
{
	public:
	string whatTime(int seconds)
	{
		int hour=(int)seconds/3600;
		seconds%=3600;
		int minute=(int)seconds/60;
		seconds%=60;
		
		string ans;
		do
		{
			ans=(char)((seconds%10)+'0')+ans;
			seconds/=10;
		}while(seconds>0);
		ans=':'+ans;
		
		do
		{
			ans=(char)((minute%10)+'0')+ans;
			minute/=10;
		}while(minute>0);
		ans=':'+ans;
		
		do
		{
			ans=(char)((hour%10)+'0')+ans;
			hour/=10;
		}while(hour>0);
		
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
		cout << "Running example tests for Time..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1299858358)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 200.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		Time _obj;
		string _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int seconds = 0;
				_expected = "0:0:0";
				_received = _obj.whatTime(seconds); break;
			}
			case 1:
			{
				int seconds = 3661;
				_expected = "1:1:1";
				_received = _obj.whatTime(seconds); break;
			}
			case 2:
			{
				int seconds = 5436;
				_expected = "1:30:36";
				_received = _obj.whatTime(seconds); break;
			}
			case 3:
			{
				int seconds = 86399;
				_expected = "23:59:59";
				_received = _obj.whatTime(seconds); break;
			}
			default: return 0;
		}
		if (_received == _expected)
			cout << "#" << _tc << ": Passed" << endl;
		else
		{
			cout << "#" << _tc << ": Failed" << endl;
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
