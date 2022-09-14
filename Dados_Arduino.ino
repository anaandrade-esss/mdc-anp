int potenciometro_1 = A0; 
int potenciometro_2 = A1;
float tensao_1;
float tensao_2; 
float tensao2;
float tensao1;

int linha=0;
int LABEL=1;

void setup() {
    Serial.begin(9600);
    Serial.println("CLEARDATA");
    Serial.println("LABEL,Hora,Tempo do Inicio,Data,Leitura 1,Tensao 1,Leitura 2, Tensao 2");
}

void loop(){
    tensao_1 = analogRead(potenciometro_1);
    tensao_2 = analogRead(potenciometro_2);
    linha++;
    
    tensao1 = tensao_1*5000/1023;  
    tensao2 = tensao_2*5000/1023;

    Serial.print("DATA,TIME,TIMER,DATE");
    Serial.print(",");
    Serial.print(tensao_1);
    Serial.print(",");
    Serial.print(tensao1);
    Serial.print(",");
    Serial.print(tensao_2);
    Serial.print(",");
    Serial.print(tensao2);
    Serial.print(",");
    Serial.println(linha);

    delay(180000);
    
}
