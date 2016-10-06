#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>

#define LL long long
#define INF 1000000000
#define EPS 1e-9
#define PI 2*acos(0.0)

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int,int> 

using namespace std;

class MaxMinTreeGame {
	public:
	int findend(vector <int> edges, vector <int> costs) {
		int cntedge[100];
		memset(cntedge, 0, sizeof(cntedge));
		
		for(int i = 0; i < edges.size(); i++)
		{
			cntedge[i+1]++;
			cntedge[edges[i]]++;
		}
		
		int ret = 0;
		for(int i = 0; i < costs.size(); i++) 
			if(cntedge[i] == 1) ret = max(ret, costs[i]);
			
		return ret;
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
		cout << "Testing MaxMinTreeGame (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1389024008;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		MaxMinTreeGame _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int edges[] = {0};
				int costs[] = {4,6};
				_expected = 6;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}
			case 1:
			{
				int edges[] = {0,1};
				int costs[] = {4,6,5};
				_expected = 5;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}
			case 2:
			{
				int edges[] = {0,1,2,3};
				int costs[] = {0,1,0,1,0};
				_expected = 0;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}
			case 3:
			{
				int edges[] = {0,0,0};
				int costs[] = {5,1,2,3};
				_expected = 3;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}
			case 4:
			{
				int edges[] = {0,0};
				int costs[] = {3,2,5};
				_expected = 5;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}
			/*case 5:
			{
				int edges[] = ;
				int costs[] = ;
				_expected = ;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int edges[] = ;
				int costs[] = ;
				_expected = ;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int edges[] = ;
				int costs[] = ;
				_expected = ;
				_received = _obj.findend(vector <int>(edges, edges+sizeof(edges)/sizeof(int)), vector <int>(costs, costs+sizeof(costs)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
