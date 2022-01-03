class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0;  i < n;  i++)
        {
            if(nums[i] % k == 0)
                mp[k]++;
            else
                mp[nums[i]%k]++;
        }
        for(auto i : mp)
        {
            if(i.first == k)
            {
                if(i.second % 2)
                    return false;
            }
            else
            {
                if(mp[i.first] != mp[k - i.first])
                    return false;
            }
        }
        return true;
    }
}; 
