const int buzzer = 3;


float nn[] = {264, 296.2, 332.6, 352.4, 395.5, 132, 148.1, 166.32};
String notas[] = {"do", "re", "mi", "fa", "sol", "la", "si", "do2"};

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  delay(5000);
  musica();
  
}

void musica() {
  tocarNota("do", 500);
  tocarNota("re", 500);
  tocarNota("mi", 500);
  tocarNota("fa", 500);
  tocarNota("fa", 200);
  tocarNota("fa", 250);
  delay(100);
  tocarNota("do", 500);
  tocarNota("re", 500);
  tocarNota("do", 500);
  tocarNota("re", 500);
  tocarNota("re", 200);
  tocarNota("re", 200);
  delay(100);
  tocarNota("do", 500);
  tocarNota("sol", 500);
  tocarNota("fa", 500);
  tocarNota("mi", 500);
  tocarNota("mi", 200);
  tocarNota("mi", 200);
  delay(100);
  tocarNota("do", 500);
  tocarNota("re", 500);
  tocarNota("mi", 500);
  tocarNota("fa", 500);
  tocarNota("fa", 200);
  tocarNota("fa", 250);
  loop();
}

int posicaoNota(String nota) {
  int tamanho = sizeof(notas)/ sizeof(String);
  for(int i = 0; i < notas; i++){
    if(nota.compareTo(notas[i])==0){
      return i;
    }
  }
}

void tocarNota(String nota, int tempo) {
  tone(buzzer, nn[posicaoNota(nota)]);
  delay(tempo);
  noTone(buzzer);
  delay(50);
}
