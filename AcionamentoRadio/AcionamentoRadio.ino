/*
 *Acionamento de lampada via radio frequencia 
 *Autor Natan 
 */
#define Olamada 13
#define Otomada 12
#define Oled 11
#define Ilampada 0
#define Itomada 1
#define Iled 3
#define Isw0 4
#define Isw1 5

#define DEBUG

struct valor{
    int estado  : 1;
    int estado1 : 1;
  };
typedef struct valor valor_t;

void updateIO (valor_t *valor);

void setup() {
  // put your setup code here, to run once:

#ifdef DEBUG
Serial.begin (9600);
Serial.println("Config");
#endif //DEBUG

}

void loop() {
  // put your main code here, to run repeatedly:

}
