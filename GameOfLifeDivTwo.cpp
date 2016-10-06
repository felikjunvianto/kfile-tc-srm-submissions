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

class GameOfLifeDivTwo
 {
	public:
	string theSimulation(string init, int T) 
	{
			return init;
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
		cout << "Running example tests for GameOfLifeDivTwo..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1310565433)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		GameOfLifeDivTwo _obj;
		string _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string init = "01010";
				int T = 2;
				_expected = "00000";
				_received = _obj.theSimulation(init, T); break;
			}
			case 1:
			{
				string init = "010101";
				int T = 5;
				_expected = "101010";
				_received = _obj.theSimulation(init, T); break;
			}
			case 2:
			{
				string init = "111010";
				int T = 58;
				_expected = "111111";
				_received = _obj.theSimulation(init, T); break;
			}
			case 3:
			{
				string init = "111111111";
				int T = 511;
				_expected = "111111111";
				_received = _obj.theSimulation(init, T); break;
			}
			case 4:
			{
				string init = "110010000010111110010100001001";
				int T = 1000;
				_expected = "110000000001111110000000000001";
				_received = _obj.theSimulation(init, T); break;
			}
			case 5:
			{
				string init = "00101110011";
				int T = 0;
				_expected = "00101110011";
				_received = _obj.theSimulation(init, T); break;
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
