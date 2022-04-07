int led1 = D5; 


void blinkLedwave ()
{
    int delaytime = 500;
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );  
}

void blinkLedpat ()
{
    int delaytime = 200;
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );  
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );
    digitalWrite(led1, HIGH);
    delay( delaytime );
    digitalWrite(led1, LOW);
    delay( delaytime );  
}



void setup() {
    pinMode(led1, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", wave);
    
    

}


void wave(String event, String data)
{
    if(data == "wave")
    {
        blinkLedwave();
    }
    if(data == "pat")
    {
        blinkLedpat();
    }
}


void loop() {


    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
    
    delay(30000);
    
    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
    
    delay(30000);
}

