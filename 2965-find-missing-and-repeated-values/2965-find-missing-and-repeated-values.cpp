class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> hash((grid.size()*grid.size()+1),0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                hash[grid[i][j]]++;
            }
        }
        int a=0;
        int b=0;
        for(int i=1;i<=(grid.size()*grid.size());i++){
            if(hash[i]==0)
            b=i;
            if(hash[i]==2)
            a=i;
        }
        return {a,b};
    }
};