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
    void XNOR(){
  {
  int gate_clear=0;
  int gate_fail=0;
  int gate_fail_pin[4];
  int add=0;
  //first gate/ //74266
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
   if (digitalRead(11)==1){
    Serial.println("XNOR GATE 1 CLEAR PIN 1,2,3");
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
//Second gate/ //74266
  //pin number
  gate_fail=0;
  gate_clear=0;
  bool gate2;
  p3=6;
   digitalWrite(10,1);
   digitalWrite(9,1);
  if( digitalRead(8)==1){/// 2nd gate clear
    gate_clear++;
    digitalWrite(10,1);
   digitalWrite(9,1);
   if(digitalRead(8)==0){
    gate_clear++;
    digitalWrite(10,0);
   digitalWrite(9,0);
   if (digitalRead(8)==1){
    Serial.println("XNOR GATE 2 CLEAR PIN 4,5,6");
    }else{
      gate_fail++;
      }
   }else{
    gate_fail++;
      }
   
    }
    
   else{  ////2nd gate not clear
    gate_fail++;
    Serial.println("XNOR GATE 2 not clear PIN 4,5,6");
   }
   if (gate_fail>0){
    gate2=false;
    
    gate_fail_pin[add]=p3;
    add++;
    }
    else{
    gate2=true;
    }
//third gate/ //74266
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
   if (digitalRead(5)==1){
    Serial.println("XNOR GATE 3 CLEAR PIN 13,12,11");
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
    
//4th gate/ //74266
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
     if (digitalRead(2)==1){
    Serial.println("XNOR GATE 4 CLEAR PIN 10,9,8");
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
  Serial.println("XNOR PASSES TEST");
}else if(add==4){
  Serial.println("XNOR gate test Fail");
}
  else{
        Serial.println("list of fault gate pin");
         
         for (int i=0;i<add;i++){
          Serial.println(gate_fail_pin[i]);
          }
    }
    }}
    
void AND_3(){
  // 7411(3-AND)
  int gate_clear=0;
  int gate_fail=0;
  ///i,f j shold be declare gate 1 
  int i=0;//1
  int f=0;//2
  int j=0;//13
  int z=0;
  int sz=0;
  Serial.println("start");
  for (int i=0;i<=1;i++){
    
    for(int f=0;f<=1;f++){
     for(int j=0;j<=1;j++){
      Serial.print("important");
    digitalWrite(13,i);
     digitalWrite(12,f);
     digitalWrite(11,j);
    if (digitalRead(10)==0){
       z++;
      Serial.print(" 1:");
      Serial.print(i);
      Serial.print(" 2:");
      Serial.print(f);
      Serial.print(" 13:");
      Serial.println(j);
      Serial.println("3-AND Pass");
    }
    if(i==1 && f==1 && j==1 && digitalRead(10)==1)    
    {
       z++;
      Serial.print(" 1:");
      Serial.print(i);
      Serial.print(" 2:");
      Serial.print(f);
      Serial.print(" 13:");
      Serial.println(j);
      
      Serial.println("second case pass");
    }
    
  
  }
}
  }
if(z==7 && sz==1){
    gate_clear++;
Serial.println("3-AND GATE 1 PASS");
    }else{
      gate_fail++;
  Serial.println("3-AND GATE 1 Fail");
      }
  

///i,f j shold be declare gate 2
   i=0;//3
   f=0;//4
   j=0;//5
   z=0;
   sz=0;
  Serial.println("start");
  for (int i=0;i<=1;i++){
    
    for(int f=0;f<=1;f++){
     for(int j=0;j<=1;j++){
      Serial.print("important");
    digitalWrite(9,i);
     digitalWrite(8,f);
     digitalWrite(7,j);
    if (digitalRead(6)==0){
       z++;
      Serial.print(" 3:");
      Serial.print(i);
      Serial.print(" 4:");
      Serial.print(f);
      Serial.print(" 5:");
      Serial.println(j);
      Serial.println("3-AND Pass");
    }
    if(i==1 && f==1 && j==1 && digitalRead(6)==1)    
    {
       sz++;
      Serial.print(" 3:");
      Serial.print(i);
      Serial.print(" 4:");
      Serial.print(f);
      Serial.print(" 5:");
      Serial.println(j);
      
      Serial.println("second case pass");
    }
    
  
  }
}
  }
if(z==7 && sz==1){
    gate_clear++;
Serial.println("3-AND GATE 2 PASS");
    }else{
      gate_fail++;
  Serial.println("3-AND GATE 2 Fail");
      }
  


///i,f j shold be declare gate 3
   i=0;//11
   f=0;//10
   j=0;//9
   z=0;
   sz=0;
  Serial.println("start");
  for (int i=0;i<=1;i++){
    
    for(int f=0;f<=1;f++){
     for(int j=0;j<=1;j++){
      Serial.print("important");
    digitalWrite(5,i);
     digitalWrite(4,f);
     digitalWrite(3,j);
    if (digitalRead(2)==0){
       z++;
      Serial.print(" 11:");
      Serial.print(i);
      Serial.print(" 10:");
      Serial.print(f);
      Serial.print(" 9:");
      Serial.println(j);
      Serial.println("3-AND Pass");
    }
    if(i==1 && f==1 && j==1 && digitalRead(6)==1)    
    {
       sz++;
      Serial.print(" 11:");
      Serial.print(i);
      Serial.print(" 10:");
      Serial.print(f);
      Serial.print(" 9:");
      Serial.println(j);
      
      Serial.println("second case pass");
    }
    
  
  }
}
  }
 if(z==7 && sz==1){
    gate_clear++;
Serial.println("3-AND GATE 3 PASS");
    }else{
      gate_fail++;
  Serial.println("3-AND GATE 3 Fail");
      }
  

if (gate_clear==3){
  Serial.println("3-AND GATE PASS");
  }else if(gate_fail==3){
    Serial.println("3-AND GATE fail");
    }else{
    Serial.println("3-AND GATE not all gate perfect");
    }
}    
