class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans =0;
        int m= grid.size();
        int n = grid[0].size();
        for(int i =0;i<m;i++){
              sort(grid[i].begin(),grid[i].end());
        }
        for(int j=0;j<n;j++)
        {
           int maxi=INT_MIN;
            for(int i=0;i<m;i++)
            {
                maxi=max(maxi,grid[i][j]);
            }
              ans += maxi;
        }
        return ans;
    }
};