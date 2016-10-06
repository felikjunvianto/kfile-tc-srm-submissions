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
class BottlesOnShelf {
	public:
	int getNumBroken(int N, vector <int> left, vector <int> right, vector <int> damage) {
		int M=left.size();
		LL kpk=1;
		LL total=0;
		bool sudah[50]={0};
		int x;
		for(x=0;x<M;x++)
		{
			LL a = (LL) left[x];
			LL b = (LL) right[x];
			kpk= kpk*(LL)damage[x]/__gcd(kpk,(LL)damage[x]);
			while(a%damage[x]!=0) a++;
			while(b%damage[x]!=0) b--;
			if(a<=b) total+=((b-a)/(LL)damage[x])+1LL;
			cout << kpk << endl;
			if((kpk<=right[x])&&(sudah[kpk]))
			{
				LL c=(LL) left[x];
				LL d=(LL) right[x];
				while(c%kpk!=0) c++;
				while(d%kpk!=0) d--;
				if(c<=d) total-=(((d-c)/kpk)+1LL);
			}
			sudah[kpk]=true;
		}
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
		cout << "Running example tests for BottlesOnShelf..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1292693995)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 1000.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		BottlesOnShelf _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int N = 7;
				int left[] = {1};
				int right[] = {7};
				int damage[] = {2};
				_expected = 3;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
			}
			case 1:
			{
				int N = 7;
				int left[] = {1,1};
				int right[] = {7,7};
				int damage[] = {2,3};
				_expected = 4;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
			}
			case 2:
			{
				int N = 7;
				int left[] = {1,1,1};
				int right[] = {7,7,7};
				int damage[] = {2,3,6};
				_expected = 4;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
			}
			case 3:
			{
				int N = 10;
				int left[] = {1,6};
				int right[] = {5,10};
				int damage[] = {1,7};
				_expected = 6;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
			}
			case 4:
			{
				int N = 5;
				int left[] = {4};
				int right[] = {4};
				int damage[] = {7};
				_expected = 0;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
			}
			case 5:
			{
				int N = 1000000000;
				int left[] = {1};
				int right[] = {1000000000};
				int damage[] = {1};
				_expected = 1000000000;
				_received = _obj.getNumBroken(N, vector <int>(left, left+sizeof(left)/sizeof(int)), vector <int>(right, right+sizeof(right)/sizeof(int)), vector <int>(damage, damage+sizeof(damage)/sizeof(int))); break;
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
