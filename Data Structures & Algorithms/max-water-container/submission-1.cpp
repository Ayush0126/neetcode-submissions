class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int mx = 0;
        while(i<j){
            if(heights[i]<heights[j]){
                mx = max(mx,heights[i]*(j-i));
                i++;
            }else{
                mx = max(mx,heights[j]*(j-i));
                j--;
            }
        }
        return mx;
    }
};
