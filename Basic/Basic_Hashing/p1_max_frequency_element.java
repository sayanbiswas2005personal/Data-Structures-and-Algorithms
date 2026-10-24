package Basic.Basic_Hashing;
import java.util.HashMap;
import java.util.Map;
public class p1_max_frequency_element {
    public static int func(int[] arr){
        Map<Integer,Integer> freq = new HashMap<>();
        for(int i=0; i<arr.length; i++){
            freq.put(arr[i],freq.getOrDefault(arr[i],0)+1);
        }
        int maxfreq = 0;
        int result = arr[0];
        for(int i=0; i<arr.length; i++){
            int freq_val = freq.get(arr[i]);
            if(freq_val > maxfreq || (freq_val == maxfreq && arr[i] > result)){
                maxfreq = freq_val;
                result = arr[i];
            }
        }
        return result;
    }
    public static void main(String[] args) {
        int[] arr = {21,32,4,2,5,6,2};
        System.out.println(func(arr));
    }
}
