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

class PasswordXPalindrome
 {
	public:
	int minSwaps(string password) 
	{
		int x,y,ans=0;
		int cnt[30],odd;
		int size = (int) password.size();
		
		memset(cnt,0,sizeof(cnt));
		for(x=0;x<size;x++) cnt[password[x]-'a']++;
		
		odd=0;
		for(x=0;x<26;x++) if(cnt[x]&1) odd++;
		if(odd>1) return -1;
		if(odd==1 && size%2==0) return -1;
		
		for(x=0;x<26;x++) if(cnt[x]&1 && password[size/2]!=x+'a')
		{
			for(y=0;y<size;y++) if(password[y]==x+'a') break;
			swap(password[size/2],password[y]);
			ans++;
			break;
		}
		
		for(x=0;x<size;x++)
			for(y=x+1;y<size;y++)
				if(password[x]==password[y] && y!=size-x-1)
				{
					swap(password[y],password[size-x-1]);
					ans++;
					break;
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
		cout << "Testing PasswordXPalindrome (1000.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1334422848;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 1000.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		PasswordXPalindrome _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string password = "levle";
				_expected = 1;
				_received = _obj.minSwaps(password); break;
			}
			case 1:
			{
				string password = "racecar";
				_expected = 0;
				_received = _obj.minSwaps(password); break;
			}
			case 2:
			{
				string password = "abcdadcb";
				_expected = 3;
				_received = _obj.minSwaps(password); break;
			}
			case 3:
			{
				string password = "msmscielciel";
				_expected = 5;
				_received = _obj.minSwaps(password); break;
			}
			case 4:
			{
				string password = "hicanyouguesstodaywriter";
				_expected = -1;
				_received = _obj.minSwaps(password); break;
			}
			/*case 5:
			{
				string password = ;
				_expected = ;
				_received = _obj.minSwaps(password); break;
			}*/
			/*case 6:
			{
				string password = ;
				_expected = ;
				_received = _obj.minSwaps(password); break;
			}*/
			/*case 7:
			{
				string password = ;
				_expected = ;
				_received = _obj.minSwaps(password); break;
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
