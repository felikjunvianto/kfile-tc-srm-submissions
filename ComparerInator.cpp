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


class ComparerInator 
{
	public:
	int makeProgram(vector <int> A, vector <int> B, vector <int> wanted)
	{
		bool oke=true;
		int x,ans;
		for(x=0;x<A.size();x++) if(A[x]!=wanted[x]) oke=false;
		if(oke) return(1);
		
		oke=true;
		for(x=0;x<B.size();x++) if(B[x]!=wanted[x]) oke=false;
		if(oke) return(1);
		
		oke=true;
		for(x=0;x<wanted.size();x++)
		{
			if(A[x]<B[x]) ans=A[x]; else ans=B[x];
			if(ans!=wanted[x]) oke=false;
		} if(oke) return(7);
		
		oke=true;
		for(x=0;x<wanted.size();x++)
		{
			if(A[x]<B[x]) ans=B[x]; else ans=A[x];
			if(ans!=wanted[x]) oke=false;
		} if(oke) return(7);
		
		return(-1);
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
		cout << "Running example tests for ComparerInator..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1303830124)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		ComparerInator _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int A[] = {1};
				int B[] = {2};
				int wanted[] = {2};
				_expected = 1;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
			}
			case 1:
			{
				int A[] = {1,3};
				int B[] = {2,1};
				int wanted[] = {2,3};
				_expected = 7;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
			}
			case 2:
			{
				int A[] = {1,3,5};
				int B[] = {2,1,7};
				int wanted[] = {2,3,5};
				_expected = -1;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
			}
			case 3:
			{
				int A[] = {1,3,5};
				int B[] = {2,1,7};
				int wanted[] = {1,3,5};
				_expected = 1;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
			}
			case 4:
			{
				int A[] = {1,2,3,4,5,6,7,8,9,10,11};
				int B[] = {5,4,7,8,3,1,1,2,3,4,6};
				int wanted[] = {1,2,3,4,3,1,1,2,3,4,6};
				_expected = 7;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
			}
			case 5:
			{
				int A[] = {1,5,6,7,8};
				int B[] = {1,5,6,7,8};
				int wanted[] = {1,5,6,7,8};
				_expected = 1;
				_received = _obj.makeProgram(vector <int>(A, A+sizeof(A)/sizeof(int)), vector <int>(B, B+sizeof(B)/sizeof(int)), vector <int>(wanted, wanted+sizeof(wanted)/sizeof(int))); break;
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
