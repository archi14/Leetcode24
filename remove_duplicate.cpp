int i=0,n=nums.size(),j=n-1;
        while(i<=j)
        {
            if(nums[i]==val)
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j--;
            }else
            {
                i++;
            }

        }
        return i;
}

