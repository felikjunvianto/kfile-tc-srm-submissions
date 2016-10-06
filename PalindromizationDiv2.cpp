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

class PalindromizationDiv2
{
	public:
	int getMinimumCost(int N) 
	{
		int ans=INF,x,y,len,temp;
		char tes[20];
		for(x=0;x<=999999;x++)
		{
			len=0;
			temp=x;
			do
			{
				tes[len++]=(char)(temp%10+'0');
				temp/=10;
			}while(temp);
			
			bool oke=true;
			for(y=0;2*y<len;y++) if(tes[y]!=tes[len-y-1]) oke=false;
			if(oke) ans=min(ans,abs(N-x));
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
		cout << "Running example tests for PalindromizationDiv2..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1307530920)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		PalindromizationDiv2 _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int X = 25;
				_expected = 3;
				_received = _obj.getMinimumCost(X); break;
			}
			case 1:
			{
				int X = 12321;
				_expected = 0;
				_received = _obj.getMinimumCost(X); break;
			}
			case 2:
			{
				int X = 40;
				_expected = 4;
				_received = _obj.getMinimumCost(X); break;
			}
			case 3:
			{
				int X = 2011;
				_expected = 9;
				_received = _obj.getMinimumCost(X); break;
			}
			case 4:
			{
				int X = 0;
				_expected = 0;
				_received = _obj.getMinimumCost(X); break;
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
