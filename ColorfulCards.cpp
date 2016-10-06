#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<utility>
#include<stack>
#include<queue>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define PII pair<int,int> 
#define pi 2*acos(0.0)
#define eps 1e-9

typedef long long LL;

using namespace std;
class ColorfulCards 
{
	public:
	int dp[1050][60], konstan;
	string kartu;
	bool prime[1100];
	
	int jalur(int nilai,int now)
	{
		cout << nilai << " " << now << endl;
		if(now>kartu.size()) return(1); else
		if(nilai>konstan) return(0); else
		if(dp[nilai][now]==-1)
		{
			dp[nilai][now]=0;
			if(kartu[now-1]=='B') 
			{
				int x=nilai+1;
				while((prime[x])&&(x<=konstan)) x++;
				//cout << x << " " << now << endl;
				dp[nilai][now]=jalur(x,now+1); 
			}
			
			else
			{
				int x=nilai+1;
				while((!prime[x])&&(x<=konstan)) x++;
				//cout << x << " " << now << endl;
				dp[nilai][now]=jalur(x,now+1);
			}
		}
		return(dp[nilai][now]);
	}
	
	vector <int> theCards(int N, string colors)
	{
		int x,y;
		memset(dp,-1,sizeof(dp));
		konstan=N;
		memset(prime,true,sizeof(prime));
		prime[0]=prime[1]=false;
		for(x=2;x<=N;x++) if(prime[x])
		{
			int z=2;
			while(x*z<=N)
			{
				prime[x*z]=false;
				z++;
			}
		}
		kartu=colors;
		int temp=jalur(0,0);
		
		for(y=1;y<=colors.size();y++)
		{
			for(x=1;x<=N;x++) cout << dp[x][y] << " ";
			cout << endl;
		}
		
		vector<int> quess;
		for(x=1;x<=colors.size();x++) 
		{
			int unik=0;
			int last;
			for(y=1;y<=N;y++) if(dp[y][x]==1) 
			{
				unik++;
				last=y;
			}
			
			if(unik==1) quess.pb(last); else quess.pb(-1);
		}
		return(quess);
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
		cout << "Running example tests for ColorfulCards..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1296144976)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 525.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		ColorfulCards _obj;
		vector <int> _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int N = 5;
				string colors = "RRR";
				int __expected[] = {2, 3, 5 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.theCards(N, colors); break;
			}
			case 1:
			{
				int N = 7;
				string colors = "BBB";
				int __expected[] = {1, 4, 6 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.theCards(N, colors); break;
			}
			case 2:
			{
				int N = 6;
				string colors = "RBR";
				int __expected[] = {-1, 4, 5 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.theCards(N, colors); break;
			}
			case 3:
			{
				int N = 58;
				string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
				int __expected[] = {-1, -1, -1, -1, -1, -1, -1, -1, 17, 18, 19, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 47, 53 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.theCards(N, colors); break;
			}
			case 4:
			{
				int N = 495;
				string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
				int __expected[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.theCards(N, colors); break;
			}
			default: return 0;
		}
		if (_received == _expected)
			cout << "#" << _tc << ": Passed" << endl;
		else
		{
			cout << "#" << _tc << ": Failed" << endl;
			cout << "           Expected: {";
			for (unsigned i = 0; i < _expected.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _expected[i];
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _received[i];
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
