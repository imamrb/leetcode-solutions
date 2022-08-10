# @param {Integer[]} nums
# @return {Integer[][]}
def three_sum(nums)
  nums = nums.sort
  len = nums.length
  ans = []

  left = 0
  while left < len - 2
    right = len - 1
    mid = left + 1
    target = -nums[left]

    while mid < right
      sum = nums[mid] + nums[right]

      if sum < target
         mid += 1
      elsif sum > target
        right -= 1
      else
        ans.push([nums[left], nums[mid], nums[right]])

        mid += 1 while mid < right && nums[mid] == nums[mid + 1]
        right -= 1 while mid < right && nums[right] == nums[right - 1]

        mid += 1
        right -= 1
      end
    end

    left += 1 while left < len && nums[left] == nums[left + 1]
    left += 1
  end

  ans
end