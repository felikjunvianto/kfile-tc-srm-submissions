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

class DoubleRoshambo
 {
	public:
	
	map<string,int> a,e;
	int maxScore(vector <string> A, vector <string> E) 
	{
		a["PP"]=a["PS"]=a["PR"]=a["SP"]=a["SS"]=a["SR"]=a["RP"]=a["RS"]=a["RR"]=0;
		e["PP"]=e["PS"]=e["PR"]=e["SP"]=e["SS"]=e["SR"]=e["RP"]=e["RS"]=e["RR"]=0;
		for(int x=0;x<A.size();x++) a[A[x]]++;
		for(int x=0;x<E.size();x++) e[E[x]]++;
		
		int menang,ans=0;
		menang=min(a["PP"],e["RR"]);a["PP"]-=menang,e["RR"]-=menang;ans+=menang*2;
		menang=min(a["PS"],e["RP"]);a["PS"]-=menang,e["RP"]-=menang;ans+=menang*2;
		menang=min(a["PR"],e["RS"]);a["PR"]-=menang,e["RS"]-=menang;ans+=menang*2;
		menang=min(a["SP"],e["PR"]);a["SP"]-=menang,e["PR"]-=menang;ans+=menang*2;
		menang=min(a["SS"],e["PP"]);a["SS"]-=menang,e["PP"]-=menang;ans+=menang*2;
		menang=min(a["SR"],e["PS"]);a["SR"]-=menang,e["PS"]-=menang;ans+=menang*2;
		menang=min(a["RP"],e["SR"]);a["RP"]-=menang,e["SR"]-=menang;ans+=menang*2;
		menang=min(a["RS"],e["SP"]);a["RS"]-=menang,e["SP"]-=menang;ans+=menang*2;
		menang=min(a["RR"],e["SS"]);a["RR"]-=menang,e["SS"]-=menang;ans+=menang*2;
		
		menang=min(a["PP"],e["PR"]);a["PP"]-=menang,e["PR"]-=menang;ans+=menang;
		menang=min(a["PS"],e["PP"]);a["PS"]-=menang,e["PP"]-=menang;ans+=menang;
		menang=min(a["PR"],e["PS"]);a["PR"]-=menang,e["PS"]-=menang;ans+=menang;
		menang=min(a["SP"],e["SR"]);a["SP"]-=menang,e["SR"]-=menang;ans+=menang;
		menang=min(a["SS"],e["SP"]);a["SS"]-=menang,e["SP"]-=menang;ans+=menang;
		menang=min(a["SR"],e["SS"]);a["SR"]-=menang,e["SS"]-=menang;ans+=menang;
		menang=min(a["RP"],e["RR"]);a["RP"]-=menang,e["RR"]-=menang;ans+=menang;
		menang=min(a["RS"],e["RP"]);a["RS"]-=menang,e["RP"]-=menang;ans+=menang;
		menang=min(a["RR"],e["RS"]);a["RR"]-=menang,e["RS"]-=menang;ans+=menang;
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
		cout << "Running example tests for DoubleRoshambo..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1310571260)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 1024.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		DoubleRoshambo _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string A[] = {"RR"};
				string E[] = {"SS"};
				_expected = 2;
				_received = _obj.maxScore(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(E, E+sizeof(E)/sizeof(string))); break;
			}
			case 1:
			{
				string A[] = {"SR", "PP"};
				string E[] = {"PR", "RS"};
				_expected = 1;
				_received = _obj.maxScore(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(E, E+sizeof(E)/sizeof(string))); break;
			}
			case 2:
			{
				string A[] = {"PP", "PP", "PP", "PP"};
				string E[] = {"RR", "PR", "SS", "SP"};
				_expected = 3;
				_received = _obj.maxScore(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(E, E+sizeof(E)/sizeof(string))); break;
			}
			case 3:
			{
				string A[] = {"PS", "RS", "PP", "SP", "RR", "SS", "SP"};
				string E[] = {"RP", "SP", "RR", "SR", "RS", "SP", "SS"};
				_expected = 10;
				_received = _obj.maxScore(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(E, E+sizeof(E)/sizeof(string))); break;
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
