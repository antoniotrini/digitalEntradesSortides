/**********************************************************************************
**                                                                               ** 
**                            Projecte 1 / Programa 3                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int led []= {5,6,7,8,9,10,11,12};


//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i=0; i<21, i++)
  {
    pinMode (led[i], OUTPUT);
  }
  
}


//La funció Loop es va repetin cada cop.
void loop() {
  for (i = 0; i<8; i++)
  {
    digitalWrite (led[i], HIGH);
    delay(90);
    digitalWrite (led[i], LOW);
    delay(90);
  }
  
  for (i = 7; i>=0; i++)
  {
    digitalWrite (led[i], HIGH);
    delay(90);
    digitalWrite (led[i], LOW);
    delay(90);
  }
}
