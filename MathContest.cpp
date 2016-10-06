#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define PII pair<int,int> 
#define pi 2*acos(0.0)
#define eps 1e-9
#define LL long long

using namespace std;


class MathContest 
{
	public:
	int countBlack(string ballSequence, int repetitions)
	{
		string proses="";
		int kiri,kanan,N,ans;
		bool balik,invers;
		
		while(repetitions--) proses.append(ballSequence);
		ans=0;
		balik=invers=false;
		kiri=0;
		kanan=N=proses.size();kanan--;
		
		while(N--)
		{
			if(!balik)
			{
				if(((proses[kiri]=='W')&&(!invers))||((proses[kiri]=='B')&&(invers)))
				{
					balik=true;
					kiri++;
				} else
				
				if(((proses[kiri]=='W')&&(invers))||((proses[kiri]=='B')&&(!invers)))
				{
					invers^=true;
					ans++;
					kiri++;
				}
			} else
			
			{
				if(((proses[kanan]=='W')&&(!invers))||((proses[kanan]=='B')&&(invers)))
				{
					balik=false;
					kanan--;
				} else
			
				if(((proses[kanan]=='W')&&(invers))||((proses[kanan]=='B')&&(!invers)))
				{
					invers^=true;
					ans++;
					kanan--;
				}
			}
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
		cout << "Running example tests for MathContest..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1303830553)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		MathContest _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string ballSequence = "BBWWB";
				int repetitions = 1;
				_expected = 2;
				_received = _obj.countBlack(ballSequence, repetitions); break;
			}
			case 1:
			{
				string ballSequence = "BBB";
				int repetitions = 10;
				_expected = 1;
				_received = _obj.countBlack(ballSequence, repetitions); break;
			}
			case 2:
			{
				string ballSequence = "BW";
				int repetitions = 10;
				_expected = 20;
				_received = _obj.countBlack(ballSequence, repetitions); break;
			}
			case 3:
			{
				string ballSequence = "WWWWWWWBWWWWWWWWWWWWWW";
				int repetitions = 1;
				_expected = 2;
				_received = _obj.countBlack(ballSequence, repetitions); break;
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
