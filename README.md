# GenesisESP_Modem version 1.0

GenesisESP Modem is a project that enables our Mega Drive/Sega Genesis to receive data from the internet using an ESP32 board with WiFi. We load a specific firmware onto the ESP32 and then connect the ESP32 board to some of the pins of the controller port number 2 of our Mega Drive/Sega Genesis. We need a specific ROM that reads the data coming from the Internet, and then these data will be displayed on the screen. In the example I have here, the messages come from a simple page that I hosted on Github. So, if you see some random messages about Sega on your screen, congratulations! The project is working! If you don't see anything, your game console is fried. Just kidding! I mean, bizarre coincidences happen, but if you don't see anything, redo the entire project calmly.

# WHAT DO YOU NEED TO BUILD THIS PROJECT?

- An ESP32 board or similar board that has internet connection and can use the Arduino IDE;
- A Mega Drive/Sega Genesis with cartridge slot or SD card slot and with two controller ports;
- You need a intermediate to advanced knowledge in C and C++, regarding the use of SGDK and programming ESP32 boards;
- A reprogrammable Mega Drive/Sega Genesis cartridge (to insert the ROM) or an Everdrive (much simpler, of course).

I will not teach how to compile a ROM using SGDK. I suggest going to the SGDK repository or searching for several videos that teach how to compile a ROM.

I will leave the compiled ROM available for download here. To test the project, put the ROM on your Everdrive, make the connections of the ESP32 with the game console, and then just wait to see the messages.

# DOES IT WORK ON EMULATORS?

Answer: It depends... I would only say "yes" if you know how to reverse engineer to alter the joystick controller inside the emulator... well... good luck! But the more decent answer is: no! It doesn't work on emulators.

# HOW CAN I USE THIS ROM ON MY REAL MEGA DRIVE SEGA GENESIS?

Answer: You can program your own cartridge using some EPROM memory, or you can buy an Everdrive cartridge and put the ROM on the SD card (which is much easier).

# CAN I REPLACE THE WEBSITE URL WITH ANOTHER ONE TO FETCH DATA?

Answer: Yes, as long as you can fetch content from other websites to display, there are no problems.

# CAN I USE ANY VERSION OF MEGA DRIVE/SEGA GENESIS?

Answer: Almost all versions. The portable Mega Drive/Sega Genesis version doesn't have connections for controller port 2 (I think). There are also some strange versions of the console made in Brazil that do not have cartridge slots. But if your Mega Drive/Sega Genesis allows you to play games via cartridge or SD cards and has a controller port 2, then I think the project will work (but let me know if it doesn't, okay?).

# WHAT CAN BE DONE WITH THIS PROJECT?

Answer: Well, for the future, we can try to develop various things like: text games, a chat server, or even more complex things like maybe creating games that can be downloaded via the internet and stored in the console's SRAM. There are many possibilities. Besides, since the data arrives via serial port, you can necessarily do a series of things using boards like Arduino or others, just by writing a specific ROM.

The connection pinout of the ESP32 with the Mega Drive/Sega Genesis is in the connection diagram folder of this directory.

Any questions, please contact me.

# SGDK download: [https://github.com/Stephane-D/SGDK](https://github.com/Stephane-D/SGDK)

# Mega Drive Serial Port download: [https://github.com/rhargreaves/mega-drive-serial-port](https://github.com/rhargreaves/mega-drive-serial-port)

# SPECIAL THANKS:

Special thanks to Sir Stephane Dallongeville, you are brilliant and have revived Sega!

Special thanks to Sir Robert Hargreaves, without your intelligence and creativity, this project would not have been possible.


