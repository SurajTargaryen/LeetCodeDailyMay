class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      int Arr[123]={0};

        for(int i=0;i<magazine.length();i++)
        {
            Arr[magazine[i]]++;
        }
        for(int j=0;j<ransomNote.length();j++)
        {
            if(Arr[ransomNote[j]] <= 0)
            {
                return false;
            }
            Arr[ransomNote[j]]--;                
        }
        return true;
    }
};