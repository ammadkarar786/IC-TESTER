void setup()
{
  Serial.begin(9600);
  for(int i=0;i<=13;i++){
  pinMode(i,OUTPUT);
  }
}

void loop()
{
  AND();
    }

void AND(){
  {
  int gate_clear=0;
  int gate_fail=0;
  int gate_fail_pin[4];
  int add=0;
  //first gate/ //7408
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate1;
  int p3=3;///output pin is change
   digitalWrite(22,1);////first zip port is connected to 22,23,24(output)
   digitalWrite(23,1);
  if( digitalRead(24)==1){/// first gate clear
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,1);
   if(digitalRead(24)==0){//change
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,0);
   if (digitalRead(24)==0){
    Serial.println("AND GATE 1 CLEAR PIN 1,2,3");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////first gate not clear
    gate_fail++;
    Serial.println("First gate not clear 1,2,3");
   }
   if (gate_fail>0){
    gate1=false;
      
      gate_fail_pin[add]=p3;
    add++;
}
    else{
    gate1=true;
    }
///checking of gate one ended
//Second gate/ //7408
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate2;
  p3=6;
   digitalWrite(25,1);///second gate changeing at 25,26,27(output)
   digitalWrite(26,1);
  if( digitalRead(27)==1){/// 2nd gate clear
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,1);
   if(digitalRead(27)==0){
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,0);
   if (digitalRead(27)==0){
    Serial.println("AND GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("AND GATE 2 not clear PIN 4,5,6");
   }
   if (gate_fail>0){
    gate2=false;
    
    gate_fail_pin[add]=p3;
    add++;
    }
    else{
    gate2=true;
    }
//third gate/ //7408
  //pin number
  p3=11;
    gate_fail=0;
  gate_clear=0;
  bool gate3;
   digitalWrite(28,1);//pin on mage 28,29,30(output)
   digitalWrite(29,1);
  if( digitalRead(30)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,1);
    if(digitalRead(30)==0){
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,0);
   if (digitalRead(30)==0){
    Serial.println("AND GATE 3 CLEAR PIN 13,12,11");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////3rd gate not clear
    gate_fail++;
    Serial.println("3rd gate not clear 13,12,11");
   }
   if (gate_fail>0){
    gate3=false;
    gate_fail_pin[add]=p3;
add++;
    }
    else{
    gate3=true;
    }
///checking of gate 3rd ended
    
//4th gate/ //7408
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate4;
  p3=2;
   digitalWrite(31,1);//pin number 31,32,33
   digitalWrite(32,1);
  if( digitalRead(33)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,1);
   if(digitalRead(33)==0){
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,0);
     if (digitalRead(33)==0){
    Serial.println("AND GATE 4 CLEAR PIN 10,9,8");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
 
    }
    
   else{  ////4th gate not clear
    gate_fail++;
    Serial.println("4th gate not clear 10,9,8");
   }
   if (gate_fail>0){
    gate4=false;
    gate_fail_pin[add]=p3;
    add++;
}
    if (gate_clear>0){
   gate4=true;
    }///checking of gate 4th ended

if (gate1==true && gate2==true && gate3==true &&gate4==true){
  Serial.println("AND PASSES TEST");
}else if(add==4){
  Serial.println("Add gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }

  
  
  }
