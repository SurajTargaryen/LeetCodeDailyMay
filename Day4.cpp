/* ~ operator does the job, but we want to restrict it to our N size.
So first calculate 'N' size
then calculate the mask value(max value shifted by 32-'N' size), so that other bits are not needed.
Finally perform '~' on the number and '&' with mask value */

class Solution {
public:
    int findComplement(int num) {
      int count =0,x=num;

      while(x>0)
      {
          count++;
          x=x>>1;
      }

      unsigned int temp= ~0;
      temp = temp>>(32-count);

      num = ~num&temp;
      return num;
    }
};