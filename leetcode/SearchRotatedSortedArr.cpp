// This is the solution of the leet code question named as Search in rotated Sorted Array 
// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int Pivot(vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start ) / 2;
        while(start <= end)
        {
            if(start == end)
            {
                return start;
            }
            if(mid  <= end && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            if(mid - 1 >= start &&nums[mid - 1] > nums[mid])
            {
                return mid - 1;
            }
            if(nums[start] > nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + (end - start ) / 2;
        }
        return -1;
    }

    int BinearySearch(vector<int>arr, int s, int e, int target)
    {
        int mid = s + (e - s ) / 2;
        while(s <= e)
        {
            if(arr[mid] == target)
            {
                return mid;
            }
            if(arr[mid] > target)
            {
                e = mid - 1;
            }
            else{
            s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) 
    {
       int pivotIndex = Pivot(nums);
       int ans;
       if(nums[0] <= target && target <= nums[pivotIndex])
       {
        //Apply binary search in left side
        ans = BinearySearch(nums, 0, pivotIndex, target);
       }
       else
       {
        ans = BinearySearch(nums, pivotIndex+1, nums.size() - 1, target);
       }
       return ans;
    }
};