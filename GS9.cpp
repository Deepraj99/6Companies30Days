class Solution{   
public:
    string printMinNumberForPattern(string s){
        
        string res = "";
        int n = s.length();
        int temp = 0;
        if(s[0] == 'I')
            temp = 1;
        else
        {
            for(int i = 0;  i < n;  i++)
            {
                if(s[i] == 'I')
                    break;
                else
                    temp++;
            }
            temp++;
        }
        
        res += to_string(temp);
        int maxi = temp;
        
        for(int i = 0;  i < n;  i++)
        {
            if(i != n-1)
            {
                if(s[i] == s[i+1])
                {
                    if(s[i] == 'I')
                        temp = maxi + 1;
                    else
                        temp--;
                    maxi = max(maxi, temp);
                }
                else
                {
                    if(s[i] == 'I')
                    {
                        int cnt = 0;
                        for(int j = i+1;  j < n;  j++)
                        {
                            if(s[j] == 'D')
                                cnt++;
                            else
                                break;
                        }
                        maxi += cnt + 1;
                        temp = maxi;
                    }
                    else
                        temp--;
                }
            }
            else
            {
                if(s[i] == s[i-1])
                {
                    if(s[i] == 'I')
                        temp++;
                    else
                        temp--;
                }
                else
                {
                    if(s[i] == 'I')
                        temp = maxi + 1;
                    else
                        temp--;
                }
            }
            res += to_string(temp);
        }
        return res;
    }
}; 
