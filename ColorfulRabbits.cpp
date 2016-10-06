#include <cstdio>
#include <iostream>
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

typedef long long LL;

using namespace std;
class ColorfulRabbits 
{
	public:
	int getMinimum(vector <int> replies)
	{
		map<int,int> now;
		int tot,x,y;
		for(x=0;x<replies.size();x++) now[replies[x]]=0;
		
		tot=0;
		for(x=0;x<replies.size();x++)
		{
			y=replies[x];
			if(now[y]==0)
			{
				tot+=y+1;
				now[y]=y;
			} else now[y]--;
		}
		
		return(tot);
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
		cout << "Running example tests for ColorfulRabbits..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1299600519)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		ColorfulRabbits _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int replies[] = { 1, 1, 2, 2 };
				_expected = 5;
				_received = _obj.getMinimum(vector <int>(replies, replies+sizeof(replies)/sizeof(int))); break;
			}
			case 1:
			{
				int replies[] = { 0 };
				_expected = 1;
				_received = _obj.getMinimum(vector <int>(replies, replies+sizeof(replies)/sizeof(int))); break;
			}
			case 2:
			{
				int replies[] = { 2, 2, 44, 2, 2, 2, 444, 2, 2 };
				_expected = 499;
				_received = _obj.getMinimum(vector <int>(replies, replies+sizeof(replies)/sizeof(int))); break;
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
