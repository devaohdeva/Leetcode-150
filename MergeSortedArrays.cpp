class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> finalMergedArray;
        int p1 = 0, p2 = 0, n1 = m, n2 = n;
        while(p1<n1 && p2<n2){
            if(nums1[p1]<nums2[p2]){
                finalMergedArray.push_back(nums1[p1]);
                p1++;
            }
            else{
                finalMergedArray.push_back(nums2[p2]);
                p2++;
            }
        }
        while(p1<n1){
            finalMergedArray.push_back(nums1[p1]);
            p1++;
        }
        while(p2<n2){
            finalMergedArray.push_back(nums2[p2]);
            p2++;
        }
        nums1 = finalMergedArray;
    }
};