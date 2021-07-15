//
// Created by YEHIA on 7/14/2021.
//
/*//test program
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/
/*
Q8
0 points possible (ungraded)
Consider the following C++ program


#include <iostream>
using namespace std;
int main ( ) {
    int n;
    cout << "Give n: ";
    cin >> n;
    if (n < 0) {
        switch (n) {
            case 0:   cout <<"so ";
            case -1:  cout << "how is your ";
            case -10: cout << "parrot's ";
                break;
            default:  cout << "cat's ";
        }
        cout << "health?";
    }
    else {
        switch (n) {
            case 0: cout <<"so ";
            case 1: cout << "how is your ";
            case 10: cout << "cat's ";
            default: cout << "health?";
        }
    }
    cout << endl;
    return 0;
}
//Which of the following strings CANNOT be printed by the above program for any value of the input 'n'?
//solution: so how is your health?
Explanation

Option A is printed if the number n is -1

Option B is printed if the number 'n' is 0. Note that in this case, the condition in the 'if' statement is not satisfied (since 0 is not < 0), so the program enters the 'else' block.

Option C cannot be printed because in both the 'if' and 'else' blocks, there is no 'break' statement after printing "how is your ". Therefore, after printing "how is your " and before printing "health?" either "parrot's " or "cat's " must be printed (fall-through in 'switch-case' statement without 'break'). Consequently, the string "so how is your health?" cannot be printed.

Option D can be printed if the number 'n' is -10. This is easy to see.

Since C is the correct answer E cannot be the correct answer
 */
//Q10
#include<iostream>
using namespace std;
int main(){
   int A[]={0,1,2,3,4,5,6,7};
   int n=8;
   int i,j,k,l,temp;
   int step=2;
   for(i=0;i<n-step;i++){
      for(j=i;j<i+step;j++){
         temp=A[j];
         A[j]=A[j+1];
         A[j+1]=temp;
      }
      step=(step*2)-1;
   }

   for(i=0;i<n;i++)
      cout<<A[i]<<" ";
   return 0;
}