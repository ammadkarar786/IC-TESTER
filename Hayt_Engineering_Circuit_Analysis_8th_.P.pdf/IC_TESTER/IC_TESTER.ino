void setup()
{
  Serial.begin(9600);
  for(int i=0;i<=13;i++){
  pinMode(i,OUTPUT);
  }
}

void loop()
{
//  AND();
//  OR();
//  NOR();
//  XOR();
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
   digitalWrite(13,1);
   digitalWrite(12,1);
  if( digitalRead(11)==1){/// first gate clear
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,1);
   if(digitalRead(11)==0){
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,0);
   if (digitalRead(11)==0){
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
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==1){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,1);
   if(digitalRead(8)==0){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==0){
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
   digitalWrite(7,1);
   digitalWrite(6,1);
  if( digitalRead(5)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,1);
    if(digitalRead(5)==0){
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,0);
   if (digitalRead(5)==0){
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
   digitalWrite(4,1);
   digitalWrite(3,1);
  if( digitalRead(2)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,1);
   if(digitalRead(2)==0){
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,0);
     if (digitalRead(2)==0){
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
   digitalWrite(13,1);
   digitalWrite(12,1);
  if( digitalRead(11)==1){/// first gate clear
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,1);
   if(digitalRead(11)==1){
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,0);
   if (digitalRead(11)==0){
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
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==1){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,1);
   if(digitalRead(8)==1){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==0){
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
   digitalWrite(7,1);
   digitalWrite(6,1);
  if( digitalRead(5)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,1);
    if(digitalRead(5)==1){
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,0);
   if (digitalRead(5)==0){
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
   digitalWrite(4,1);
   digitalWrite(3,1);
  if( digitalRead(2)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,1);
   if(digitalRead(2)==1){
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,0);
     if (digitalRead(2)==0){
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
    }}
    void NOR()
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
  int p3=3;
   digitalWrite(11,1);
   digitalWrite(12,1);
  if( digitalRead(13)==0){/// first gate clear
    gate_clear++;
    digitalWrite(11,0);
   digitalWrite(12,1);
   if(digitalRead(13)==0){
    gate_clear++;
    digitalWrite(11,0);
   digitalWrite(12,0);
   if (digitalRead(13)==1){
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
  p3=6;
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,1);
   if(digitalRead(8)==0){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==0){
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
   digitalWrite(5,1);
   digitalWrite(6,1);
  if( digitalRead(7)==1){/// 3rd gate clear
    gate_clear++;
    digitalWrite(5,0);
   digitalWrite(6,1);
    if(digitalRead(7)==0){
    gate_clear++;
    digitalWrite(5,0);
   digitalWrite(6,0);
   if (digitalRead(7)==0){
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
  p3=8;
   digitalWrite(2,1);
   digitalWrite(3,1);
  if( digitalRead(4)==1){/// 4th gate clear
    gate_clear++;
    digitalWrite(2,0);
   digitalWrite(3,1);
   if(digitalRead(4)==0){
    gate_clear++;
    digitalWrite(2,0);
   digitalWrite(3,0);
     if (digitalRead(4)==0){
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
    }
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
   digitalWrite(13,1);
   digitalWrite(12,1);
  if( digitalRead(11)==0){/// first gate clear
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,1);
   if(digitalRead(11)==1){
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,0);
   if (digitalRead(11)==1){
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
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,1);
   digitalWrite(9,1);
   if(digitalRead(8)==1){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==1){
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
   digitalWrite(7,1);
   digitalWrite(6,1);
  if( digitalRead(5)==0){/// 3rd gate clear
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,1);
    if(digitalRead(5)==1){
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,0);
   if (digitalRead(5)==1){
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
   digitalWrite(4,1);
   digitalWrite(3,1);
  if( digitalRead(2)==0){/// 4th gate clear
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,1);
   if(digitalRead(2)==1){
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,0);
     if (digitalRead(2)==1){
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
   digitalWrite(13,1);
   digitalWrite(12,1);
  if( digitalRead(11)==0){/// first gate clear
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,1);
   if(digitalRead(11)==1){
    gate_clear++;
    digitalWrite(13,0);
   digitalWrite(12,0);
   if (digitalRead(11)==0){
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
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==0){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,1);
   if(digitalRead(8)==1){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==0){
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
   digitalWrite(7,1);
   digitalWrite(6,1);
  if( digitalRead(5)==0){/// 3rd gate clear
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,1);
    if(digitalRead(5)==1){
    gate_clear++;
    digitalWrite(7,0);
   digitalWrite(6,0);
   if (digitalRead(5)==0){
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
   digitalWrite(4,1);
   digitalWrite(3,1);
  if( digitalRead(2)==0){/// 4th gate clear
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,1);
   if(digitalRead(2)==1){
    gate_clear++;
    digitalWrite(4,0);
   digitalWrite(3,0);
     if (digitalRead(2)==0){
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
  Serial.println("Add gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }}
