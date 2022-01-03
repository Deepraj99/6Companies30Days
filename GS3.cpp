class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long s=0, e=0, mul=1;
        int count = 0;
        for(e=0; e<n; e++)
        {
            mul *= a[e];
            while(e>s && mul>=k)
            {
                mul /= a[s++];
            }
            if(k>mul)
            count += e-s+1;
        }
        return count;
    }
}; 
