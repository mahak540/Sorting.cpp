class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size();
        
        int gap=(n+m+1)/2;
        while(gap>0)
        {
            int i=0,j=gap;
            while(j< n+m)
            {
                if(j<n && a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
                else if(i<n && j>=n && a[i]>b[j-n])
                {
                    swap(a[i],b[j-n]);
                }
                else if(i>=n && b[i-n] > b[j-n])
                {
                    swap(b[i-n],b[j-n]);
                }
                i++;
                j++;
            }
            if(gap==1)
            break;
            gap=(gap+1)/2;
            
        }
    }
};
