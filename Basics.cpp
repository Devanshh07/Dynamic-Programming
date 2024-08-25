#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* DP - > DP stand for Dynamic Programming 
   1. "Dynamic Programming is a method used in mathematics and computer science 
      to solve complex problems by breaking them down into simpler subproblems."
    
   2. "Dynamic Programming (DP) is defined as a technique that 
       solves some particular type of problems in Polynomial Time"

   
   @Techniques to solve Dynamic Programming Problems
     
      1.TOP -> Down [Memoization] 
        "Break down the given problem in order to begin solving it.
         If you see that the problem has already been solved, 
         return the saved answer. 
        If it hasn’t been solved, solve it and save it. 
        This is usually easy to think of and very intuitive, 
        This is referred to as Memoization."

     2. Bottom-> UP [Tabulation] : -
       "Analyze the problem and see in what order the subproblems are solved, 
       and work your way up from the trivial subproblem to the given problem.
       This process ensures that the subproblems are solved before the main problem. 
       This is referred to as "


*/


//Question -> Find fibonacci number 
// Using memoization Technique;
class fib_memoization_Dp {
    public:
     
     //Time Complexity -> O(n);
     //Space Complexity -> O(n) + O(n);
    int f(int n,vector<int> &dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1) return dp[n];
        return dp[n] = f(n-1,dp) + f(n-2,dp);
    }

    void call(int n){
        vector<int> dp(n+1,-1);
        cout<<f(n,dp)<<" ";
        
    }
    


};

//tabulation method :

class fib_tabulation_DP{
    public:
   //time O(n-2);
   //space O(1) constant space;
    int tabulation(int n){

        int prev = 1;
        int prev2 = 0;
        for(int i=2;i<=n;i++){

            int currI = prev + prev2;
            prev2= prev;
            prev = currI;
        }
        cout<<prev;
        
    }


};

 
int main(){

fib_memoization_Dp a;
a.call(6);
fib_tabulation_DP b;
b.tabulation(6);






return 0;
};