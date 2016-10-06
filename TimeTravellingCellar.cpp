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
class TimeTravellingCellar 
{
	public:
	int determineProfit(vector <int> profit, vector <int> decay)
	{
		int temp,x,y;
		int terbesar=0;
		for(x=0;x<profit.size();x++)
			for(y=0;y<decay.size();y++) if(x!=y)
			{
				temp=profit[x]-decay[y];
				terbesar=max(terbesar,temp);
			}
		return terbesar;
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
		cout << "Running example tests for TimeTravellingCellar..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1293588110)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		TimeTravellingCellar _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int profit[] = {1,2,3};
				int decay[] = {3,1,2};
				_expected = 2;
				_received = _obj.determineProfit(vector <int>(profit, profit+sizeof(profit)/sizeof(int)), vector <int>(decay, decay+sizeof(decay)/sizeof(int))); break;
			}
			case 1:
			{
				int profit[] = {3,2};
				int decay[] = {1,2};
				_expected = 1;
				_received = _obj.determineProfit(vector <int>(profit, profit+sizeof(profit)/sizeof(int)), vector <int>(decay, decay+sizeof(decay)/sizeof(int))); break;
			}
			case 2:
			{
				int profit[] = {3,3,3};
				int decay[] = {1,1,1};
				_expected = 2;
				_received = _obj.determineProfit(vector <int>(profit, profit+sizeof(profit)/sizeof(int)), vector <int>(decay, decay+sizeof(decay)/sizeof(int))); break;
			}
			case 3:
			{
				int profit[] = {1000,500,250,125};
				int decay[] = {64,32,16,8};
				_expected = 992;
				_received = _obj.determineProfit(vector <int>(profit, profit+sizeof(profit)/sizeof(int)), vector <int>(decay, decay+sizeof(decay)/sizeof(int))); break;
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
