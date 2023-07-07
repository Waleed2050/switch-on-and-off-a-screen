int led=5;
int pushbutton =9;
int buttonstate = 0;
int laststate = 0 ;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pushbutton, INPUT);
}

void loop()
{
  
      
  if (digitalRead(pushbutton) == HIGH) 
  {
    laststate++; 
    delay(250);  }
    if (laststate == 1 )
       {digitalWrite(led,1);}
       
   else if(laststate ==2){digitalWrite(led,0);}
   if (laststate==2){laststate=0;} 
                                            
       
  
   
  }
    
    