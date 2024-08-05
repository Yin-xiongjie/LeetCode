/*
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
你可以假设除了整数 0 之外，这个整数不会以零开头
*/

/*
思路：从后往前判断每个元素+1后能否被整除，不能就说明不是9直接+1即可;若为9，则把当前位置0，继续上述操作;若元素全为9就把所有元素置0后第一位置1.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int vec_size = digits.size();
        for (int i =vec_size-1;i>=0;i--)
        {
            digits[i] = (digits[i]+1)%10;
            if(digits[i] != 0)
            {
                return digits;
            }
        }
        vector<int> digits_1(vec_size+1,0);
        digits_1[0] = 1;
        return digits_1;
    }
};
