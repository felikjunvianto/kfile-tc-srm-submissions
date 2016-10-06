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
class LuckyCounter 
{
	public:
	int countLuckyMoments(vector <string> moments) 
	{
		int total=0;
		for(int x=0;x<moments.size();x++)
			if(((moments[x][0]==moments[x][3])&&(moments[x][1]==moments[x][4]))||
			   ((moments[x][0]==moments[x][1])&&(moments[x][3]==moments[x][4]))||
			   ((moments[x][0]==moments[x][4])&&(moments[x][1]==moments[x][3]))) total++;
		return total;
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
		cout << "Running example tests for LuckyCounter..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1292679974)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		LuckyCounter _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string moments[] = {"12:21", "11:10"};
				_expected = 1;
				_received = _obj.countLuckyMoments(vector <string>(moments, moments+sizeof(moments)/sizeof(string))); break;
			}
			case 1:
			{
				string moments[] = {"00:00", "00:59", "23:00"};
				_expected = 1;
				_received = _obj.countLuckyMoments(vector <string>(moments, moments+sizeof(moments)/sizeof(string))); break;
			}
			case 2:
			{
				string moments[] = {"12:34"};
				_expected = 0;
				_received = _obj.countLuckyMoments(vector <string>(moments, moments+sizeof(moments)/sizeof(string))); break;
			}
			case 3:
			{
				string moments[] = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00"};
				_expected = 3;
				_received = _obj.countLuckyMoments(vector <string>(moments, moments+sizeof(moments)/sizeof(string))); break;
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
