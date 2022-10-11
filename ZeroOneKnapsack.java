import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int[] value=new int[n];
        int[] weight=new int[n];
        for(int i=0;i<n;i++) value[i]=scn.nextInt();
        for(int i=0;i<n;i++) weight[i]=scn.nextInt();

        int capacity=scn.nextInt();

        System.out.println(ZeroOneKnapsack(value,weight,capacity));

    }

    public static int ZeroOneKnapsack(int[] value,int[] weight,int capacity){
        int n=value.length;
        int[][] dp=new int[n+1][capacity+1];

        for(int r=1;r<=n;r++){
            for(int cap=1;cap<=capacity;cap++){
                int v=value[r-1];
                int wt=weight[r-1];
                if(cap>=wt){////MAX OF INCLUDE AND EXCLUDE
                    int inc=v+dp[r-1][cap-wt];
                    int exc=dp[r-1][cap];
                    dp[r][cap]=Math.max(inc,exc);


                }else{//////EXCLUDE
                    dp[r][cap]=dp[r-1][cap];

                }

                
            }
        }
        return dp[n][capacity];
    }
}
