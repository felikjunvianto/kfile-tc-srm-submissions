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

vector<string> grid;
int MaxR, MaxC;
int dp[20][20];

int solve(int r, int c)
{
	if(r == grid.size() || c == grid[0].size()) return 0;
	if(dp[r][c] != -1) return dp[r][c];
	
	int &ret = dp[r][c] = INF;
	//opt 1: jalan 1 row ke bawah tanpa hapus
	bool kosong = true;
	for(int i = c; i < grid[r].size() && kosong; i++) if(grid[r][i] == 'X') kosong = false;
	if(kosong) ret = min(ret, solve(r + 1, c));
	
	//opt 2: jalan 1 col ke samping tanpa hapus
	kosong = true;
	for(int i = r; i < grid.size() && kosong; i++) if(grid[i][c] == 'X') kosong = false;
	if(kosong) ret = min(ret, solve(r, c + 1));
	
	//opt 3: jalan 1 .. MaxR row ke bawah dengan hapus
	for(int i = 1; i <= MaxR; i++)
	{
		if(r + i > grid.size()) break;
		ret = min(ret, 1 + solve(r + i, c));
	}
	
	//opt 4: jalan 1 .. MaxC col ke samping dengan hapus
	for(int i = 1; i <= MaxC; i++)
	{
		if(c + i > grid[0].size()) break;
		ret = min(ret, 1 + solve(r, c + i));
	}
	
	return ret;
}

class EllysFigurines {
	public:
	int getMoves(vector <string> board, int R, int C) {
		grid = board;
		MaxR = R, MaxC = C;
		memset(dp, -1, sizeof(dp));
		
		return solve(0, 0);
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
		cout << "Testing EllysFigurines (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1362244741;
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
		EllysFigurines _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string board[] = {".X.X.",
				                  "XX..X",
				                  ".XXX.",
				                  "...X.",
				                  ".X.XX"};
				int R = 1;
				int C = 2;
				_expected = 3;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}
			case 1:
			{
				string board[] = {".X.X.",
				                  "XX..X",
				                  ".X.X.",
				                  "...X.",
				                  ".X.XX"};
				int R = 2;
				int C = 2;
				_expected = 2;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}
			case 2:
			{
				string board[] = {"XXXXXXX"};
				int R = 2;
				int C = 3;
				_expected = 1;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}
			case 3:
			{
				string board[] = {"XXXXX",
				                  "X....",
				                  "XXX..",
				                  "X....",
				                  "XXXXX"};
				int R = 1;
				int C = 1;
				_expected = 4;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}
			case 4:
			{
				string board[] = {"XXX..XXX..XXX.",
				                  ".X..X....X...X",
				                  ".X..X....X...X",
				                  ".X..X....X...X",
				                  ".X...XXX..XXX.",
				                  "..............",
				                  "...XX...XXX...",
				                  "....X......X..",
				                  "....X....XXX..",
				                  "....X......X..",
				                  "...XXX..XXX..."};
				int R = 1;
				int C = 2;
				_expected = 7;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}
			/*case 5:
			{
				string board[] = ;
				int R = ;
				int C = ;
				_expected = ;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}*/
			/*case 6:
			{
				string board[] = ;
				int R = ;
				int C = ;
				_expected = ;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
			}*/
			/*case 7:
			{
				string board[] = ;
				int R = ;
				int C = ;
				_expected = ;
				_received = _obj.getMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), R, C); break;
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
