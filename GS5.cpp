int main()
{
    {
        int n;
        cin>>n;
        ll i2=0, i3=0, i5=0;
        ll n2=2, n3=3, n5=5;
        ll nextMul = 1;
        ll ugly[n];
        for(int i=1; i<n; i++)
        {
            nextMul = min(min(n2, n3), n5);
            ugly[i] = nextMul;

            if(nextMul == n2)
            {
                i2++;
                n2 = ugly[i2]*2;
            }
            if(nextMul == n3)
            {
                i3++;
                n3 = ugly[i3]*3;
            }
            if(nextMul == n5)
            {
                i5++;
                n5 = ugly[i5]*5;
            }
        }
        cout<<nextMul<<endl;
    }
    return 0;
} 
