class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_set<int> s;
        vector<int> ans;
        for (int i = 0; i < n1; i++) {
            bool in_nums2 =
                find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end();
            bool in_nums3 =
                find(nums3.begin(), nums3.end(), nums1[i]) != nums3.end();
            if (in_nums2 || in_nums3) {
                if (s.find(nums1[i]) == s.end())
                    ans.push_back(nums1[i]);

                s.insert(nums1[i]);
            }
        }
        for (int i = 0; i < n2; i++) {
            bool is_present =
                find(nums3.begin(), nums3.end(), nums2[i]) != nums3.end();
            if (is_present) {
                if (s.find(nums2[i]) == s.end())
                    ans.push_back(nums2[i]);

                s.insert(nums2[i]);
            }
        }
        return ans;
    }
};