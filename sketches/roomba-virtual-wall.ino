# based on http://www.hobby-werkstatt-blog.de/arduino/424-eine-arduino-virtual-wall-fuer-den-irobot-roomba.php
# library is available on https://github.com/cyborg5/IRLib
# IMPORTANT: you have to modify library functions and make all functions used below public (not protected)

#include <IRLib.h>

IRsend wall; // IRemote initialisieren (Pin 3)

void setup()
{ wall.enableIROut(38); // 38 kHz Träger
}

void loop()
{ wall.mark(1000); // 1 ms Mark
  wall.space(1000); // 1 ms Space
}
