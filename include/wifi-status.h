#ifndef _WIFI_STATUS_H
#define _WIFI_STATUS_H

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <TFT_eSPI.h>

class WifiStatus {
    public:
    WifiStatus(TFT_eSPI *tft);
    void update(boolean dataReceived);

    private:
    TFT_eSPI *tft;
    int previousLevel = -1;
    boolean previousDataReceived = false;
    long lastUpdate = -60 * 1000;
};

#endif