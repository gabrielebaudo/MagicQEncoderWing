 #define N 6
 
 char carattere[12] = {'a','b','c','d','e','f','g','h','i','l','m','n'};
 const int clk[N] = {2, 4, 6, 8, 10, 12};
 const int data[N] = {3, 5, 7, 9, 11, 13};
 
 
 int State[N];
 int LastState[N];
 int i;
 
 void setup() { 
  //Define the pins as inputs
  for(i=0; i<N; i++){
   pinMode (clk[i],INPUT);
   pinMode (data[i],INPUT);
  }
   
   Serial.begin (9600);
   
   // Reads the initial state of the clock pin
   for(i=0; i<N; i++){
    LastState[i] = digitalRead(clk[i]);
  }
     
} 

 void loop() { 
  // Reads the "current" state of the clock pin
  for(int i=0; i<N; i++){
    State[i] = digitalRead(clk[i]);
    if (State[i] != LastState[i]){
      if (digitalRead(data[i]) != State[i]) { 
       Serial.write(carattere[i*2+1]);
     } else {
       Serial.write(carattere[i*2]);
     }
     LastState[i] = State[i];
    }
  } 
}
