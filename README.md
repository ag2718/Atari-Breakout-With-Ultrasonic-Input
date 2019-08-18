# Overview
This project essentially takes input from an ultrasonic sensor that is connected to Arduino, which measures its distance from a "slider" (which is a physical device that is part of the project). These measurements translate to the moving of the "paddle" in the Atari Breakout game, which is coded in Python and reads the Arduino's data off of the serial monitor (using the pyserial library). In order to run this project, you will need to run the AtariBreakout.py and DistanceSensor.ino files simultaneously.

# Dependencies
For Python, you will need both the serial and Pygame libraries. For Arduino, you will need the NewPing library.

# How to Play
The goal is to hit and remove all of the boxes at the top of the screen. In order to do this, you will need to move your paddle (or slider) horizontally (which will control the virtual paddle on the screen), and hit the projectile, which will then reflect and hit the boxes at the top of the screen.
