class Solution {
    public int[] resultArray(int[] nums) {

        ArrayList<Integer> list1 = new ArrayList<>();
        ArrayList<Integer> list2 = new ArrayList<>();

        list1.add(nums[0]);
        list2.add(nums[1]);

        int i = 2;

        while (i < nums.length) {

            if (list1.get(list1.size() - 1) >
                list2.get(list2.size() - 1)) {

                list1.add(nums[i]);

            } else {

                list2.add(nums[i]);
            }

            i++;
        }

        int[] arr = new int[nums.length];
        int j = 0;

        for (int k = 0; k < list1.size(); k++) {
            arr[j++] = list1.get(k);
        }

        for (int k = 0; k < list2.size(); k++) {
            arr[j++] = list2.get(k);
        }

        return arr;
    }
}