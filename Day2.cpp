class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> Hashmap;
        for(auto i:J)
            Hashmap[i]++;
        
        int count=0;
        for(auto i:S)
        {
            if(Hashmap.count(i))
                count++;
        }
        return count;
    }
};