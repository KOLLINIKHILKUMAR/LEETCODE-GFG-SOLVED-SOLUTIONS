/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    functions.reverse()
    return function(x) 
    {
      let ans = x
      for (i=0;i<functions.length;i++) 
      {
        ans = functions[i](ans)
      }

      return ans;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */