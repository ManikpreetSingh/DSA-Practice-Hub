import java.util.Arrays;

public class LongestCommonprefix {
    
    static String LCP(String str[]){
        StringBuffer result = new StringBuffer();
        // Sort 
        Arrays.sort(str);

        char []first = str[0].toCharArray();
        char []last = str[str.length-1].toCharArray();

        // Comparing
        for (int i = 0; i < first.length; i++) {
            if(first[i]!=last[i])
            break;
            
            result.append(first[i]);
        }
        return result.toString();




    }
    public static void main(String[] args) {
        String str[] = {"flower","flow","flowless"};
        System.out.println(LCP(str));
    }
}
