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

class SRMCodingPhase
 {
	public:
	int ans,temp,x,poin[5],skill[5];
	int pinal[5];
	
	void hitung(int now,int hoki,int left)
	{
		//cout << now << " " << temp << endl;
		ans=max(ans,temp);
		if(now==3) return;
		
		for(int pake=0;(pake<skill[now])&&(pake<=hoki);pake++) if(left+skill[now]-pake<=75)
		{
			temp+=(poin[now]-pinal[now]*(skill[now]-pake));
			hitung(now+1,hoki-pake,left+skill[now]-pake);
			temp-=(poin[now]-pinal[now]*(skill[now]-pake));
		}
		hitung(now+1,hoki,left);
	}
	
	int countScore(vector <int> points, vector <int> skills, int luck) 
	{
		for(x=0;x<3;x++) poin[x]=points[x];
		for(x=0;x<3;x++) skill[x]=skills[x];
		pinal[0]=2,pinal[1]=4,pinal[2]=8;
		
		ans=temp=0;
		hitung(0,luck,0);
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
		cout << "Running example tests for SRMCodingPhase..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1317740521)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		SRMCodingPhase _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				int points[] = {250, 500, 1000};
				int skills[] = {10, 25, 40};
				int luck = 0;
				_expected = 1310;
				_received = _obj.countScore(vector <int>(points, points+sizeof(points)/sizeof(int)), vector <int>(skills, skills+sizeof(skills)/sizeof(int)), luck); break;
			}
			case 1:
			{
				int points[] = {300, 600, 900};
				int skills[] = {30, 65, 90};
				int luck = 25;
				_expected = 680;
				_received = _obj.countScore(vector <int>(points, points+sizeof(points)/sizeof(int)), vector <int>(skills, skills+sizeof(skills)/sizeof(int)), luck); break;
			}
			case 2:
			{
				int points[] = {250, 550, 950};
				int skills[] = {10, 25, 40};
				int luck = 75;
				_expected = 1736;
				_received = _obj.countScore(vector <int>(points, points+sizeof(points)/sizeof(int)), vector <int>(skills, skills+sizeof(skills)/sizeof(int)), luck); break;
			}
			case 3:
			{
				int points[] = {256, 512, 1024};
				int skills[] = {35, 30, 25};
				int luck = 0;
				_expected = 1216;
				_received = _obj.countScore(vector <int>(points, points+sizeof(points)/sizeof(int)), vector <int>(skills, skills+sizeof(skills)/sizeof(int)), luck); break;
			}
			case 4:
			{
				int points[] = {300, 600, 1100};
				int skills[] = {80, 90, 100};
				int luck = 4;
				_expected = 0;
				_received = _obj.countScore(vector <int>(points, points+sizeof(points)/sizeof(int)), vector <int>(skills, skills+sizeof(skills)/sizeof(int)), luck); break;
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
