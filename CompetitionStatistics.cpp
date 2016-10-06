#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>

#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef long long LL;

using namespace std;
class CompetitionStatistics 
{
	public:
	int consecutiveGrowth(vector <int> ratingChanges)
	{
		int cons=0;
		int maks=0;
		for(int x=0;x<ratingChanges.size();x++) 
		{
			if(ratingChanges[x]>0) cons++; else cons=0;
			maks=max(maks,cons);
		}
		return maks;
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
		cout << "Running example tests for CompetitionStatistics..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1293172835)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		CompetitionStatistics _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int ratingChanges[] = {30, 5, -5, 3, 3, 1};
				_expected = 3;
				_received = _obj.consecutiveGrowth(vector <int>(ratingChanges, ratingChanges+sizeof(ratingChanges)/sizeof(int))); break;
			}
			case 1:
			{
				int ratingChanges[] = {-1, -5, -9};
				_expected = 0;
				_received = _obj.consecutiveGrowth(vector <int>(ratingChanges, ratingChanges+sizeof(ratingChanges)/sizeof(int))); break;
			}
			case 2:
			{
				int ratingChanges[] = {12, 0, 15, 73};
				_expected = 2;
				_received = _obj.consecutiveGrowth(vector <int>(ratingChanges, ratingChanges+sizeof(ratingChanges)/sizeof(int))); break;
			}
			case 3:
			{
				int ratingChanges[] = {12, 1, 15, 73};
				_expected = 4;
				_received = _obj.consecutiveGrowth(vector <int>(ratingChanges, ratingChanges+sizeof(ratingChanges)/sizeof(int))); break;
			}
			case 4:
			{
				int ratingChanges[] = {-6, 13, 15, -11, 12, 12, 33, 12, -1};
				_expected = 4;
				_received = _obj.consecutiveGrowth(vector <int>(ratingChanges, ratingChanges+sizeof(ratingChanges)/sizeof(int))); break;
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
