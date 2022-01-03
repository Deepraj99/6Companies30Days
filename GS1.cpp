class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& list) {
        
        
        map<string, vector<string>> mp;
        for(int i = 0;  i < list.size();  i++)
        {
            string str = list[i];
            sort(str.begin(), str.end());
            mp[str].push_back(list[i]);
        }
        vector<vector<string>> ans;
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
}; 
