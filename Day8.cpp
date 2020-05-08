/* Basically slope has to be calculated once and should be checked with all other coordinates
   slope = y2-y1 / x2-x1
   
   to ensure we dont encounter / by 0
   
   since y2-y1/x2-x1 must be equal to y3-y2/x3-x2
   we can check (x3-x2) * (y2-y1) = (x2-x1) * (y3-y2) */

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x=coordinates[1][0] - coordinates[0][0];
        int y= coordinates[1][1] - coordinates[0][1];
        
        for(int i=2;i<coordinates.size();i++)
        {
            int xdash=coordinates[i][0] - coordinates[i-1][0];
            int ydash= coordinates[i][1] - coordinates[i-1][1];
            if((x*ydash) != (y*xdash))
                return false;
        }
        return true;        
    }
};