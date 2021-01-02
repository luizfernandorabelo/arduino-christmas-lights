#include <pitches.h>

#define BUZZER 11 //buzzer pin
#define TOTAL_LEDS 9
#define SHORT_TONE 300 //standard tone lenght in ms

int leds[TOTAL_LEDS] = {2,3,4,5,6,7,8,9,10}; // led pins

void setup() {

    //Setting the leds and the buzzer as output:
    for(int i = 0; i < TOTAL_LEDS; i++)
        pinMode(leds[i], OUTPUT);
    pinMode(BUZZER, OUTPUT);
    
    //Turning on and off all the leds:
    for(int i = 0; i < TOTAL_LEDS; i++){
        digitalWrite(leds[i], HIGH);
        delay(350);
        digitalWrite(leds[i], LOW);
    }
    
    delay(2000);
    
    //Playing the song "Jingle Bells":
    playSong();
}

/*Plays the note C5 "repetitions" times during "toneLenght" and blinks the blue leds*/
void playC5(int repetitions, int toneLenght){
    for(int i = 0; i < repetitions; i++){
        tone(BUZZER, NOTE_C5, toneLenght);
        digitalWrite(leds[0], HIGH); 
        digitalWrite(leds[8], HIGH);
        delay(toneLenght * 1.1);
        digitalWrite(leds[0], LOW); 
        digitalWrite(leds[8], LOW);
    }
}

/*Plays the note D5 "repetitions" times during "toneLenght" and blinks the yellow leds*/
void playD5(int repetitions, int toneLenght){
    for(int i = 0; i < repetitions; i++){
        tone(BUZZER, NOTE_D5, toneLenght);
        digitalWrite(leds[1], HIGH); 
        digitalWrite(leds[7], HIGH);
        delay(toneLenght * 1.1);
        digitalWrite(leds[1], LOW); 
        digitalWrite(leds[7], LOW);
    }
}

/*Plays the note G5 "repetitions" times during "toneLenght" and blinks the red leds*/
void playG5(int repetitions, int toneLenght){
    for(int i = 0; i < repetitions; i++){
        tone(BUZZER, NOTE_G5, toneLenght);
        digitalWrite(leds[2], HIGH); 
        digitalWrite(leds[6], HIGH);
        delay(toneLenght * 1.1);
        digitalWrite(leds[2], LOW); 
        digitalWrite(leds[6], LOW);
    }
}

/*Plays the note A5 "repetitions" times during "toneLenght" and blinks the green leds*/
void playA5(int repetitions, int toneLenght){
    for(int i = 0; i < repetitions; i++){
        tone(BUZZER, NOTE_A5, toneLenght);
        digitalWrite(leds[3], HIGH); 
        digitalWrite(leds[5], HIGH);
        delay(toneLenght * 1.1);
        digitalWrite(leds[3], LOW); 
        digitalWrite(leds[5], LOW);
    }
}

/*Plays the note B5 "repetitions" times during "toneLenght" and blinks the white led*/
void playB5(int repetitions, int toneLenght){
    for(int i = 0; i < repetitions; i++){
        tone(BUZZER, NOTE_B5, toneLenght);
        digitalWrite(leds[4], HIGH);
        delay(toneLenght * 1.1);
        digitalWrite(leds[4], LOW);
    }
}

/*Plays a part of the song "Jingle Bells"*/
void playSong(void){
    playB5(9, SHORT_TONE);  
    playD5(1, SHORT_TONE);
    playG5(1, SHORT_TONE);
    playA5(1, SHORT_TONE);
    playB5(1, SHORT_TONE * 1.2);
    delay(SHORT_TONE * 1.5);
    playC5(3, SHORT_TONE);
    playD5(1, SHORT_TONE);
    playC5(1, SHORT_TONE);
    playB5(4, SHORT_TONE);
    playA5(2, SHORT_TONE);
    playB5(1, SHORT_TONE);
    playA5(1, SHORT_TONE * 1.2);
    delay(SHORT_TONE * 2);
    playB5(9, SHORT_TONE);
    playD5(1, SHORT_TONE);
    playG5(1, SHORT_TONE);
    playA5(1, SHORT_TONE);
    playB5(1, SHORT_TONE * 1.2);
    delay(SHORT_TONE * 1.5);
    playC5(3, SHORT_TONE);
    playD5(1, SHORT_TONE);
    playC5(1, SHORT_TONE);
    playB5(3, SHORT_TONE);
    playD5(2, SHORT_TONE);
    playC5(1, SHORT_TONE);
    playA5(1, SHORT_TONE);
    playG5(1, SHORT_TONE * 1.2);
    delay(SHORT_TONE * 2);
}

/*Blink all the leds and delays "delayTime"*/
void blinkAll(int delayTime){
    for(int i = 0; i < TOTAL_LEDS; i++)
        digitalWrite(leds[i], HIGH);
    delay(delayTime);
    for(int i = 0; i < TOTAL_LEDS; i++)
        digitalWrite(leds[i], LOW);
    delay(delayTime);
}

void loop() {
    //Blinking all the leds:
    blinkAll(2000);
}
