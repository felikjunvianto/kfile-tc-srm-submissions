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
class PalindromeGame 
{
	public:
	int getMaximum(vector <string> front, vector <int> back)
	{
		bool used[100];
		memset(used,false,sizeof(used));
		int N,x,y,dipakai,score=0;
		
		pair<string,int> pasang[100];
		N=front.size();
		for(x=0;x<N;x++) pasang[x]=mp(front[x],-back[x]);
		sort(pasang,pasang+N);
		
		//cari kata palindrom terpanjang
		dipakai=-1;
		for(x=0;x<N;x++)
		{
			bool oke=true;
			int len=pasang[x].fi.size();
			for(y=0;(2*y<len)&&oke;y++)
				if(pasang[x].fi[y]!=pasang[x].fi[len-y-1]) oke=false;
				
			if(oke) 
			{
				int z=1;
				for(y=0;y<N;y++)
					if((y!=x)&&(pasang[y].fi==pasang[x].fi)) z++;
				
				if(z%2==0) oke=false;
			}
			
			if(oke)
				if((dipakai==-1)||(pasang[dipakai].se<pasang[x].se)) dipakai=x;
		}
		
		if(dipakai!=-1)
		{
			used[dipakai]=true;
			score=-pasang[dipakai].se;
		}
		
		//cari pasangan palindrom
		for(x=0;x<N;x++) if(!used[x])
		{
			dipakai=-1;
			for(y=x+1;y<N;y++) if(!used[y])
			{
				bool oke=true;
				int len=pasang[x].fi.size();
				for(int z=0;(z<len)&&oke;z++)
					if(pasang[x].fi[z]!=pasang[y].fi[len-z-1]) oke=false;
					
				if(oke)
				{
					dipakai=y;
					break;
				}
			}
			
			if(dipakai!=-1)
			{
				score+=-1*(pasang[x].se+pasang[dipakai].se);
				used[x]=used[dipakai]=true;
			}
		}
		return(score);
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
		cout << "Running example tests for PalindromeGame..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1299604734)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 950.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		PalindromeGame _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string front[] = { "topcoder", "redcoder", "redocpot" };
				int back[] = { 7, 5, 3 };
				_expected = 10;
				_received = _obj.getMaximum(vector <string>(front, front+sizeof(front)/sizeof(string)), vector <int>(back, back+sizeof(back)/sizeof(int))); break;
			}
			case 1:
			{
				string front[] = { "rabbit" };
				int back[] = { 1000000 };
				_expected = 0;
				_received = _obj.getMaximum(vector <string>(front, front+sizeof(front)/sizeof(string)), vector <int>(back, back+sizeof(back)/sizeof(int))); break;
			}
			case 2:
			{
				string front[] = { "abc", "abc", "def", "cba", "fed" };
				int back[] = { 24, 7, 63, 222, 190 };
				_expected = 499;
				_received = _obj.getMaximum(vector <string>(front, front+sizeof(front)/sizeof(string)), vector <int>(back, back+sizeof(back)/sizeof(int))); break;
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
