class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
        if(L1[0] > R2[0]  or  R1[0] < L2[0]  or  R2[1] > L1[1]  or  R1[1] > L2[1])
            return false;
        else
            return true;
    }
};
