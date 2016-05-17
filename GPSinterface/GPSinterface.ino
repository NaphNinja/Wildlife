#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
 
int led = 9;
int inByte = 0;         
 
void setup()
{
  lcd.begin(16, 2);
  lcd.print("CRUISEADER");
  lcd.setCursor(0, 1);
  lcd.print(" GPS  MODULE ");
  
  pinMode(led, OUTPUT);  
    Serial.begin(4800);
    delay(100);
    
  Serial.print('\n');
  Serial.print("       CRUISE   ");
  Serial.print('\n');
  Serial.print('\r');
  Serial.print(" GEOGRAPHICAL CORDINATES");
  Serial.print('\n');
  Serial.print('\r');
  Serial.print('\n');
  
  digitalWrite(led, HIGH);       
}
 
void loop ()
{ 
    do
    {
        do
        {
            while ( !Serial.available() );    
        } while ( 'G' != Serial.read() );                    
      
        while(!Serial.available());
    } while ( 'G' != Serial.read() );
 
    do
    {
        while ( !Serial.available() );                           
    } while ( ',' != Serial.read() );
 
    do
    {
        while ( !Serial.available() );                       
    } while ( ',' != Serial.read() );

    Serial.print(" N: ");
    do
    {
        while ( !Serial.available() ); 
        inByte = Serial.read();                              
        Serial.write ( inByte );                             
    } while ( ',' != inByte );

    do
    {
        while ( !Serial.available() );                       
    } while ( ',' != Serial.read() );

    Serial.print(" E: ");
    do
    {
        while ( !Serial.available() ); 
        inByte = Serial.read();                              
        Serial.write ( inByte );                             
    } while ( ',' != inByte );

    Serial.println();
    
    delay ( 1000 );
}
