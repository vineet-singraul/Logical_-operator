// 4. **Combined (`&&` and `||`)**  
//    **Question:** Is the user logged in and either an editor or an admin?  

   #include <iostream>
   using namespace std;

   int main() {
       bool isLoggedIn = true;
       bool isEditor = false;
       bool isAdmin = false;
       cout << (isLoggedIn && (isEditor || isAdmin)) << endl; // Output: 0 (false)
       return 0;
   }