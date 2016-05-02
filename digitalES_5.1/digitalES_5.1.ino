/**********************************************************************************
**                                                                               ** 
**                            Projecte 5 / Programa 1                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int led []= {2,3,4,5,6,7,8,9,10};
int i = 0;

//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<8; i++)
  {
    pinMode (led[i], OUTPUT);
  }
  
}


//La funció Loop es va repetin cada cop.
void loop() {
  for (i = 0; i<8; i++)
  {
    digitalWrite (led[i], HIGH);
    delay(1000);
    digitalWrite (led[i], LOW);
    delay(1000);
  }
}
