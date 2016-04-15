/**********************************************************************************
**                                                                               ** 
**                            Projecte 1 / Programa 4                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int ledPin[]= {5,6,7,8};
int i = 0;
byte num = 0;

//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<4; i++)
  {
    pinMode (ledPin[i], OUTPUT);
  }
  
}


//La funció Loop es va repetin cada cop.
void loop() {
  num = num + 1;
  for (i = 0; i<4; i++)
  {
    digitalWrite(ledPin[i], bitRead(num, i));
  }
  delay(1000);
}
