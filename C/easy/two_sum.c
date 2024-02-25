#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *result;
    int i;
    int j;

    i = 0;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                result = malloc(2 * sizeof(int));
                if (!result)
                    return (NULL);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return (result);
            }
            else
                j++;
        }
        i++;
    }
    *returnSize = 0;
    return (NULL);
}
