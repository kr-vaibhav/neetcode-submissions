    class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int i = 0, j = 0, n = nums1.size(), m = nums2.size();
            vector<int>ans;

            while( i < n && j < m ){
                if(nums1[i] <= nums2[j]){
                    ans.push_back(nums1[i]);
                    i++;
                }else{
                    ans.push_back(nums2[j]);
                    j++;
                }
            }

            while( i < n )ans.push_back(nums1[i++]);
            while( j < m )ans.push_back(nums2[j++]);

            int size = ans.size();
            double val = 0.0;
            if( size % 2 == 0 ){
                int index = size / 2;
                val = (double)( ans[index] + ans[index-1] )/2;
            }else{
                val = (double)ans[size/2];
            }

            return val;
        }
    };
