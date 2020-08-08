# Vehicle-Pollution-Monitoring-System
This system monitors the pollution level of vehicles. 

PROPOSED SYSTEM:
In the proposed system, a smart monitoring system is used for monitoring the emissions from the vehicles. Two sensors are used to collect the data from the exhaust of the vehicles. The sensors are connected to the input pin of Arduino and the values are sensed. A threshold is set in the Arduino. If the sensed data goes above the threshold, a warning message is given to the owner using GSM. Two or more warning messages are given with some delays. If the owner reluctant to correct it, or to decrease the pollution from the vehicle, the data are transferred to the authority through GSM. The data are stored in a cloud by ThingSpeak for future analysis. By using this system, the owner can analyze the emission level of his vehicle. Authorities can take appropriate actions accordingly.

EXPERIMENTAL SETUP:
The proposed system is divided into two parts; (1) hardware implementation and (2) software implementation.

Hardware Implementation:-
The hardware of the pollution monitoring system consists of an Arduino board, MQ sensors, GSM module, and Wi-Fi module.

Software Implementation:-
The sensed values are shared to a Thing Speak cloud using the Esp8266 Wi- Fi module. It is stored there. We can use the stored data for future analysis. ThingSpeak is an open source IoT application and API to store and retrieve data from things using HTTP protocol over the internet via a Local Area Network.ThingSpeak enables the creation of sensor logging applications, location tracking applications, and a social network of things with status updates. We can collect and share data via channels in ThingSpeak.
