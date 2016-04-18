/**********************************************************************************
**                                                                               ** 
**                            Projecte 1 / Programa 6                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int ledPin[]= {5,6,7,8,9,10,11,12};
int i = 0;
int j = 0;
int buttonPin[]= {2,3};
byte num = 0;
boolean buttonEstat[]= {LOW,LOW};

//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<8; i++)
  {
    pinMode (ledPin[i], OUTPUT);
  }
  for (i = 0; i<2; i++)
  {
    pinMode (buttonPin[i], INPUT);
  }
  for(int j = 0; j < 8 ; j++)  // definir estat inicals sortides, mostren número 0
  { 
    digitalWrite(ledPin[j], 0);
  }
}


//La funció Loop es va repetin cada cop.
void loop() {
  buttonEstat[0]= digitalRead(buttonPin[0]);
  buttonEstat[1]= digitalRead(buttonPin[1]);

  if (buttonEstat[0] == HIGH)  // incrementar
  { 
    num = num + 1;                 // incrementar el número a mostrar
    for(int j = 0; j < 8 ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
  
  if (buttonEstat[1] == HIGH)  // disminuir
  { 
    num = num - 1;                 // disminuir el número a mostrar
    for(int j = 0; j < 8 ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}
