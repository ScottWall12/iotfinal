void setup() {
    pinMode(A0, INPUT);
}

bool open = false;
void loop() {
    float sensor = analogRead(A0);
    
    if(sensor > 1750 && open == false){
        Particle.publish("open");
        open = true;
        delay(5000);
    }
    
    if(sensor < 1750 && open == true){
        Particle.publish("close");
        open = false;
        delay(5000);
    }
    delay(5000);
}
