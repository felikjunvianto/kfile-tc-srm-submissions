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

class TheLuckyGameDivTwo
{
	public:
	int find(int a, int b, int jLen, int bLen) 
	{
		string cek;
		int temp,x,y,sum[5010],ans=-1;
		
		sum[0]=0;
		for(x=1;x<=5000;x++)
		{
			int temp=x;
			cek.clear();
			while(temp)
			{
				cek+=(temp%10+'0');
				temp/=10;
			}
			
			bool oke=true;
			for(y=0;(y<cek.size())&&oke;y++) if((cek[y]!='4')&&(cek[y]!='7')) oke=false;
			sum[x]=sum[x-1];
			if(oke) sum[x]++;
		}
		
		for(x=a;x+jLen-1<=b;x++)
		{
			temp=INF;
			for(y=x;y+bLen-1<x+jLen;y++) temp=min(temp,sum[y+bLen-1]-sum[y-1]);
			ans=max(ans,temp);
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
		cout << "Running example tests for TheLuckyGameDivTwo..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1308704769)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		TheLuckyGameDivTwo _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int a = 1;
				int b = 10;
				int jLen = 2;
				int bLen = 1;
				_expected = 0;
				_received = _obj.find(a, b, jLen, bLen); break;
			}
			case 1:
			{
				int a = 1;
				int b = 100;
				int jLen = 100;
				int bLen = 100;
				_expected = 6;
				_received = _obj.find(a, b, jLen, bLen); break;
			}
			case 2:
			{
				int a = 4;
				int b = 8;
				int jLen = 3;
				int bLen = 2;
				_expected = 1;
				_received = _obj.find(a, b, jLen, bLen); break;
			}
			case 3:
			{
				int a = 1;
				int b = 100;
				int jLen = 75;
				int bLen = 50;
				_expected = 2;
				_received = _obj.find(a, b, jLen, bLen); break;
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
