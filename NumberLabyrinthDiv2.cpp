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

class NumberLabyrinthDiv2
{
	public:
	
	typedef struct
	{
		int r,c,t,k;
	} cell;
	
	PII vis[100][100];
	int bawah,samping;
	queue<cell> q;
	int getMinimumNumberOfMoves(vector <string> board, int r1, int c1, int r2, int c2, int K) 
	{
		int dr[]={-1, 0, 1, 0};
		int dc[]={ 0, 1, 0,-1};
		
		bawah=board.size();
		samping=board[0].size();
		int x,y,z,ans=INF;
		for(y=0;y<bawah;y++)
			for(x=0;x<samping;x++) vis[y][x]=mp(INF,INF);
		
		q.push((cell){r1,c1,0,0});
		vis[r1][c1]=mp(0,0);
		while(!q.empty())
		{
			cell now=q.front();
			q.pop();
			if((now.r==r2)&&(now.c==c2)) ans=min(ans,now.t); else
				if(board[now.r][now.c]!='.')
				{
					int j=board[now.r][now.c]-'0';
					for(z=0;z<4;z++)
					{
						int sr=now.r+dr[z]*j,sc=now.c+dc[z]*j;
						if((sr>=0)&&(sr<bawah)&&(sc>=0)&&(sc<samping))
							if(vis[sr][sc]>mp(now.t+1,now.k))
							{
								vis[sr][sc]=mp(now.t+1,now.k);
								q.push((cell){sr,sc,now.t+1,now.k});
							}
					}
				} else 
				
				if(now.k+1<=K)
				{
					for(int i=1;i<=9;i++)
						for(z=0;z<4;z++)
						{
							int sr=now.r+dr[z]*i,sc=now.c+dc[z]*i;
							if((sr>=0)&&(sr<bawah)&&(sc>=0)&&(sc<samping))
								if(vis[sr][sc]>mp(now.t+1,now.k+1))
								{
									vis[sr][sc]=mp(now.t+1,now.k+1);
									q.push((cell){sr,sc,now.t+1,now.k+1});
								}
						}
				}
		}
		
		return(ans==INF?-1:ans);
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
		cout << "Running example tests for NumberLabyrinthDiv2..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1307531726)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 1000.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		NumberLabyrinthDiv2 _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string board[] = {"...2",
				                  "....",
				                  "3..."};
				int r1 = 0;
				int c1 = 0;
				int r2 = 2;
				int c2 = 3;
				int K = 0;
				_expected = -1;
				_received = _obj.getMinimumNumberOfMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), r1, c1, r2, c2, K); break;
			}
			case 1:
			{
				string board[] = {"...2",
				                  "....",
				                  "3..."};
				int r1 = 0;
				int c1 = 0;
				int r2 = 2;
				int c2 = 3;
				int K = 1;
				_expected = 2;
				_received = _obj.getMinimumNumberOfMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), r1, c1, r2, c2, K); break;
			}
			case 2:
			{
				string board[] = {"...3",
				                  "....",
				                  "2..."};
				int r1 = 0;
				int c1 = 0;
				int r2 = 2;
				int c2 = 3;
				int K = 3;
				_expected = 3;
				_received = _obj.getMinimumNumberOfMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), r1, c1, r2, c2, K); break;
			}
			case 3:
			{
				string board[] = {"55255",
				                  ".0.0.",
				                  "..9..",
				                  "..3..",
				                  "3.9.3",
				                  "44.44"};
				int r1 = 3;
				int c1 = 2;
				int r2 = 4;
				int c2 = 2;
				int K = 10;
				_expected = 6;
				_received = _obj.getMinimumNumberOfMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), r1, c1, r2, c2, K); break;
			}
			case 4:
			{
				string board[] = {"920909949",
				                  "900020000",
				                  "009019039",
				                  "190299149",
				                  "999990319",
				                  "940229120",
				                  "000409399",
				                  "999119320",
				                  "009939999"};
				int r1 = 7;
				int c1 = 3;
				int r2 = 1;
				int c2 = 1;
				int K = 50;
				_expected = 10;
				_received = _obj.getMinimumNumberOfMoves(vector <string>(board, board+sizeof(board)/sizeof(string)), r1, c1, r2, c2, K); break;
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
