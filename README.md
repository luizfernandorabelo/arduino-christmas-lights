# Christmas Lights

![](scene.jpeg)

## Required Materials:

* **1 small nativity scene**;  
* **1 Arduino Nano**;
* **9 Leds 5mm**, in the colors of your choice;
* **1 Passive Buzzer 5V**.

You can make your own nativity scene, using a shoe box, residue of sharpened pencil and your creativity.

## Arduino Circuit:

![](schematic.png)

## Arduino Code:

* Firstly, all the leds are turned on and off to certify that all of them are working properly;
```C++
  for(int i = 0; i < TOTAL_LEDS; i++){
        digitalWrite(leds[i], HIGH);
        delay(350);
        digitalWrite(leds[i], LOW);
  }
```
* Then, a part of the song "Jingle Bells" is played. Each tone has its corresponding leds;
```C++
  playSong(void);
```
* And in the loop function, all the leds are blinked.
```
  blinkAll(int delayTime);
```
You can add new functions to blink the leds in different ways. There are many possibilities.

## Video

[![VIDEO](https://img.youtube.com/vi/dD7tqMn2cTI/0.jpg)](https://www.youtube.com/watch?v=dD7tqMn2cTI)
