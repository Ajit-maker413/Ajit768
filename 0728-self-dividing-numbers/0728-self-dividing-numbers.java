class Solution {

    boolean check(int n)
    {
        int temp=n;
        boolean flag=true;
        while(temp>0)
        {
            int rem =temp%10;
            if(rem==0)
            {
                flag =false;
                break;
            }
            else if(  n%rem != 0)
            {
                flag=false;
                break;
            }
            temp=temp/10;

        }
        return flag;
    }

    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer>list=new ArrayList<>();
        for(int i=left;i<=right;i++)
        {
            if(check(i))
            {
                list.add(i);
            }
        }
        return list;
    }
}