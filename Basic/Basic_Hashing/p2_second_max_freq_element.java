package Basic.Basic_Hashing;
import java.util.HashMap;
import java.util.Map;
public class p2_second_max_freq_element {
    public static int func(int[] arr) {
        Map<Integer,Integer> freq = new HashMap<>();
        for(int i=0; i<arr.length; i++){
            freq.put(arr[i],freq.getOrDefault(arr[i],0)+1);
        }
        int maxfreq = 0;
        for(int count : freq.values()){
            maxfreq = Math.max(maxfreq,count);
        }
        int second_maxfreq = 0;
        for(int count : freq.values()){
            if(count < maxfreq){
                second_maxfreq = Math.max(second_maxfreq,count);
            }
        }
        if(second_maxfreq == 0){
            return -1;
        }
        int result = Integer.MAX_VALUE;
        for(Map.Entry<Integer,Integer> entry : freq.entrySet()){
            if(entry.getValue() == second_maxfreq){
                result = Math.min(result,entry.getKey());
            }
        }
        return result == Integer.MAX_VALUE ? -1 : result;
    }
    public static void main(String[] args) {
        int[] arr = {21,32,4,2,5,6,2};
        System.out.println(func(arr));
    }
}
