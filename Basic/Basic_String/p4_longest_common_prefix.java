package Basic.Basic_String;
import java.util.Arrays;
public class p4_longest_common_prefix {
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length-1;
        Arrays.sort(strs);
        String ans = "";
        String first = strs[0];
        String last = strs[n];
        int min_len = Math.min(first.length(),last.length());
        for(int i=0; i<min_len; i++){
            if(first.charAt(i) == last.charAt(i)) ans += first.charAt(i);
            else break;
        }return ans;
    }
}
