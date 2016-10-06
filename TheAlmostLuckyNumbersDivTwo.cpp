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

class TheAlmostLuckyNumbersDivTwo
{
	public:
	int find(int a, int b) 
	{
		string cek;
		int x,y,z,ans=0;
		for(x=a;x<=b;x++)
		{
			int temp=x;
			cek.clear();
			while(temp)
			{
				cek+=(temp%10+'0');
				temp/=10;
			}
			
			z=0;
			for(y=0;y<cek.size();y++) if((cek[y]!='4')&&(cek[y]!='7')) z++;
			if(z<2) ans++;
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
		cout << "Running example tests for TheAlmostLuckyNumbersDivTwo..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1308704498)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		TheAlmostLuckyNumbersDivTwo _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int a = 4;
				int b = 7;
				_expected = 4;
				_received = _obj.find(a, b); break;
			}
			case 1:
			{
				int a = 8;
				int b = 19;
				_expected = 4;
				_received = _obj.find(a, b); break;
			}
			case 2:
			{
				int a = 28;
				int b = 33;
				_expected = 0;
				_received = _obj.find(a, b); break;
			}
			case 3:
			{
				int a = 1234;
				int b = 4321;
				_expected = 36;
				_received = _obj.find(a, b); break;
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
