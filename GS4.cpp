string encode(string src)
{     
    string ans = "";
    int cnt = 1, i = 0;
    for(i = 1;  i < src.length();  i++)
    {
        if(src[i] != src[i-1])
        {
            ans += src[i-1];
            ans += to_string(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    if(src.length() == 1)
    {
        return src + '1';
    }
    else if(cnt)
    {
        ans += src[i-1];
        ans += to_string(cnt);
    }
    return ans;
}     
  
