const int D3 = 5;
const int D2 = 4;
const int D1 = 3;
const int D0 = 2;
const int Pins[4]={D3, D2, D1, D0};
int n=2; //change delay value here
int count;
void setup()
{
Serial.begin(115200);
Serial.println("Initializing the state of Pins as Output");
for (int pin =0; pin < 4; pin++)
{
pinMode (Pins[pin], OUTPUT);
}
}
void loop()
{
//digitalWrite (Pins[3], 0);
//digitalWrite (Pins[2], 0);
//digitalWrite (Pins[1], 1);
analogWrite (A0, 10);


}
void Dimming()
{
digitalWrite (Pins[3], boolean ((count & 8)>>3));
digitalWrite (Pins[2], boolean ((count & 4)>>2));
digitalWrite (Pins[1], boolean ((count & 2)>>1));
digitalWrite (Pins[0], boolean (count & 1));
}  
