/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int i=0;
        int n=A.size();
        int res=0;
        while(i<A.size())
        {
            if(i<n-2&&(A[i+1]-A[i])==(A[i+2]-A[i+1]))
            {
                int diff=A[i+1]-A[i];
                i+=3;
                int count=1;
                int j=2;
                while(i<n)
                {
                    if(A[i]-A[i-1]==diff)
                        count+=j,j++;
                    else
                        break;
                    i++;
                }
                 res+=count;
            }
            else
                i++;
        }
        return res;
        
    }
};