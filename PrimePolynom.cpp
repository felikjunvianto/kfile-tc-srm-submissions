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
class PrimePolynom 
{
	long long bil;
	bool prime(long long t)
	{
		if(t<2) return false; else
		{
			bool benar=true;
			for(long long x=2;x*x<=t;x++) if(t%x==0)
			{
				benar=false;
				break;
			}
			return(benar);
		}
	}
	public:
	int reveal(int A, int B, int C) 
	{
		int M=0;
		do
		{
			bil=(long long)A*M*M+B*M+C;
			if(!prime(bil)) break;
			M++;
		}while(prime(bil));
		return(M);
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
		cout << "Running example tests for PrimePolynom..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1293173191)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 600.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		PrimePolynom _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int A = 1;
				int B = -1;
				int C = 41;
				_expected = 41;
				_received = _obj.reveal(A, B, C); break;
			}
			case 1:
			{
				int A = 1;
				int B = 1;
				int C = 41;
				_expected = 40;
				_received = _obj.reveal(A, B, C); break;
			}
			case 2:
			{
				int A = 1;
				int B = 1;
				int C = -13;
				_expected = 0;
				_received = _obj.reveal(A, B, C); break;
			}
			case 3:
			{
				int A = 1;
				int B = -15;
				int C = 97;
				_expected = 48;
				_received = _obj.reveal(A, B, C); break;
			}
			case 4:
			{
				int A = 1;
				int B = -79;
				int C = 1601;
				_expected = 80;
				_received = _obj.reveal(A, B, C); break;
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
