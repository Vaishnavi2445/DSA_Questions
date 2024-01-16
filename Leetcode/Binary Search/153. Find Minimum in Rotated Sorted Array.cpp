// // class Solution {
// // public:
// //     int findMin(vector<int>& nums) {
// //         sort(nums.begin(), nums.end());

// //         return nums[0];
// //     }
// // };


class Solution {
    public:
     int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = (start+end) / 2;

            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            } else if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return nums[start];
    }
};


/*

Approach
My approach adeptly utilizes binary search to identify the rotation point in a rotated sorted array with unique elements. By recognizing the crucial point where an element surpasses the last one, my algorithm efficiently adjusts the search range to pinpoint the minimum element, ensuring a time complexity of O(log n).
The steps incorporated in my approach are as follows :

"start" is initialized to the beginning of the array (0).
"end" is initialized to the end of the array (nums.length - 1).

The while loop continues to run until the "start" index is less than or equal to the "end" index. Within the loop, the middle index is calculated, and subsequently, a check for the minimum element is performed.

We check if mid is greater than 0 and if nums[mid] is less than nums[mid - 1]. If this condition is true, it means we've found the minimum element, and return nums[mid].

If the above condition is not true, then we updates the search range at last and continues the searching.
