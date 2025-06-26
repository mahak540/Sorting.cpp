class Solution {
  public:
  string addstring(string &s1, string &s2)
  {
      
      int i=s1.length()-1;
      int j=s2.length()-1;
      int carry=0;
      string res="";
      
      while(i>=0 || j>=0 || carry > 0)
      {
          int sum=carry;
          if(i>=0)
          sum+=(s1[i]-'0');
          if(j>=0)
          sum+=(s2[j]-'0');
          
          res.push_back(sum%10 + '0');
          carry=sum/10;
          i--;
          j--;
          
      }
      while(!res.empty() && res.back()=='0')
      res.pop_back();
      reverse(res.begin(),res.end());
      
      return res;
  }
    string minSum(vector<int> &arr) {
        // code here
        vector<int>count(10,0);
        for(int num:arr)
        {
            count[num]++;
        }
        string s1="",s2="";
        bool firstno=true;
        
        for(int d=0;d<10;d++){
            while(count[d]--)
            {
                if(firstno){
                    if(!(s1.empty() && d==0))
                    s1.push_back(d +'0');
                    
                    firstno=false;
                }
                else{
                    if(!(s2.empty() && d==0))
                    s2.push_back(d +'0');
                    
                    firstno=true;
                }
            }
        }
        if(s1.empty()) s1="0";
        if(s2.empty()) s2="0";
        
        return addstring(s1,s2);
        
    }
};
