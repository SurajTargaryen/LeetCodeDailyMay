/* DFS search is used
  If the given position already has the specified color, then nothing to do */

class Solution {
public:
    int OriginalColor,NewColor;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        OriginalColor = image[sr][sc];
        NewColor=newColor;
        if(OriginalColor == newColor) return image;
        DFS(image,sr,sc); 
        return image;        
    }
    
    void DFS(vector<vector<int>>& image, int sr, int sc)
    {
		/* Row and colums dimensions are valid and also the element has the original color of specified element, so that there are connected in 4-d */
        if(sr<image.size() && sr>=0 && sc>=0 && sc<image[sr].size() && image[sr][sc] == OriginalColor)
        {
            image[sr][sc] = NewColor;
            DFS(image,sr+1,sc);
            DFS(image,sr-1,sc);
            DFS(image,sr,sc+1);
            DFS(image,sr,sc-1);
        }
    }
};