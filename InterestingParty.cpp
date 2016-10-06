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
class InterestingParty 
{
	public:
	int bestInvitation(vector <string> first, vector <string> second)
	{
		vector<string> topic;
		for(int x=0;x<first.size();x++) topic.pb(first[x]);
		for(int x=0;x<second.size();x++) topic.pb(second[x]);
		
		int terbesar=0;
		for(int x=0;x<topic.size();x++) 
		{
			int temp=0;
			for(int y=0;y<first.size();y++) 
				if((first[y]==topic[x])||(second[y]==topic[x])) temp++;
			terbesar=max(terbesar,temp);
		}
		return(terbesar);
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
		cout << "Running example tests for InterestingParty..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1295715721)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		InterestingParty _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string first[] = {"fishing", "gardening", "swimming", "fishing"};
				string second[] = {"hunting", "fishing", "fishing", "biting"};
				_expected = 4;
				_received = _obj.bestInvitation(vector <string>(first, first+sizeof(first)/sizeof(string)), vector <string>(second, second+sizeof(second)/sizeof(string))); break;
			}
			case 1:
			{
				string first[] = {"variety", "diversity", "loquacity", "courtesy"};
				string second[] = {"talking", "speaking", "discussion", "meeting"};
				_expected = 1;
				_received = _obj.bestInvitation(vector <string>(first, first+sizeof(first)/sizeof(string)), vector <string>(second, second+sizeof(second)/sizeof(string))); break;
			}
			case 2:
			{
				string first[] = {"snakes", "programming", "cobra", "monty"};
				string second[] = {"python", "python", "anaconda", "python"};
				_expected = 3;
				_received = _obj.bestInvitation(vector <string>(first, first+sizeof(first)/sizeof(string)), vector <string>(second, second+sizeof(second)/sizeof(string))); break;
			}
			case 3:
			{
				string first[] = {"t", "o", "p", "c", "o", "d", "e", "r", "s", "i", "n", "g", "l", "e", "r",
				                  "o", "u", "n", "d", "m", "a", "t", "c", "h", "f", "o", "u", "r", "n", "i"};
				string second[] = {"n", "e", "f", "o", "u", "r", "j", "a", "n", "u", "a", "r", "y", "t", "w", 
				                   "e", "n", "t", "y", "t", "w", "o", "s", "a", "t", "u", "r", "d", "a", "y"};
				_expected = 6;
				_received = _obj.bestInvitation(vector <string>(first, first+sizeof(first)/sizeof(string)), vector <string>(second, second+sizeof(second)/sizeof(string))); break;
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
