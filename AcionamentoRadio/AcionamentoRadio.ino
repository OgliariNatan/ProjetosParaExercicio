/*
 *Acionamento de lampada via radio frequencia 
 *Autor Natan 
 */
 //#include   avr/wdt.h //biblioteca do Watchdog

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
    int estado;
    int estado1;
  };
typedef struct valor valor_t;

void updateIO (valor_t *estado, valor_t *estado1);

void setup() {
pinMode (OUTPUT, Olampada);
pinMode (OUTPUT,  Otomada);
pinMode (OUTPUT,     Oled);

pinMode (INPUT, Ildr);

#ifdef DEBUG
Serial.begin (9600);
Serial.println("Config");
#endif //DEBUG
 //wdt_enable(WDTO_4S); //Função que ativa e altera o Watchdog(_1S _2S _4S _8S)tempos
}

void loop() {
 //wdt_reset(); //diz que esta tudo ok
 valor_t *estado;
 estado = 1;
  

 updateIO(1, 1);
}

void updateIO (valor_t *estado, valor_t *estado1){
#ifdef DEBUG
Serial.println("updateIO");
#endif //DEBUG
}


