﻿#include <stdio.h>

void main(void)
{
	long lbound, ubound, lbOrg, ubOrg, temp;
	long i, j, length, max_length;

	while(scanf("%ld %ld", &lbound, &ubound) == 2)
	{
		lbOrg = lbound;
		ubOrg = rbound;

		//입력 값 크기 조정
		if(lbound > ubound)
		{
			temp = lbound;
			lbound = ubound;
			ubound = temp;
		}

		//홀수 n에 대하여 3n+1은 언제나 짝수
		max_length = 0;
		for(i = lbound; i <= ubound; i++)
		{
			j = i;
			length = 1;
			
			while(j != 1)
			{
				if(j & 1)
				{
					j = j * 3 + 1;
					length++;
				}
				
				while(!(j & 1))
				{
					j >>= 1;
					length++;
				}
			}
			
			if(length > max_length)
				max_length = length;
		}
		
		printf("%ld %ld %ld\n", lbOrg, ubOrg, max_length);
	}
}
