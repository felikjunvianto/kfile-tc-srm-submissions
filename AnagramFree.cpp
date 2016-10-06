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
class AnagramFree 
{
	public:
	int getMaximumSubset(vector <string> S)
	{
		int indeks[60][30],x,y;
		bool visited[60];
		memset(indeks,0,sizeof(indeks));
		for(x=0;x<S.size();x++)
			for(y=0;y<S[x].size();y++) indeks[x][S[x][y]-'a']++;
			
		int total=0;
		memset(visited,false,sizeof(visited));
		for(x=0;x<S.size();x++) if(!visited[x])
		{
			visited[x]=true;
			total++;
			for(y=x+1;y<S.size();y++) if(!visited[y])
			{
				bool sama=true;
				for(int z=0;z<30;z++) if(indeks[x][z]!=indeks[y][z])
				{
					sama=false;
					break;
				}
				if(sama) visited[y]=true;
			}
		}
		return(total);
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
		cout << "Running example tests for AnagramFree..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1296724932)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		AnagramFree _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string S[] = {"abcd","abdc","dabc","bacd"};
				_expected = 1;
				_received = _obj.getMaximumSubset(vector <string>(S, S+sizeof(S)/sizeof(string))); break;
			}
			case 1:
			{
				string S[] = {"abcd","abac","aabc","bacd"};
				_expected = 2;
				_received = _obj.getMaximumSubset(vector <string>(S, S+sizeof(S)/sizeof(string))); break;
			}
			case 2:
			{
				string S[] = {"aa","aaaaa","aaa","a","bbaaaa","aaababaa"};
				_expected = 6;
				_received = _obj.getMaximumSubset(vector <string>(S, S+sizeof(S)/sizeof(string))); break;
			}
			case 3:
			{
				string S[] = {"creation","sentence","reaction","sneak","star","rats","snake"};
				_expected = 4;
				_received = _obj.getMaximumSubset(vector <string>(S, S+sizeof(S)/sizeof(string))); break;
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
