// // dando um "nome" para as portas 
// int vermelho = 12;
// int amarelo = 11;
// int verde = 10;

// int vermelho2 = 5;
// int amarelo2 = 7;
// int verde2 = 6;
 
// void setup() {
//   // indicando para o Arduino quais portas vamos usar
//   pinMode(vermelho, OUTPUT);
//   pinMode(amarelo, OUTPUT);
//   pinMode(verde, OUTPUT);

//   pinMode(vermelho2, OUTPUT);
//   pinMode(amarelo2, OUTPUT);
//   pinMode(verde2, OUTPUT);
// }
 
// void loop() {
//   digitalWrite(vermelho, HIGH); // O vermelho começa ligado
//   digitalWrite(amarelo, LOW); // O amarelo começa desligado
//   digitalWrite(verde, LOW); // O verde começa desligado

//   digitalWrite(vermelho2, LOW); // O vermelho começa desligado
//   digitalWrite(amarelo2, LOW); // O amarelo começa desligado
//   digitalWrite(verde2, HIGH); // O verde começa ligado
  
//   // digitalWrite(vermelho, HIGH); // Apaga o vermelho
//   // digitalWrite(verde2, HIGH); // Apaga o verde 2
 
//   delay(3000);
//   digitalWrite(verde2, LOW);
//   digitalWrite(amarelo2, HIGH);
//   delay(1000);
//   digitalWrite(amarelo2, LOW);
//   digitalWrite(vermelho2, HIGH);
//   digitalWrite(vermelho, LOW);
//   digitalWrite(verde, HIGH);

//   delay(3000);
//   digitalWrite(verde, LOW);
//   digitalWrite(amarelo, HIGH);
//   delay(1000);
//   digitalWrite(amarelo, LOW);
//   digitalWrite(vermelho, HIGH);
//   digitalWrite(vermelho2, LOW);
//   digitalWrite(verde2, HIGH);
  
 
//   delay(3000);
// }