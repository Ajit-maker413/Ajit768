class Solution {
    public int[] maxDepthAfterSplit(String seq) {
        
        int []arr=new int [seq.length()];
        int dept=0;
        for(int i=0;i<seq.length();i++)
        {
            if(seq.charAt(i)=='(')
            {
                dept++;
                arr[i]=dept%2;
            }
            else
            {
                arr[i]=dept%2;
                dept--;
            }
        }
        return arr;
    }
}