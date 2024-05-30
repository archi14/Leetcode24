void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=n+m-1;
        
        while(j>=0 && i>=0)
        {
            if(nums2[j]>=nums1[i])
            {
                nums1[k--] = nums2[j--];
            }else
            {
                nums1[k--] = nums1[i--];
            }
        }
        cout<<j<<" ";
        while(j>=0)
        {
            cout<<"here";
            nums1[j] = nums2[j];
            j--;
        }
    }
