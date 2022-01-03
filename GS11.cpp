class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int res[2];
        int sum = 0;
        for(int i = 0;  i < n;  i++)
            sum += arr[i];
        int rep;
        for(int i = 0;  i < n;  i++)
        {
            if(arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] *= -1;
            else
                rep = abs(arr[i]);
        }
        res[0] = rep;
        sum -= rep;
        for(int i = 0;  i < n;  i++)
        {
            if(arr[i] > 0)
            {
                res[1] = i+1;
                break;
            }
        }
        int *tt = res;
        return tt;
    }
}; 
