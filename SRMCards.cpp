#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define PII pair<int,int> 
#define pi 2*acos(0.0)
#define eps 1e-9
#define LL long long

using namespace std;


class SRMCards 
{
	public:
	int maxTurns(vector <int> cards)
	{
		sort(cards.begin(),cards.end());
		bool used[60];
		memset(used,false,sizeof(used));
		
		int x,ans=0;
		for(x=0;x<cards.size();x++) if(!used[x])
		{
			used[x]=true;
			ans++;
			if(x+1<cards.size())
				if(cards[x]+1==cards[x+1])
					used[x+1]=true;
		}
		return(ans);
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
		cout << "Running example tests for SRMCards..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1300550525)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		SRMCards _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int cards[] = {498, 499};
				_expected = 1;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
			}
			case 1:
			{
				int cards[] = {491, 492, 495, 497, 498, 499};
				_expected = 4;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
			}
			case 2:
			{
				int cards[] = {100, 200, 300, 400};
				_expected = 4;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
			}
			case 3:
			{
				int cards[] = {11, 12, 102, 13, 100, 101, 99, 9, 8, 1};
				_expected = 6;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
			}
			case 4:
			{
				int cards[] = {118, 321, 322, 119, 120, 320};
				_expected = 4;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
			}
			case 5:
			{
				int cards[] = {10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9};
				_expected = 7;
				_received = _obj.maxTurns(vector <int>(cards, cards+sizeof(cards)/sizeof(int))); break;
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
