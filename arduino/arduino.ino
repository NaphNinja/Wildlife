


void setup()
{
  serial.begin(9600);
  serial println('a');
  char a = 'b';
  while (a !='a')
  {
    a=Serial.read();
  }
}
