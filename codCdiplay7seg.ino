int a=2, b=3, c=4, d=5, e=6, f=7, g=8, h=9;

int num[11][8]{
  {a,b,c,d,e,f}, // Zero
  {b,c}, // Um
  {a,b,e,d,g}, // Dois
  {a,b,c,d,g}, // Tres
  {b,c,f,g}, // Quatro
  {a,c,d,f,g}, // Cinco
  {a,c,d,e,f,g}, // Seis
  {a,b,c}, // Sete
  {a,b,c,d,e,f,g}, // Oito
  {a,b,c,f,g}, // Nove
  {h} // Ponto
};

void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
}

void apaga(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
}

void numero (int n){
  for(int i = 0; i < 7; i++) digitalWrite(num[n][i], HIGH);
}

void regresiva (int x){
  for(int i = 0; i < 7; i++) digitalWrite(num[x][i], HIGH);
}

void loop(){

  for(int i = 0; i < 10; i++){
    apaga();
    numero(i);
    delay(250);
  }
  for(int s = 0; s < 5; s++){
    apaga();
    delay(50);
    digitalWrite(h, HIGH); 
    delay(50);
  }
    
    for(int j = 9; j >= 0; j--){
    apaga();
    regresiva(j);
    delay(250);
  }
  
}
