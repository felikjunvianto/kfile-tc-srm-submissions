#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<utility>
#include<stack>
#include<queue>

typedef long long LL;

using namespace std;
class SimpleGuess 
{
	public:
	int getMaximum(vector <int> hints)
	{
		int large,i,j,x,y;
		
		large=0;
		for(i=0;i<hints.size();i++)
			for(j=0;j<hints.size();j++)
			{
				x=(hints[i]+hints[j])/2;
				y=(hints[i]-hints[j])/2;
				
				if((x+y==hints[i])&&(x-y==hints[j]))
					if((x>0)&&(y>0))
						large=max(large,x*y);
			}
		return large;
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
		cout << "Running example tests for SimpleGuess..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1299600124)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		SimpleGuess _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int hints[] = { 1, 4, 5 };
				_expected = 6;
				_received = _obj.getMaximum(vector <int>(hints, hints+sizeof(hints)/sizeof(int))); break;
			}
			case 1:
			{
				int hints[] = { 1, 4, 5, 8 };
				_expected = 12;
				_received = _obj.getMaximum(vector <int>(hints, hints+sizeof(hints)/sizeof(int))); break;
			}
			case 2:
			{
				int hints[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
				_expected = 20;
				_received = _obj.getMaximum(vector <int>(hints, hints+sizeof(hints)/sizeof(int))); break;
			}
			case 3:
			{
				int hints[] = { 2, 100 };
				_expected = 2499;
				_received = _obj.getMaximum(vector <int>(hints, hints+sizeof(hints)/sizeof(int))); break;
			}
			case 4:
			{
				int hints[] = { 50, 58, 47, 57, 40 };
				_expected = 441;
				_received = _obj.getMaximum(vector <int>(hints, hints+sizeof(hints)/sizeof(int))); break;
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
