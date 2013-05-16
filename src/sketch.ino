
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float  sum = 0.0;
	float angle = 0.0;
	const int Samples=1000;
	for(int i=0;i<Samples;i++){
    angle = ((float(analogRead(A0)-100))/0.8)*(360.0/1023);
		sum += angle;
	}
  Serial.println(sum/Samples);
}

