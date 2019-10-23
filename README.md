# Italian keyboard layout for Digispark DigiKeyboard
Original files: https://github.com/digistump/DigistumpArduino/tree/master/digistump-avr/libraries/DigisparkKeyboard

You must place the two header files (DigiKeyboard.h and scancode-ascii-table.h) into the DigisparkKeyboard library, inside your Arduino15 folder.

Windows (Arduino IDE 1.6.5 and previous):
```
c:\Users\(username)\AppData\Roaming\Arduino15\packages\digistump\hardware\avr\(version)\libraries\DigisparkKeyboard\
```
Windows (Arduino IDE 1.6.6 and later):
```
c:\Users\(username)\AppData\Local\Arduino15\packages\digistump\hardware\avr\(version)\libraries\DigisparkKeyboard\
```
Linux:
```
/home/(username)/.arduino15/packages/digistump/hardware/avr/(version)/libraries/DigisparkKeyboard/
```
---

For sending special characters like \[]{}@#, I modified the write function in DigiKeyboard.h, starting at line 203, so to send the corresponding keystroke combination.

I also updated scancode-ascii-table.h, so to map the correct keycodes to ASCII codes.

---

For doing so, I used these two resources: 
- https://github.com/PaulStoffregen/cores/blob/master/teensy/keylayouts.h
- http://www.asciitable.com/
