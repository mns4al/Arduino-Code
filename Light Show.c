int ledPins[] = {11,10,4,5,6,7,8,9};


void setup()
{
  int index;

  for(index = 0; index <= 7; index++)
  {
    pinMode(ledPins[index],OUTPUT);
  }
}


void loop()
{

  oneAfterAnotherNoLoop();  

}



void oneAfterAnotherNoLoop()
{
  int delayTime = 1000; 
  //first time
  digitalWrite(ledPins[0], HIGH);  
  delay(2000);                
  digitalWrite(ledPins[7], HIGH);  
  delay(delayTime);               
  digitalWrite(ledPins[1], HIGH);  
  delay(delayTime);                
  digitalWrite(ledPins[6], HIGH); 
  delay(delayTime);                
  digitalWrite(ledPins[2], HIGH); 
  delay(delayTime);                
  digitalWrite(ledPins[5], HIGH);  
  delay(delayTime);      
   digitalWrite(ledPins[3], HIGH);  
  delay(delayTime);
   digitalWrite(ledPins[4], HIGH);  
  delay(delayTime);   
  //second time
  digitalWrite(ledPins[0], LOW);  
  delay(delayTime);                
  digitalWrite(ledPins[7], LOW);  
  delay(delayTime);               
  digitalWrite(ledPins[1], LOW);  
  delay(delayTime);                
  digitalWrite(ledPins[6], LOW); 
  delay(delayTime);                
  digitalWrite(ledPins[2], LOW); 
  delay(delayTime);                
  digitalWrite(ledPins[5], LOW);  
  delay(delayTime);      
   digitalWrite(ledPins[3], LOW);  
  delay(delayTime);
   digitalWrite(ledPins[4], LOW);  
  delay(900); 
  //new music
     //with the lights do alternating short long , short long for that part                
  digitalWrite(ledPins[0], HIGH);  
  delay(2300);
  digitalWrite(ledPins[1], HIGH);  
  delay(502); 
  digitalWrite(ledPins[2], HIGH);  
  delay(300);   
  digitalWrite(ledPins[3], HIGH);  
  delay(300);
  digitalWrite(ledPins[4], HIGH);  
  delay(502);
  digitalWrite(ledPins[5], HIGH);  
  delay(300);   
  digitalWrite(ledPins[6], HIGH);  
  delay(310); 
  digitalWrite(ledPins[7], HIGH);  
  delay(1000);   

  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW);
  delay(1250); 

  digitalWrite(ledPins[0], HIGH);  
  delay(400); 
  digitalWrite(ledPins[2], HIGH);  
  delay(250);   
  digitalWrite(ledPins[4], HIGH);  
  delay(250);

  digitalWrite(ledPins[7], HIGH);  
  delay(400); 
  digitalWrite(ledPins[5], HIGH);  
  delay(400);   
  digitalWrite(ledPins[3], HIGH);  
  delay(450);

  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW);
  delay(1250); 

  digitalWrite(ledPins[0], HIGH);  
  delay(950);                
  digitalWrite(ledPins[1], HIGH);  
  delay(452); 
  digitalWrite(ledPins[2], HIGH);  
  delay(250);   
  digitalWrite(ledPins[3], HIGH);  
  delay(250);
  digitalWrite(ledPins[4], HIGH);  
  delay(452);
  digitalWrite(ledPins[5], HIGH);  
  delay(250);   
  digitalWrite(ledPins[6], HIGH);  
  delay(250); 
  digitalWrite(ledPins[7], HIGH);  
  delay(1000);   

  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW);
  delay(850); 

  digitalWrite(ledPins[0], HIGH);    
  digitalWrite(ledPins[7], HIGH);  
  delay(400);
  digitalWrite(ledPins[3], HIGH);    
  digitalWrite(ledPins[4], HIGH);  
  delay(250);   
  digitalWrite(ledPins[2], HIGH);    
  digitalWrite(ledPins[5], HIGH);  
  delay(250);   
  digitalWrite(ledPins[1], HIGH);     
  digitalWrite(ledPins[6], HIGH);  
  delay(400); 
  digitalWrite(ledPins[0], LOW);    
  digitalWrite(ledPins[7], LOW);  
  delay(400);  
  digitalWrite(ledPins[0], HIGH);    
  digitalWrite(ledPins[7], HIGH);  
  delay(480); 

  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW);

  int x = 0;
  
  while(x <= 11){
    
  digitalWrite(ledPins[0], HIGH);                  
  digitalWrite(ledPins[1], HIGH);  
  digitalWrite(ledPins[2], HIGH);    
  digitalWrite(ledPins[3], HIGH);  
  delay(100);

  digitalWrite(ledPins[0], LOW);               
  digitalWrite(ledPins[1], LOW);  
  digitalWrite(ledPins[2], LOW);     
  digitalWrite(ledPins[3], LOW);  
  delay(100);
  
  digitalWrite(ledPins[4], HIGH);  
  digitalWrite(ledPins[5], HIGH);     
  digitalWrite(ledPins[6], HIGH);   
  digitalWrite(ledPins[7], HIGH);  
  delay(100); 

  digitalWrite(ledPins[4], LOW);  
  digitalWrite(ledPins[5], LOW);  
  digitalWrite(ledPins[6], LOW);  
  digitalWrite(ledPins[7], LOW);  
  delay(100);

   x = x +1;
  }
  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW); 

