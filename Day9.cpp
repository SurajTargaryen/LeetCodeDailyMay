
/* Every perfect square is sum of odd numbers
eg: 4 = 1+3
    25 = 1+3+5+7+9
	
	So keep on subtracting the number from consecutive odd number, if it reaches zero then it is a perfect square */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num >0)
        {
            num -=i;
            i +=2;
            if(num==0) return true;
        }
        return false;
    }
};