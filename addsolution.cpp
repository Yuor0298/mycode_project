/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。
*/

#include <stdio.h>

int main() {
	
	int nums[99],count = 0;
	int target;
	printf("请输入整数初始化数组nums，当输入-1时结束。\n");
	for (int i = 0; i <99; i++)
	{
		int temp;
		scanf_s("%d",&temp);
		if (temp == -1)
		{
			break;
		}
		else {
			nums[i] = temp;
			count++;
		}
	}
	printf("请给target赋值:");
	scanf_s("%d", &target);
	for (int i = 0; i < count; i++)
	{
		printf("nums[%d]=%d ",i,nums[i]);
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
				if (nums[i] + nums[j] == target)
				{
					printf("\nnums[%d]+nums[%d]==%d", i, j, target);
				}
		}
	}
	return 0;
}