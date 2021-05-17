#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10][10] = { {1,2,3,4},{5,6,7,8},{0,9,8,7},{6,5,4,3} };
	int n, m;
	cin >> m >>n ;
	 
	for (int row = 0; row < m ; row++)
	{
		for (int col = 0; col < n ; col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout << endl;
	}
    
	for (int col = 0; col < n ; col++)
	{    
		if (col %2== 0)// if col is even -top to down
		{
			for (int row = 0; row < m ; row++)
				cout << a[row][col];
		}
		else {  //else if co; is odd -down top
			
			for (int row = m - 1; row >= 0; row--)
			{
				cout << a[row][col];
		   }
		}
	}
	return 0;
}