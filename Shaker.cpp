		int left = 0, right = n - 1;
		while (left < right)
		{
			for (int i = left; i < right; i++)
			{
				if (mas[i] > mas[i + 1])
				{
					swap(mas[i], mas[i + 1]);
				}
			}
			right--;
			for (int i = right; i > left; i--)
			{
				if (mas[i - 1] > mas[i])
				{
					swap(mas[i - 1], mas[i]);
				}
			}
			left++;
		}
		
