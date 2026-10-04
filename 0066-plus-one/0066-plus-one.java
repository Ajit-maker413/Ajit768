class Solution {
    public int[] plusOne(int[] digits) {
        int [] arr=new int[digits.length+1];
        arr[0]=-1; 
        int crr=1;
        for(int i=digits.length-1;i>=0;i--)
        {
           int temp=digits[i]+crr;
           int n=temp%10;
           crr=temp/10;
           arr[i]=n;
           digits[i]=n;
         
        }
        if(crr>0)
        {
            arr[0]=crr;
            return arr;
        }
        return digits;
        
    }
}