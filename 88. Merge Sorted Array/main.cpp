/*
https://leetcode.com/problems/merge-sorted-array/submissions/1072203904/
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>aux;
        for(int x=0; x<nums1.size()-n; x++)
        {
            aux.push_back(nums1[x]);
        }        
        for(int x=0; x<nums2.size(); x++)
        {
            aux.push_back(nums2[x]);
        }
        sort(aux.begin(), aux.end());
        for(int x=0; x<aux.size(); x++)
        {
            nums1[x] = aux[x];
            cout << nums1[x] << " ";
        }
    }
};