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

class MysteriousRestaurant
 {
	public:
	
	int N,M,money,harga[100][100];
	
	bool cek(int day)
	{
		if(day>N) return(false);
		int i,a,cost=0;
		for(i=1;i<=min(7,day);i++)
		{
			int kecil=INF,temp;
			for(a=1;a<=M;a++)
			{
				temp=0;
				int tambah=0;
				while(i+tambah<=day)
				{
					temp+=harga[i+tambah][a];
					tambah+=7;
				}
				kecil=min(kecil,temp);
			}
			cost+=kecil;
		}
		
		if(cost>money) return(false);
		return(true);
	}
	
	int binser(int l,int r)
	{
		while(l<=r)
		{
			int pivot=(l+r)/2;
			int next=pivot+1;
			bool bisanow=cek(pivot),bisanext=cek(next);
			
			if(!bisanow) r=pivot-1; else
				if((bisanow)&&(bisanext)) l=pivot+1; else
					if((bisanow)&&(!bisanext)) return(pivot);
		}
	}
	
	int maxDays(vector <string> prices, int budget) 
	{
		for(int x=0;x<prices.size();x++)
			for(int y=0;y<prices[x].size();y++)
				if((prices[x][y]>='0')&&(prices[x][y]<='9')) harga[x+1][y+1]=prices[x][y]-'0'; else
				if((prices[x][y]>='A')&&(prices[x][y]<='Z')) harga[x+1][y+1]=prices[x][y]-'A'+10; else
				harga[x+1][y+1]=prices[x][y]-'a'+36;
		
		money=budget;
		N=(int)prices.size();
		M=(int)prices[0].size();
		
		return(binser(0,N));
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
		cout << "Running example tests for MysteriousRestaurant..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1310569552)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 512.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		MysteriousRestaurant _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string prices[] = {"26", "14", "72", "39", "32", "85", "06"};
				int budget = 13;
				_expected = 5;
				_received = _obj.maxDays(vector <string>(prices, prices+sizeof(prices)/sizeof(string)), budget); break;
			}
			case 1:
			{
				string prices[] = {"26", "14", "72", "39", "32", "85", "06", "91"};
				int budget = 20;
				_expected = 8;
				_received = _obj.maxDays(vector <string>(prices, prices+sizeof(prices)/sizeof(string)), budget); break;
			}
			case 2:
			{
				string prices[] = {"SRM", "512"};
				int budget = 4;
				_expected = 0;
				_received = _obj.maxDays(vector <string>(prices, prices+sizeof(prices)/sizeof(string)), budget); break;
			}
			case 3:
			{
				string prices[] = {"Dear", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngeP", "hase", "andb", "ecar", "eful"};
				int budget = 256;
				_expected = 10;
				_received = _obj.maxDays(vector <string>(prices, prices+sizeof(prices)/sizeof(string)), budget); break;
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
