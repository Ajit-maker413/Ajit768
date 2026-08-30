class Solution {
    int BinarySerach(int m ,int [] numbers ,int i)
    {
        int start=0;
        int end=numbers.length-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            mid=(start+end)/2;
            if( mid != i && numbers[mid]== m)
            {
                return mid;
            }
            else if(numbers[mid] >m)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return -1;

    }
    public int[] twoSum(int[] numbers, int target) {
        int i=0;
        int [] arr=new int[2];
        while(i<numbers.length)
        {
            int m=target-numbers[i];
            int ind=BinarySerach(m ,numbers ,i);
             if( ind != -1 )
             {
               arr[0]=i+1;
               arr[1]=ind+1;
               break;
             }
             i++;
        }
        return arr;
    }
}