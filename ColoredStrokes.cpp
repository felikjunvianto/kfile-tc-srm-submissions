#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<utility>
#include<stack>
#include<queue>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define PII pair<int,int> 
#define pi 2*acos(0.0)
#define eps 1e-9

typedef long long LL;

using namespace std;
class ColoredStrokes 
{
	public:
	int getLeast(vector <string> picture)
	{
		int bawah=picture.size();
		int samping=picture[0].size();
		int gores=0;
		int x,y,z;
		
		for(x=0;x<samping;x++)
		{
			y=-1;
			do
			{
				y++;
				if((picture[y][x]=='B')||(picture[y][x]=='G'))
				{
					z=y+1;
					while((z<bawah)&&((picture[z][x]=='B')||(picture[z][x]=='G'))) z++;z--;
					gores++;
					for(int a=y;a<=z;a++) 
					switch(picture[a][x])
					{
						case('B') : picture[a][x]='.';break;
						case('G') : picture[a][x]='R';break;
					}
					y=z;
				}
			}while(y<bawah-1);
		}
		
		for(y=0;y<bawah;y++)
		{
			x=-1;
			do
			{
				x++;
				if((picture[y][x]=='R')||(picture[y][x]=='G'))
				{
					z=x+1;
					while((z<samping)&&((picture[y][z]=='R')||(picture[y][z]=='G'))) z++;z--;
					gores++;
					for(int a=x;a<=z;a++) 
					switch(picture[y][a])
					{
						case('R') : picture[y][a]='.';break;
						case('G') : picture[y][a]='B';break;
					}
					x=z;
				}
			}while(x<samping-1);
		}
		return(gores);
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
		cout << "Running example tests for ColoredStrokes..." << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		double PT = (time(NULL)-1296562254)/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl <<  "Submission is worth " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points." << endl;
		system("pause");
	}
	else
	{
		int _tc; stringstream(argv[1]) >> _tc;
		ColoredStrokes _obj;
		int _expected, _received;
		switch (_tc)
		{
			case 0:
			{
				string picture[] = {"...",
				                    "..."};
				_expected = 0;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
			}
			case 1:
			{
				string picture[] = {"..B.",
				                    "..B."};
				_expected = 1;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
			}
			case 2:
			{
				string picture[] = {".BB."};
				_expected = 2;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
			}
			case 3:
			{
				string picture[] = {"...B..",
				                    ".BRGRR",
				                    ".B.B.."};
				_expected = 3;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
			}
			case 4:
			{
				string picture[] = {"...B..",
				                    ".BRBRR",
				                    ".B.B.."};
				_expected = 4;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
			}
			case 5:
			{
				string picture[] = {"GR",
				                    "BG"};
				_expected = 4;
				_received = _obj.getLeast(vector <string>(picture, picture+sizeof(picture)/sizeof(string))); break;
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
