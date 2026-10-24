package Basic.Basic_Hashing;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
public class p3_sum_of_the_highest_and_lowest_freq {
    public int sumHighestAndLowestFrequency(int[] nums) {
        Map<Integer,Integer> freq = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            freq.put(nums[i],freq.getOrDefault(nums[i],0)+1);
        }
        List<Map.Entry<Integer,Integer>> list = new ArrayList<>(freq.entrySet());
        list.sort((a,b)-> a.getValue().compareTo(b.getValue()));
        return list.get(0).getValue() + list.get(list.size()-1).getValue();
    }
    public static void main(String[] args) {
        p3_sum_of_the_highest_and_lowest_freq obj = new p3_sum_of_the_highest_and_lowest_freq();
        int[] arr = {21,32,4,2,5,6,2};
        System.out.println(obj.sumHighestAndLowestFrequency(arr));
    }
}
