class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0) return num;
        if(k>= num.length()) return "0";
        
        int start=0;
        int end=k+1;
        string Res="";
        int cmplen = num.length()-k;
        
        while(Res.length() != cmplen)
        {
            char x=*(min_element(&num[start],&num[end]));
            start=find(&num[start],&num[end],x)-&num[0]+1;
            Res+=x;         
            end=k+Res.length()+1;            
        }
        
        int idx=0;
        while(Res[idx] == '0')
            idx++;
        if(idx >= Res.length()) return "0";
        return &Res[idx];        
    }
};