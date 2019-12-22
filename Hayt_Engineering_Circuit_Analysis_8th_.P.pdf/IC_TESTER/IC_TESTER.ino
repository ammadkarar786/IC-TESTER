void setup()
{
  Serial.begin(9600);
  for(int i=22;i<=41;i++){
  pinMode(i,OUTPUT);
  }
}

void loop()
{
  ////TTHE VCC AND THE GNG ARE GIVEN AT PIN NO 34 (VCC)AND PIN 35 IS GND
  AND();
  OR();
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
  int p3=3;
   digitalWrite(22,1);
   digitalWrite(23,1);
  if( digitalRead(24)==1){/// first gate clear
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,1);
   if(digitalRead(24)==0){
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
   digitalWrite(25,1);
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
   digitalWrite(28,1);
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
  p3=8;
   digitalWrite(31,1);
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

 void OR(){
  {
  int gate_clear=0;
  int gate_fail=0;
  int gate_fail_pin[4];
  int add=0;
  //first gate/ //7432
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate1;
  int p3=3;
   digitalWrite(22,1);
   digitalWrite(23,1);
  if( digitalRead(24)==1){/// first gate clear
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,1);
   if(digitalRead(24)==1){
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,0);
   if (digitalRead(24)==0){
    Serial.println("OR GATE 1 CLEAR PIN 1,2,3");
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
//Second gate/ //7432
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate2;
  p3=6;
   digitalWrite(25,1);
   digitalWrite(26,1);
  if( digitalRead(27)==1){/// 2nd gate clear
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,1);
   if(digitalRead(27)==1){
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,0);
   if (digitalRead(27)==0){
    Serial.println("OR GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("OR GATE 2 not clear PIN 4,5,6");
   }
   if (gate_fail>0){
    gate2=false;
    
    gate_fail_pin[add]=p3;
    add++;
    }
    else{
    gate2=true;
    }
//third gate/ //7432
  //pin number
  p3=11;
    gate_fail=0;
  gate_clear=0;
  bool gate3;
   digitalWrite(28,1);
   digitalWrite(29,1);
  if( digitalRead(30)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,1);
    if(digitalRead(30)==1){
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,0);
   if (digitalRead(30)==0){
    Serial.println("OR GATE 3 CLEAR PIN 13,12,11");
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
    
//4th gate/ //7432
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate4;
  p3=8;
   digitalWrite(31,1);
   digitalWrite(32,1);
  if( digitalRead(33)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,1);
   if(digitalRead(33)==1){
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,0);
     if (digitalRead(33)==0){
    Serial.println("OR GATE 4 CLEAR PIN 10,9,8");
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
  Serial.println("OR PASSES TEST");
}else if(add==4){
  Serial.println("OR gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }

  
  
  }
  void NOR(){
  {
  int gate_clear=0;
  int gate_fail=0;
  int gate_fail_pin[4];
  int add=0;
  //first gate/ //7402
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate1;
  int p3=1;
   digitalWrite(23,1);
   digitalWrite(24,1);
  if( digitalRead(22)==0){/// first gate clear
    gate_clear++;
    digitalWrite(23,0);
   digitalWrite(24,1);
   if(digitalRead(22)==0){
    gate_clear++;
    digitalWrite(23,0);
   digitalWrite(24,0);
   if (digitalRead(22)==1){
    Serial.println("NOR GATE 1 CLEAR PIN 1,2,3");
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
//Second gate/ //7402
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate2;
  p3=4;
   digitalWrite(26,1);
   digitalWrite(27,1);
  if( digitalRead(25)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(26,0);
   digitalWrite(27,1);
   if(digitalRead(25)==0){
    gate_clear++;
    digitalWrite(26,0);
   digitalWrite(27,0);
   if (digitalRead(25)==0){
    Serial.println("NOR GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("NOR GATE 2 not clear PIN 4,5,6");
   }
   if (gate_fail>0){
    gate2=false;
    
    gate_fail_pin[add]=p3;
    add++;
    }
    else{
    gate2=true;
    }
//third gate/ //7402
  //pin number
  p3=11;
    gate_fail=0;
  gate_clear=0;
  bool gate3;
   digitalWrite(29,1);
   digitalWrite(30,1);
  if( digitalRead(28)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(29,0);
   digitalWrite(30,1);
    if(digitalRead(28)==0){
    gate_clear++;
    digitalWrite(29,0);
   digitalWrite(30,0);
   if (digitalRead(28)==0){
    Serial.println("NOR GATE 3 CLEAR PIN 13,12,11");
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
    
//4th gate/ //7402
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate4;
  p3=10;
   digitalWrite(32,1);
   digitalWrite(33,1);
  if( digitalRead(31)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(32,0);
   digitalWrite(33,1);
   if(digitalRead(31)==0){
    gate_clear++;
    digitalWrite(32,0);
   digitalWrite(33,0);
     if (digitalRead(31)==0){
    Serial.println("NOR GATE 4 CLEAR PIN 10,9,8");
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
  Serial.println("NOR PASSES TEST");
}else if(add==4){
  Serial.println("NOR gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }}

void NAND(){
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
  int p3=3;
   digitalWrite(22,1);
   digitalWrite(23,1);
  if( digitalRead(24)==0){/// first gate clear
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,1);
   if(digitalRead(24)==1){
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,0);
   if (digitalRead(24)==1){
    Serial.println("NAND GATE 1 CLEAR PIN 1,2,3");
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
   digitalWrite(25,1);
   digitalWrite(26,1);
  if( digitalRead(27)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(25,1);
   digitalWrite(26,1);
   if(digitalRead(27)==1){
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,0);
   if (digitalRead(27)==1){
    Serial.println("NAND GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("NAND GATE 2 not clear PIN 4,5,6");
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
   digitalWrite(28,1);
   digitalWrite(29,1);
  if( digitalRead(30)==0){/// 3rd gate clear
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,1);
    if(digitalRead(30)==1){
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,0);
   if (digitalRead(30)==1){
    Serial.println("NAND GATE 3 CLEAR PIN 13,12,11");
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
  p3=8;
   digitalWrite(31,1);
   digitalWrite(32,1);
  if( digitalRead(33)==0){/// 4th gate clear
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,1);
   if(digitalRead(33)==1){
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,0);
     if (digitalRead(33)==1){
    Serial.println("NAND GATE 4 CLEAR PIN 10,9,8");
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
  Serial.println("NAND PASSES TEST");
}else if(add==4){
  Serial.println("NAND gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }}

void XOR(){
  {
  int gate_clear=0;
  int gate_fail=0;
  int gate_fail_pin[4];
  int add=0;
  //first gate/ //7486
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate1;
  int p3=3;
   digitalWrite(22,1);
   digitalWrite(23,1);
  if( digitalRead(24)==0){/// first gate clear
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,1);
   if(digitalRead(24)==1){
    gate_clear++;
    digitalWrite(22,0);
   digitalWrite(23,0);
   if (digitalRead(24)==0){
    Serial.println("XOR GATE 1 CLEAR PIN 1,2,3");
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
//Second gate/ //7486
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate2;
  p3=6;
   digitalWrite(25,1);
   digitalWrite(26,1);
  if( digitalRead(27)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,1);
   if(digitalRead(27)==1){
    gate_clear++;
    digitalWrite(25,0);
   digitalWrite(26,0);
   if (digitalRead(27)==0){
    Serial.println("XOR GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("XOR GATE 2 not clear PIN 4,5,6");
   }
   if (gate_fail>0){
    gate2=false;
    
    gate_fail_pin[add]=p3;
    add++;
    }
    else{
    gate2=true;
    }
//third gate/ //7486
  //pin number
  p3=11;
    gate_fail=0;
  gate_clear=0;
  bool gate3;
   digitalWrite(28,1);
   digitalWrite(29,1);
  if( digitalRead(30)==0){/// 3rd gate clear
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,1);
    if(digitalRead(30)==1){
    gate_clear++;
    digitalWrite(28,0);
   digitalWrite(29,0);
   if (digitalRead(30)==0){
    Serial.println("XOR GATE 3 CLEAR PIN 13,12,11");
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
    
//4th gate/ //7486
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate4;
  p3=8;
   digitalWrite(31,1);
   digitalWrite(32,1);
  if( digitalRead(33)==0){/// 4th gate clear
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,1);
   if(digitalRead(33)==1){
    gate_clear++;
    digitalWrite(31,0);
   digitalWrite(32,0);
     if (digitalRead(33)==0){
    Serial.println("XOR GATE 4 CLEAR PIN 10,9,8");
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
  Serial.println("XOR PASSES TEST");
}else if(add==4){
  Serial.println("XOR gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }

  
  
  }    
    
    
