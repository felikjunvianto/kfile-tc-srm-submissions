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

class HappyLetterDiv2 
{
	public:
	char getHappyLetter(string letters) 
	{
		int cnt[30];
		memset(cnt, 0, sizeof(cnt));
		
		for(int i = 0; i < letters.size(); i++) cnt[letters[i] - 'a']++;
		
		for(int i = 0; i < 26; i++) if(cnt[i] > (int) letters.size() - cnt[i]) return (char) (i + 'a');
		return '.';
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
		cout << "Testing HappyLetterDiv2 (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1405005126;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		HappyLetterDiv2 _obj;
		char _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string letters = "aacaaa";
				_expected = 'a';
				_received = _obj.getHappyLetter(letters); break;
			}
			case 1:
			{
				string letters = "dcdjx";
				_expected = '.';
				_received = _obj.getHappyLetter(letters); break;
			}
			case 2:
			{
				string letters = "bcbbbbba";
				_expected = 'b';
				_received = _obj.getHappyLetter(letters); break;
			}
			case 3:
			{
				string letters = "aabc";
				_expected = '.';
				_received = _obj.getHappyLetter(letters); break;
			}
			/*case 4:
			{
				string letters = ;
				_expected = ;
				_received = _obj.getHappyLetter(letters); break;
			}*/
			/*case 5:
			{
				string letters = ;
				_expected = ;
				_received = _obj.getHappyLetter(letters); break;
			}*/
			/*case 6:
			{
				string letters = ;
				_expected = ;
				_received = _obj.getHappyLetter(letters); break;
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
