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


class SentenceCapitalizerInator 
{
	public:
	string fixCaps(string paragraph)
	{
		paragraph[0]^=32;
		for(int x=0;x<paragraph.size();x++) if((paragraph[x]=='.')&&(x+2<paragraph.size()))
			paragraph[x+2]^=32;
		return(paragraph);
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
		cout << "Running example tests for SentenceCapitalizerInator..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1304420522)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		SentenceCapitalizerInator _obj;
		string _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string paragraph = "hello programmer. welcome to topcoder.";
				_expected = "Hello programmer. Welcome to topcoder.";
				_received = _obj.fixCaps(paragraph); break;
			}
			case 1:
			{
				string paragraph = "one.";
				_expected = "One.";
				_received = _obj.fixCaps(paragraph); break;
			}
			case 2:
			{
				string paragraph = "not really. english. qwertyuio. a. xyz.";
				_expected = "Not really. English. Qwertyuio. A. Xyz.";
				_received = _obj.fixCaps(paragraph); break;
			}
			case 3:
			{
				string paragraph = "example four. the long fourth example. a. b. c. d.";
				_expected = "Example four. The long fourth example. A. B. C. D.";
				_received = _obj.fixCaps(paragraph); break;
			}
			default: return 0;
		}
		if (_received == _expected)
			cout << "#" << _tc << ": Passed" << endl;
		else
		{
			cout << "#" << _tc << ": Failed" << endl;
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
