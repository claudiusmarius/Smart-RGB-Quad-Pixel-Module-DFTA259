#include <Adafruit_NeoPixel.h>

#define PIN_LED   6        // PB0
#define N_LEDS    4       // Nombre de WS2812B
#define DELAI     1000     // 1 seconde entre chaque LED

Adafruit_NeoPixel strip(N_LEDS, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.clear();
  strip.show();
}

void loop() {

  // =========================
  // 🔴 Chenillard ROUGE
  // =========================
  for (uint8_t i = 0; i < N_LEDS; i++) {
    strip.clear();
    strip.setPixelColor(i, strip.Color(255, 0, 0));
    strip.show();
    delay(DELAI);
  }

  // =========================
  // 🟢 Chenillard VERT
  // =========================
  for (uint8_t i = 0; i < N_LEDS; i++) {
    strip.clear();
    strip.setPixelColor(i, strip.Color(0, 255, 0));
    strip.show();
    delay(DELAI);
  }

  // =========================
  // 🔵 Chenillard BLEU
  // =========================
  for (uint8_t i = 0; i < N_LEDS; i++) {
    strip.clear();
    strip.setPixelColor(i, strip.Color(0, 0, 255));
    strip.show();
    delay(DELAI);
  }

  // Rebouclement automatique
}
