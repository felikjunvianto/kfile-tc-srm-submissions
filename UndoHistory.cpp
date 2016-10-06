#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <utility>
#include <set>
#include <bitset>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pi 2*acos(0.0)
#define eps 1e-9
#define PII pair<int,int> 
#define PDD pair<double, double> 
#define LL long long
#define INF 1000000000

using namespace std;

int longcom(string &a, string &b)
{
	int maks = max(a.length(), b.length());
	for(int i = 0; i < maks; i++) 
		if(a[i] != b[i]) return i;
	
	return maks;
}

class UndoHistory {
	public:
	int minPresses(vector <string> lines) {
		int ans = lines[0].size() + 1;
		string last = lines[0];
		
		//printf("0 %d\n", ans);
		for(int i = 1; i < lines.size(); i++)
		{
			int cur = INF;
			int longest = 0;
			
			if(longcom(last, lines[i]) == last.size()) cur = min(cur, (int)lines[i].size() - (int)last.size() + 1); 
			
			for(int j = 0; j < i; j++) longest = max(longest, longcom(lines[i], lines[j]));
			cur = min(cur, 2 + (int)(lines[i].size()) - longest + 1);
			
			last = lines[i];
			ans += cur;
			//printf("%d %d\n", i, ans);
		}
		
		return ans;
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
		cout << "Testing UndoHistory (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1368893401;
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
		UndoHistory _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string lines[] = {"tomorrow", "topcoder"};
				_expected = 18;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}
			case 1:
			{
				string lines[] = {"a","b"};
				_expected = 6;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}
			case 2:
			{
				string lines[] = {"a", "ab", "abac", "abacus" };
				_expected = 10;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}
			case 3:
			{
				string lines[] = {"pyramid", "sphinx", "sphere", "python", "serpent"};
				_expected = 39;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}
			case 4:
			{
				string lines[] = {"ba","a","a","b","ba"};
				_expected = 13;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}
			/*case 5:
			{
				string lines[] = ;
				_expected = ;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string lines[] = ;
				_expected = ;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string lines[] = ;
				_expected = ;
				_received = _obj.minPresses(vector <string>(lines, lines+sizeof(lines)/sizeof(string))); break;
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
