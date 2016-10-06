#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <utility>
#include <set>
#include <bitset>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pi 2*acos(0.0)
#define eps 1e-9
#define PII pair<int,int> 
#define PDD pair<double, double> 
#define LL long long
#define INF 1000000000

using namespace std;

vector<vector<int> > fillEmpty(vector<vector<int> > arr, int &a, int &b, int &n, int &m) {
	//upper-left area;
	for(int i = 1; i < a; i++)
		for(int j = 1; j < b; j++)
			if(arr[i][j] == -1) arr[i][j] = max(arr[i-1][j], arr[i][j-1]) + 1;
			
	//upper-right area;
	for(int i = 1; i < a; i++)
		for(int j = m; j > b; j--)
			if(arr[i][j] == -1) arr[i][j] = max(arr[i-1][j], arr[i][j+1]) + 1;
			
	//lower-left area;
	for(int i = n; i > a; i--)
		for(int j = 1; j < b; j++)
			if(arr[i][j] == -1) arr[i][j] = max(arr[i+1][j], arr[i][j-1]) + 1;
			
	//lower-right area;
	for(int i = n; i > a; i--)
		for(int j = m; j > b; j--)
			if(arr[i][j] == -1) arr[i][j] = max(arr[i+1][j], arr[i][j+1]) + 1;
	
	//left a belt
	for(int j = 1; j < b; j++) 
		if(arr[a][j] == -1) arr[a][j] = max(max(arr[a-1][j], arr[a+1][j]), arr[a][j-1]) + 1;
		
	//right a belt
	for(int j = m; j > b; j--)
		if(arr[a][j] == -1) arr[a][j] = max(max(arr[a-1][j], arr[a+1][j]), arr[a][j+1]) + 1;
		
	//upper b belt
	for(int i = 1; i < a; i++)
		if(arr[i][b] == -1) arr[i][b] = max(max(arr[i][b-1], arr[i][b+1]), arr[i-1][b]) + 1;
		
	//lower b belt
	for(int i = n; i > a; i--)
		if(arr[i][b] == -1) arr[i][b] = max(max(arr[i][b-1], arr[i][b+1]), arr[i+1][b]) + 1;
		
	//ab cell
	if(arr[a][b] == -1) 
		arr[a][b] = max(max(arr[a-1][b], arr[a+1][b]), max(arr[a][b-1], arr[a][b+1])) + 1;
	return arr;
}

class TheMountain {
	public:
	int minSum(int n, int m, vector <int> rowIndex, vector <int> columnIndex, vector <int> element) {
		vector<vector<int> > arr, temp;
		
		vector<int> minus;
		for(int i = 0; i <= m + 1; i++) minus.pb(-1);
		for(int i = 0; i <= n + 1; i++) arr.pb(minus);
		
		for(int i = 0; i <= n + 1; i++) arr[i][0] = arr[i][m + 1] = 0;
		for(int i = 0; i <= m + 1; i++) arr[0][i] = arr[n + 1][i] = 0;
		
		for(int i = 0; i < rowIndex.size(); i++) 
			arr[rowIndex[i] + 1][columnIndex[i] + 1] = element[i];
		
		bool existEmpty = !(element.size() == n * m);
			
		int tot = -1;
		temp = arr;
		for(int a = 1; a <= n; a++)
			for(int b = 1; b <= m; b++)
			{
				if(existEmpty) temp = fillEmpty(arr, a, b, n, m);
				//printf("%d %d\n", a, b);
				//for(int i = 1; i <= n; i++)
				//	for(int j = 1; j <= m; j++)
				//		("%d%c", temp[i][j], j==m?'\n':' ');
						
				int mount = 0;
				int total = 0;
				for(int i = 1; i <= n && !mount; i++)
					for(int j = 1; j <= m && !mount; j++)
					{
						if(j < b && temp[i][j] >= temp[i][j+1]) mount = 1; else
							if(j > b && temp[i][j] >= temp[i][j-1]) mount = 2; else
								if(i < a && temp[i][j] >= temp[i+1][j]) mount = 3; else
									if(i > a && temp[i][j] >= temp[i-1][j]) mount = 4;
						//if(mount) printf("%d %d\n", i, j);
						total += temp[i][j];
					}
					
				//printf("%d\n\n", mount);
				if(!mount)
					if(tot == -1) tot = total;
						else tot = min(tot, total);
			}
		
		return tot;
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
		cout << "Testing TheMountain (550.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1368289216;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 550.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		TheMountain _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int n = 2;
				int m = 3;
				int rowIndex[] = {0, 0, 0, 1, 1, 1};
				int columnIndex[] = {0, 1, 2, 0, 1, 2};
				int element[] = {4, 6, 9, 1, 3, 6};
				_expected = 29;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 1:
			{
				int n = 2;
				int m = 3;
				int rowIndex[] = {1, 0, 1};
				int columnIndex[] = {2, 2, 0};
				int element[] = {5, 7, 6};
				_expected = 40;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 2:
			{
				int n = 3;
				int m = 3;
				int rowIndex[] = {0, 0, 2, 2};
				int columnIndex[] = {0, 2, 2, 0};
				int element[] = {1, 1, 1, 1};
				_expected = 15;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 3:
			{
				int n = 2;
				int m = 2;
				int rowIndex[] = {0, 0, 1, 1};
				int columnIndex[] = {0, 1, 1, 0};
				int element[] = {5, 8, 5, 8};
				_expected = -1;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 4:
			{
				int n = 1;
				int m = 3;
				int rowIndex[] = {0};
				int columnIndex[] = {1};
				int element[] = {1};
				_expected = -1;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 5:
			{
				int n = 123;
				int m = 45;
				int rowIndex[] = {2, 3, 5, 7, 11};
				int columnIndex[] = {13, 17, 19, 23, 29};
				int element[] = {100, 200, 300, 400, 500};
				_expected = 367047;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 6:
			{
				int n = 200;
				int m = 200;
				int rowIndex[] = {5};
				int columnIndex[] = {8};
				int element[] = {666};
				_expected = 5737554;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			case 7:
			{
				int n = 10;
				int m = 10;
				int rowIndex[] = {0, 8, 7};
				int columnIndex[] = {3, 1, 9};
				int element[] = {5, 4, 7};
				_expected = 593;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}
			/*case 8:
			{
				int n = ;
				int m = ;
				int rowIndex[] = ;
				int columnIndex[] = ;
				int element[] = ;
				_expected = ;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}*/
			/*case 9:
			{
				int n = ;
				int m = ;
				int rowIndex[] = ;
				int columnIndex[] = ;
				int element[] = ;
				_expected = ;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}*/
			/*case 10:
			{
				int n = ;
				int m = ;
				int rowIndex[] = ;
				int columnIndex[] = ;
				int element[] = ;
				_expected = ;
				_received = _obj.minSum(n, m, vector <int>(rowIndex, rowIndex+sizeof(rowIndex)/sizeof(int)), vector <int>(columnIndex, columnIndex+sizeof(columnIndex)/sizeof(int)), vector <int>(element, element+sizeof(element)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
