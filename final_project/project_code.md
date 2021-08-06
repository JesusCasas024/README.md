/*name for push bottons*/
#define botton1 8
#define botton2 9
/* our identifier to know if a botton is on*/
bool active = true; 
/*our times for the LEDs in transision*/
int changing = 1500; //Time of change LED
int waiting = 3000; //Wait for change LED
/*Testers to know the value high or low in both bottons*/
int tester1;
int tester2;
/* declaration for the elements outputs and inputs*/
/*pinmode for stablish in which pin is connected each one*/
void setup() {
  /*LEDs right*/ 
  pinMode(2, OUTPUT);//LED green 1
  pinMode(3, OUTPUT);//yellow 1
  pinMode(4, OUTPUT);//red 1
  /*LEDs left*/
  pinMode(5, OUTPUT);//verde 2
  pinMode(6, OUTPUT);//yellow 2
  pinMode(7, OUTPUT);//red 2
  /*Bottons*/
  pinMode(botton1, INPUT);
  pinMode(botton2, INPUT);
  /*We need to be sure about LEDs OFF*/
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  /* the initial state for the traffic lights*/
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
}
/*Funtcions for transision between lights with push botton*/ 
void loop() {
/*We use function if to determinate if one botton is active or not*/
/*determinate which lights need to be on*/
  if (active)
  {
    tester1 = digitalRead(botton2);
 
    if (tester1 == HIGH)
    {
      /* We need to turn on the second traffic light*/
      turnON2();
        
      active = false;
    }
  }
/*Depending on the active button the lights will change*/
  else
  {
    tester2 = digitalRead(botton1);
 
    if (tester2 == HIGH)
    {
      /* We need to turn on 1  
      turnON1();

      tester2 = true;
    }
  }
}
/* One void for each lights, using the times for change and wait we see
the lights chaning as a traffic light*/
void turnON2()
{
  //changing lights
  delay(waiting); /*waiting for the change*/
  digitalWrite(2, LOW); /*start the process of all lights*/
  digitalWrite(3, HIGH);
  delay(changing); /*our time between changes*/
 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(changing);
 
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
}
 /*the other void for the other traffic*/
void turnON1()
{
/*Changing lights*/
  delay(waiting);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(changing);

  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(changing);
 
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
}
