class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size(),l=0,h=n-1,mid=0;
        while(mid<=h)
        {
            if(arr[mid]==0)
            {
                swap(arr[l],arr[mid]);
                l++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else{
                swap(arr[mid],arr[h]);
                h--;
            }
        }
    }
};