//second loop
int y = 0;
while(y <= 3){
  digitalWrite(ledPins[0], HIGH);                  
  delay(100);
  digitalWrite(ledPins[0], LOW); 
  delay(100); 
  digitalWrite(ledPins[2], HIGH);                  
  delay(100);
  digitalWrite(ledPins[2], LOW); 
  delay(100); 
  
  digitalWrite(ledPins[1], HIGH);                  
  delay(100);
  digitalWrite(ledPins[1], LOW); 
  delay(100); 
  digitalWrite(ledPins[3], HIGH);                  
  delay(100);
  digitalWrite(ledPins[3], LOW); 
  delay(100); 
  
  digitalWrite(ledPins[2], HIGH);                  
  delay(100);
  digitalWrite(ledPins[2], LOW); 
  delay(100); 
  digitalWrite(ledPins[4], HIGH);                  
  delay(100);
  digitalWrite(ledPins[4], LOW); 
  delay(100); 
  
  digitalWrite(ledPins[3], HIGH);                  
  delay(100);
  digitalWrite(ledPins[3], LOW); 
  delay(100); 
  digitalWrite(ledPins[5], HIGH);                  
  delay(100);
  digitalWrite(ledPins[5], LOW); 
  delay(100); 
  
  digitalWrite(ledPins[4], HIGH);                  
  delay(100);
  digitalWrite(ledPins[4], LOW); 
  delay(100); 
  digitalWrite(ledPins[6], HIGH);                  
  delay(100);
  digitalWrite(ledPins[6], LOW); 
  delay(100); 

  digitalWrite(ledPins[5], HIGH);                  
  delay(100);
  digitalWrite(ledPins[5], LOW); 
  delay(100); 
  digitalWrite(ledPins[7], HIGH);                  
  delay(100);
  digitalWrite(ledPins[7], LOW); 
  delay(100); 

  y = y +1;
 
}
  digitalWrite(ledPins[0], LOW); 
  digitalWrite(ledPins[1], LOW); 
  digitalWrite(ledPins[2], LOW); 
  digitalWrite(ledPins[3], LOW); 
  digitalWrite(ledPins[4], LOW); 
  digitalWrite(ledPins[5], LOW); 
  digitalWrite(ledPins[6], LOW); 
  digitalWrite(ledPins[7], LOW); 
  delay(1000);
  digitalWrite(ledPins[0], HIGH); 
  digitalWrite(ledPins[1],  HIGH); 
  digitalWrite(ledPins[2],  HIGH); 
  digitalWrite(ledPins[3],  HIGH); 
  digitalWrite(ledPins[4],  HIGH); 
  digitalWrite(ledPins[5],  HIGH); 
  digitalWrite(ledPins[6], HIGH); 
  digitalWrite(ledPins[7],  HIGH); 
  delay(500);
 

 
  

                               
  }



