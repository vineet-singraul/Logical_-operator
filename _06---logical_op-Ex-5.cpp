// 6. **Nesting (`!`, `||`, `&&`)**  
//    **Question:** Is the user not banned or has an active subscription?  
   #include <iostream>
   using namespace std;

   int main() {
       bool isBanned = true;
       bool isSubscriptionActive = false;
       cout << (!isBanned || isSubscriptionActive) << endl; // Output: 0 (false)
       return 0;
   }