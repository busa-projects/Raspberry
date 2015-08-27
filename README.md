# Overview
Raspberry port of MySensors, added MQTT as client (mosquitto)

# Libraries needed

Mosquitto (Tested with 1.4.3)
http://mosquitto.org/download/
make and make install to install libraries and headers

tmrh20 RF24 library
http://tmrh20.github.io/RF24/RPi.html
Download the install.sh to do an automated install. Only rf24 is needed, but other libraries can be installed as well.

# How to
Install libraries
Clone the repository
Check gw pins (gw = new MyMQTT(RPI_V2_GPIO_P1_15, BCM2835_SPI_CS0, BCM2835_SPI_SPEED_8MHZ, 1))
make
Execute PiGatewayMosquitto

# Other details
MQTT publishment will be made on SnS/X/X/X. 'SnS' prefix can be configured on MyMQTT.h
MQTT parameters such as user etc are customizable on PiGatewayMosquitto.cpp

