/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) 
{
    if(nums.length==0) return init;
    else
    {
        var ans=fn(init,nums[0]);
        for(i=1;i<nums.length;i++)
        {
            ans=fn(ans,nums[i]);
        }
        return ans;
    }
    
};