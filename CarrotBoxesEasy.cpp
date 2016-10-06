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
class CarrotBoxesEasy 
{
	public:
	
	int theIndex(vector <int> carrots, int K)
	{
		int x;
		priority_queue<PII> kotak;
		
		for(x=0;x<carrots.size();x++) kotak.push(mp(carrots[x],-x));
		
		PII now;
		while(K>0)
		{
			now=kotak.top();
			kotak.pop();
			
			K--;
			now.fi--;
			kotak.push(now);
		}
		return(-now.se);
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
		cout << "Running example tests for CarrotBoxesEasy..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1296144127)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		CarrotBoxesEasy _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int carrots[] = {5, 8};
				int K = 3;
				_expected = 1;
				_received = _obj.theIndex(vector <int>(carrots, carrots+sizeof(carrots)/sizeof(int)), K); break;
			}
			case 1:
			{
				int carrots[] = {5, 8};
				int K = 4;
				_expected = 0;
				_received = _obj.theIndex(vector <int>(carrots, carrots+sizeof(carrots)/sizeof(int)), K); break;
			}
			case 2:
			{
				int carrots[] = {4, 9, 5};
				int K = 18;
				_expected = 2;
				_received = _obj.theIndex(vector <int>(carrots, carrots+sizeof(carrots)/sizeof(int)), K); break;
			}
			case 3:
			{
				int carrots[] = {13, 75, 24, 55};
				int K = 140;
				_expected = 0;
				_received = _obj.theIndex(vector <int>(carrots, carrots+sizeof(carrots)/sizeof(int)), K); break;
			}
			case 4:
			{
				int carrots[] = {14, 36, 52, 86, 27, 97, 3, 67};
				int K = 300;
				_expected = 4;
				_received = _obj.theIndex(vector <int>(carrots, carrots+sizeof(carrots)/sizeof(int)), K); break;
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
