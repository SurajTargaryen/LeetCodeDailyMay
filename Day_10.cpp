
/*
Store the trust member + count in separate vectors
-> Finally if we fins someone who
  -> count = 0 (Number of people this person trusts)
  -> Trust = N-1 (all members must defintely trust this person)
  then return this idx else -1
  */

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
       vector<int> Arr_Trust(N+1,0);
       vector<int> Arr_Count(N+1,0);
        
        for(int i=0;i<trust.size();i++)
        {
            Arr_Trust[trust[i][0]]++;
            Arr_Count[trust[i][1]]++;
        }
        
        for(int idx =1;idx<=N;idx++)
        {
            if((Arr_Count[idx] == N-1) && Arr_Trust[idx] ==0)
            {
                return idx;
                break;
            }
        }
            return -1;       
    }
}; 