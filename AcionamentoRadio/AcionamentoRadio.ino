/*
 *Acionamento de lampada via radio frequencia 
 *Autor Natan 
 */
#define output OUTPUT
#define input INPUT
 
#define Olampada 13
#define Otomada 12
#define Oled 11

#define Ilampada 0
#define Itomada 1
#define Iled 3
#define Isw0 4
#define Isw1 5
#define Ildr A0

#define DEBUG

struct valor{
    int estado  : 1;
    int estado1 : 1;
  };
typedef struct valor valor_t;

void updateIO (valor_t *estado, valor_t *estado1);

void setup() {
pinMode (OUTPUT, Olampada);
pinMode (OUTPUT,  Otomada);
pinMode (OUTPUT,     Oled);

pinMode (input, Ildr);

#ifdef DEBUG
Serial.begin (9600);
Serial.println("Config");
#endif //DEBUG

}

void loop() {

 updateIO(1, 2);
}

void updateIO (valor_t *estado, valor_t *estado1){
#ifdef DEBUG
Serial.println("updateIO");
#endif //DEBUG
}


