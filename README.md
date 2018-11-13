[image1]: ./images/traffic_lights.jpg

# Project 01 : Arduino Traffic Light

In this project we will build a traffic light with an Arduino Nano. The lights will change from green to amber and finally to red with random time intervals.

The traffic light will be useful to simulate real driving conditions. In Project 02, we will then program the self driving car to recognize the colours and control speed accordingly.

## 01. Project assembly

To begin, wire and assemble the project according to the following diagram:

![alt text][image1]

Please notice that the 3-colour leds should be facing down. Therefore the wire colours do no correspond to the correct pins of the 3-colour leds. Remember to flip the 3-colour leds before connecting the batteries.

## 02. Arduino code

Below is the code that you have to upload into the Arduino Nano:

```
#define redPin 2
#define ambPin 3
#define grnPin 4

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(ambPin, OUTPUT);
  pinMode(grnPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(redPin, LOW);

  digitalWrite(ambPin, HIGH);
  delay(4000);
  digitalWrite(ambPin, LOW);

  digitalWrite(grnPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(grnPin, LOW);
}
```

#### Understanding the code

We first define the pins that will be used for the red, amber and green light:

```
#define redPin 2
#define ambPin 3
#define grnPin 4
```

We then initialize our variables:

```
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(ambPin, OUTPUT);
  pinMode(grnPin, OUTPUT);
}
```

Finally we loop through the leds with random time delays:

```
void loop() {
  digitalWrite(redPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(redPin, LOW);

  digitalWrite(ambPin, HIGH);
  delay(4000);
  digitalWrite(ambPin, LOW);

  digitalWrite(grnPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(grnPin, LOW);
}
```

## 03. Upload sketch

Connect the Arduino Nano to your laptop and upload the sketch code.

## Author

**Massimo Passamonti**: [email me](mailto:mpweb2.0@gmail.com)

## License

This project and its source code are licensed under the MIT License. [See MIT License](https://github.com/github/choosealicense.com/blob/gh-pages/LICENSE.md) file for details.
