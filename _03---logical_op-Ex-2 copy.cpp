// 2. **OR (`||`)**  
//    **Question:** Will the light turn on if the motion sensor is triggered or the switch is pressed?  

   #include <iostream>
   using namespace std;

   int main() {
       bool motionSensor = false;
       bool switchPressed = true;
       cout << (motionSensor || switchPressed) << endl; // Output: 1 (true)
       return 0;
   }