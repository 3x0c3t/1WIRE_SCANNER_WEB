# 1WIRE_SCANNER_WEB

## Description

Projet Arduino pour scanner et détecter des sondes de température utilisant le protocole 1-Wire.  
Une interface web simple permet d’afficher en temps réel les sondes détectées sur le réseau.

---

## Fonctionnalités

- Scan automatique des dispositifs 1-Wire connectés.
- Affichage dynamique des adresses des sondes détectées.
- Interface web accessible via IP de la carte Arduino (si support réseau).
- Support de plusieurs sondes simultanées.

---

## Matériel requis

- Carte Arduino compatible (ex : Arduino Uno, Mega, ESP8266, ESP32 selon la connexion réseau)
- Sonde(s) de température 1-Wire (ex : DS18B20)
- Résistance de pull-up 4.7kΩ pour le bus 1-Wire
- Câblage adapté pour connecter les sondes à la carte

---

## Installation

### Étape 1 : Cloner le dépôt

```bash
git clone https://github.com/3x0c3t/1WIRE_SCANNER_WEB.git
cd 1WIRE_SCANNER_WEB
