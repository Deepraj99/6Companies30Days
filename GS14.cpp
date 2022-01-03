class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        
        int sum = 0, x = 0, y = 0;
        int n = arr.size();
        int res = 1e9;
        for(y = 0;  y < n;  y++)
        {
            sum += arr[y];
            while(sum >= target)
            {
                res = min(res, y-x+1);
                sum -= arr[x];
                x++;
            }
        }
        return (res == 1e9) ? 0 : res;
    }
}; 
