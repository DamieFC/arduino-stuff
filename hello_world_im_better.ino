/*
 * This code is my code under the GPLv3
*/
String instr;
String builtins[2] = {"exit","help"};
String outs[3] = {"Please type a command.","exit","help"};
String out = outs[0];

void setup() {
  // Initialize serial port
  Serial.begin(9600);  
  printf(out);

}

void loop() {
  // DA SHELL BUILTINS
  delay(1000);
  instr = Serial.readString();
  if(instr == "") {
    ;
  }
  else if(instr == builtins[0]) {
    out = outs[1];
    
  }
  else if(instr == builtins[1]) {
    out = outs[2];
  }
}

void printf(String str) {
  Serial.print(str);
}
