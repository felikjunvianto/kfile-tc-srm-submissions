#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>

#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef long long LL;

using namespace std;
class OneDigitDifference {
	public:
	int getSmallest(int N) {
		int M=N;
		int digit=1;
		while(M>10) 
		{
			M/=10;
			digit*=10;
		}
		
		if(N-M*digit==N) return(N-M*digit+1); else return(N-M*digit);
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
		cout << "Running example tests for OneDigitDifference..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1292691723)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		OneDigitDifference _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int N = 9;
				_expected = 0;
				_received = _obj.getSmallest(N); break;
			}
			case 1:
			{
				int N = 0;
				_expected = 1;
				_received = _obj.getSmallest(N); break;
			}
			case 2:
			{
				int N = 900000123;
				_expected = 123;
				_received = _obj.getSmallest(N); break;
			}
			case 3:
			{
				int N = 30000;
				_expected = 0;
				_received = _obj.getSmallest(N); break;
			}
			case 4:
			{
				int N = 47;
				_expected = 7;
				_received = _obj.getSmallest(N); break;
			}
			case 5:
			{
				int N = 1907654321;
				_expected = 907654321;
				_received = _obj.getSmallest(N); break;
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
