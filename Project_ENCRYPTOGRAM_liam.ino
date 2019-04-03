//*****Universals********************************************************************************************************************
  //*****Libraries*******************************************************************************************************************
#include <LiquidCrystal.h>//imports the LiquidCrystal Library
  //*****LiquidCrystal Setup*********************************************************************************************************
LiquidCrystal lcd(8,9,17,10,11,12,13); // initialises the display
  //*****Definitions*****************************************************************************************************************
#define Home 13 // defines the home button
#define Select 12 // defines the select button
#define Back 11 // defines the back button
#define Up 10 // defines the up button
#define Down 9 // defines the down button
#define Help 8 // defines the help button
  //*****Universal Variables*********************************************************************************************************
int page_no = 0; // establishes the variable page_no which is used to determine which page to load
int next_page_no; // establishes the variable next_page_no which is used to preselect the next page
int last_page_no; // establishes the variable last_Page_no which is used to remember the last page displayed
int on_page_no = 0; // establishes the variable on_page_no which is used to determine which element is displayed on the page
int next_on_page_no; // establishes the variable next_on_page_no which is used to preselect the next element on page to be dsplayed
int last_on_page_no; // establishes the variable last_on_page_no which is used to remember the last element displayed on the page


//*****Interupts*********************************************************************************************************************
  //*****HOME************************************************************************************************************************
void hOME(){}

  //*****SELECT**********************************************************************************************************************
void sELECT(){}

  //*****BACK************************************************************************************************************************
void bACK(){}

  //*****UP**************************************************************************************************************************
void uP(){}

  //*****DOWN************************************************************************************************************************
void dOWN(){}

  //*****HELP************************************************************************************************************************
void hELP(){}


void setup()
{
  Serial.begin(9600); // sets data transmission rate to 9600 bits/second

  pinMode(Home, INPUT);
  pinMode(Select, INPUT);
  pinMode(Back, INPUT);
  pinMode(Up, INPUT);
  pinMode(Down, INPUT);
  pinMode(Help, INPUT);

    //*****interupts*******************************************************************************************************************
attachInterrupt(digitalPinToInterrupt(Home), hOME, HIGH);
attachInterrupt(digitalPinToInterrupt(Select), sELECT, HIGH);
attachInterrupt(digitalPinToInterrupt(Back), bACK, HIGH);
attachInterrupt(digitalPinToInterrupt(Up), uP, HIGH);
attachInterrupt(digitalPinToInterrupt(Down), dOWN, HIGH);
attachInterrupt(digitalPinToInterrupt(Help), hELP, HIGH);

  lcd.begin(20,4); // sets the dimensions of the screen as 20 x 4
  lcd.clear(); // clears the LCD screen
  for (int count = 0; count < 3; count++)
  {
    lcd.setCursor(1,1);
    lcd.print("LOADING.");
    lcd.clear();
    delay(750);
    lcd.setCursor(1,1);
    lcd.print("LOADING..");
    lcd.clear();
    delay(750);
    lcd.setCursor(1,1);
    lcd.print("LOADING...");
    lcd.clear();
    delay(750);
    
  }
  

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
