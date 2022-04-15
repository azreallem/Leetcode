#include <iostream>
#include <vector>

using namespace std;



int climbStairs(int n)
{
	if (n <= 2)
		return n;
	// dp:[0,n]
	vector<int> dp(n+1);
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}


int main()
{
	cout << climbStairs(4) << endl;
	return 0;
}
