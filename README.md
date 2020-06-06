# Kommunikation mittels XBee

Das Projekt autonomes Fahren ist ein Bestandteil des Masterstudienganges Elektrotechnik mobiler
Systeme. Es werden fortlaufend am eSmart verschieden Aufgaben gelöst. Die folgenden Unterkapitel
behandeln das Thema der Kommunikation mit Hilfe eines XBee-Moduls. Dabei wird versucht eine
drahtlose Kommunikation zwischen dem Laptop und des Fahrzeuges herzustellen.
Zuerst werden die theoretischen Grundlagen der seriellen Kommunikation erläutert. Weiterhin wird
auf das XBee-Modul und deren Shield-Module eingegangen. Am Schluss wird die Vorgehensweise
dargelegt.

## Serielle Schnittstelle / Kommunikation

Die serielle Kommunikation dient als Grundlage der Kommunikation zwischen den zwei Komponenten
Arduino und XBee-Modul. Bei dieser Art der Übertragung werden die Bits nacheinander (seriell)
über eine Leitung übertragen. Das Arduino kommuniziert durch die moderne Schnittstelle USB
(Universal Serial Bus) Kabel mit dem Computer. Die Schnittstelle RS-232 (ältere Version) ist
bekannter im Bezug auf das Thema serielle Schnittstelle/ Kommunikation. Die Anordnung der Bits
ist im sogenannten UART (Universal Asynchronous Receiver Transmitter) und USART (Universal
Synchronous Asynchronous Receiver Transmitter) vorgegeben. Die Abbildung zeigt den Datenfluss
der Mikrocontroller und der RF Module anschaulich.

![Image of UART Kommunikation](https://www.digi.com/resources/documentation/Digidocs/90001506/resources/images/rf/dwg_uart_data_flow_2.png)

Die UART-Schnittstelle dient zum Senden und Empfangen von Daten über eine Datenleitung und bildet
den Standard der seriellen Schnittstellen. Hier im Beispiel entspricht dies der Verbindung zwischen
PC, Mikrocontroller und XBee-Modul.
