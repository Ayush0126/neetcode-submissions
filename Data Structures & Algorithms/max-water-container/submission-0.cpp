class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int mx = INT_MIN;
        while(i<j){
            if(heights[i]<heights[j]){
                mx = max(mx,heights[i]*abs(i-j));
                i++;
            }else{
                mx = max(mx,heights[j]*abs(i-j));
                j--;
            }
        }
        return mx;
    }
};
