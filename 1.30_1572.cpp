class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        for(int i=0;i<mat.size();i++)
            s+=(mat[i][i]+mat[i][mat.size()-1-i]);
        if(mat.size()%2)
            s-=mat[mat.size()/2][mat.size()/2];
        return s;
    }
};
