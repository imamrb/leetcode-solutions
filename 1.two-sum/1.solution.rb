# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    len = nums.length
    i = 0
    j = len -1
    arr = []

    (0..len-1).each do |i|
      arr << [i, nums[i]]
    end

    arr.sort! do |a, b|
      if a[1] == b[1]
        a[0] <=> b[0]
      else
        a[1] <=> b[1]
      end
    end

    while i < j
      if arr[i][1] + arr[j][1] == target
        return [arr[i][0], arr[j][0]]
      elsif arr[i][1] + arr[j][1] >= target
        j -= 1
      else
        i += 1
      end
    end
end
