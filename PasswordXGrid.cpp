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

class PasswordXGrid
 {
	public:
	
	int dp[50][50],N,M;
	vector<string> hor,ver;
	
	int solve(int r,int c)
	{
		if(r==N && c==M) return 0;
		if(dp[r][c]!=-1) return dp[r][c];
		
		int &ret = dp[r][c] = 0;
		if(r+1<=N) ret=max(ret,(int)(ver[r][c]-'0')+solve(r+1,c));
		if(c+1<=M) ret=max(ret,(int)(hor[r][c]-'0')+solve(r,c+1));
		return ret;
	}
	
	int minSum(vector <string> horizontal, vector <string> vertical) 
	{
		hor = horizontal;
		ver = vertical;
		N=vertical.size();
		M=horizontal[0].size();
		
		memset(dp,-1,sizeof(dp));
		return(solve(0,0));
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
		cout << "Testing PasswordXGrid (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1334421558;
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
		PasswordXGrid _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string horizontal[] = {"1","4"};
				string vertical[] = {"32"};
				_expected = 7;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}
			case 1:
			{
				string horizontal[] = {"47", "59"};
				string vertical[] = {"361"};
				_expected = 19;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}
			case 2:
			{
				string horizontal[] = {"36", "23", "49"};
				string vertical[] = {"890", "176"};
				_expected = 28;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}
			case 3:
			{
				string horizontal[] = {"8888585","5888585"};
				string vertical[] = {"58585858"};
				_expected = 58;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}
			case 4:
			{
				string horizontal[] = {"7777777","7777777","7777777","7777777"};
				string vertical[] = {"44444444","44444444","44444444"};
				_expected = 61;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}
			/*case 5:
			{
				string horizontal[] = ;
				string vertical[] = ;
				_expected = ;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string horizontal[] = ;
				string vertical[] = ;
				_expected = ;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string horizontal[] = ;
				string vertical[] = ;
				_expected = ;
				_received = _obj.minSum(vector <string>(horizontal, horizontal+sizeof(horizontal)/sizeof(string)), vector <string>(vertical, vertical+sizeof(vertical)/sizeof(string))); break;
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
