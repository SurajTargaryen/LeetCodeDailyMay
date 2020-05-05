class Solution {
public:
    int findComplement(int num) {
      int count =0;
      int x=num;

      while(x>0)
      {
          count++;
          x=x>>1;
      }
      cout<<count;

      unsigned int temp= ~0;
      temp = temp>>(32-count);

      num = ~num;
      num = num&temp;
      cout<<num;
      cout<<temp;   
        return num;
    }
};