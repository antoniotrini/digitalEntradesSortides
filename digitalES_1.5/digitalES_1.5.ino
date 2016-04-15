/**********************************************************************************
**                                                                               ** 
**                            Projecte 1 / Programa 5                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int ledPin[]= {5,6,7,8};
int i = 0;
int buttonPin[]= {2};
byte num = 0;
boolean buttonEstat[]= {LOW}
//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<4; i++)
  {
    pinMode (ledPin[i], OUTPUT);
  }
  for (i = 0; i<1; i++)
  {
    pinMode (buttonPin[i], INPUT);
  }
}


//La funció Loop es va repetin cada cop.
void loop() {
  buttonEstat[0]= digitalRead(buttonPin[0]);
  num = num + 1;
  for (i = 0; i<4; i++)
  {
    digitalWrite(ledPin[i], bitRead(num, i));
  }
  delay(1000);
}
