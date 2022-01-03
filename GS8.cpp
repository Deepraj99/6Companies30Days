class Solution {
	public:
		int CountWays(string str){
		    
		    const int mod = 1e9+7;
		    
		    if(str[0] == '0')
		        return 0;
		    int n = str.length();
		    int dp[n] = {0};
		    dp[0] = 1;
		    for(int i = 1;  i < n;  i++)
		    {
		        if(str[i-1] == '0'  and  str[i] == '0')
		            dp[i] = 0;
		        else if(str[i-1] == '0'  and  str[i] != '0')
		            dp[i] = dp[i-1];
		        else if(str[i-1] != '0'  and  str[i] == '0')
		        {
		            if(stoi(str.substr(i-1, 2)) > 0  and  stoi(str.substr(i-1, 2)) < 27)
		            {
		                if(i == 1)
		                    dp[i] = 1;
		                else 
		                    dp[i] = dp[i-2];
		            }
		        }
		        else
		        {
		            if(str[i] != '0')
		                dp[i] = dp[i-1];
		            if(stoi(str.substr(i-1, 2)) > 0  and  stoi(str.substr(i-1, 2)) < 27)
		            {
		                if(i == 1)
		                    dp[i] = 2;
		                else
		                    dp[i] = (dp[i]%mod + dp[i-2]%mod)%mod;
		            }
		        }
		    }
		    return dp[n-1];
		}

}; 
