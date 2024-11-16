// 1. **AND (`&&`)**  
//    **Question:** Is the user logged in and is their subscription active?  

   #include <iostream>
   using namespace std;

   int main() {
       bool isLoggedIn = true;
       bool isSubscriptionActive = false;
       cout << (isLoggedIn && isSubscriptionActive) << endl; // Output: 0 (false)
       return 0;
   }
