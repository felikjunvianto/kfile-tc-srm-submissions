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

class ScotlandYard {
	public:
	int maxMoves(vector <string> taxi, vector <string> bus, vector <string> metro) {
		
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
		cout << "Testing ScotlandYard (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1366476645;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		ScotlandYard _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string taxi[] = {"NYN",
				                 "NNY",
				                 "NNN"};
				string bus[] = {"NNN",
				                "NNN",
				                "NNN"};
				string metro[] = {"NNN",
				                  "NNN",
				                  "NNN"};
				_expected = 2;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			case 1:
			{
				string taxi[] = {"NYY",
				                 "NNN",
				                 "NNN"};
				string bus[] = {"NNN",
				                "NNN",
				                "NNN"};
				string metro[] = {"NNN",
				                  "NNN",
				                  "NNN"};
				_expected = 1;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			case 2:
			{
				string taxi[] = {"NYYY",
				                 "YNYY",
				                 "YYNY",
				                 "YYYN"};
				string bus[] = {"NNNN",
				                "NNNN",
				                "NNNN",
				                "NNNN"};
				string metro[] = {"NNNN",
				                  "NNNN",
				                  "NNNN",
				                  "NNNN"};
				_expected = -1;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			case 3:
			{
				string taxi[] = {"NNY",
				                 "NNY",
				                 "NNN"};
				string bus[] = {"NYN",
				                "NNY",
				                "NNN"};
				string metro[] = {"NNN",
				                  "NNN",
				                  "YNN"};
				_expected = 2;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			case 4:
			{
				string taxi[] = {"NNN",
				                 "YNY",
				                 "NNN"};
				string bus[] = {"NNN",
				                "YNN",
				                "YNN"};
				string metro[] = {"NNN",
				                  "NNN",
				                  "YYN"};
				_expected = -1;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			case 5:
			{
				string taxi[] = {"NNNNYNNNYY",
				                 "NNYNNYYYYY",
				                 "NNNNNNNNNN",
				                 "YYNNYYNNNY",
				                 "NNYNNNNNNN",
				                 "YNYNYNNNYN",
				                 "NNYNYNNNYN",
				                 "NNNNNNYNNN",
				                 "NNNNNNNNNN",
				                 "NNNNNNYNNN"};
				string bus[] = {"NNYNNNYNNY",
				                "YNYNNYYNYY",
				                "NNNNNNNNNN",
				                "YNYNNYNYNY",
				                "NNYNNNNNYN",
				                "YNYNYNYNYN",
				                "NNYNNNNNNY",
				                "YNYNNNNNNN",
				                "NNNNNNNNNN",
				                "NNYNYNNNNN"};
				string metro[] = {"NNNNNNNYNN",
				                  "YNYNNNNNYN",
				                  "NNNNNNNNNN",
				                  "NYNNYNNNYY",
				                  "NNYNNNNNNN",
				                  "YNYNNNNNYY",
				                  "NNNNYNNNYN",
				                  "NNYNNNYNNN",
				                  "NNNNNNNNNY",
				                  "NNYNYNNNNN"};
				_expected = 21;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}
			/*case 6:
			{
				string taxi[] = ;
				string bus[] = ;
				string metro[] = ;
				_expected = ;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string taxi[] = ;
				string bus[] = ;
				string metro[] = ;
				_expected = ;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
			}*/
			/*case 8:
			{
				string taxi[] = ;
				string bus[] = ;
				string metro[] = ;
				_expected = ;
				_received = _obj.maxMoves(vector <string>(taxi, taxi+sizeof(taxi)/sizeof(string)), vector <string>(bus, bus+sizeof(bus)/sizeof(string)), vector <string>(metro, metro+sizeof(metro)/sizeof(string))); break;
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
