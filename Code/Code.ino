// #######################################################################################################################################################
// #
// # Code for the printables "AWSW - Silent ALARM KNOB as touch sensor with Telegram support" project: https://www.printables.com/de/model/306947-silent-alarm-knob-as-touch-sensor-with-telegram-su
// #
// # Code by https://github.com/AWSW-de
// #
// # Released under license: GNU General Public License v3.0: https://github.com/AWSW-de/Silent-ALARM-knob-touch-sensor-with-Telegram-message-support/blob/main/LICENSE
// #
// #######################################################################################################################################################
/*
      ___           ___           ___           ___                    ___                       ___       ___           ___           ___                    ___           ___       ___           ___           ___               
     /\  \         /\__\         /\  \         /\__\                  /\  \          ___        /\__\     /\  \         /\__\         /\  \                  /\  \         /\__\     /\  \         /\  \         /\__\              
    /::\  \       /:/ _/_       /::\  \       /:/ _/_                /::\  \        /\  \      /:/  /    /::\  \       /::|  |        \:\  \                /::\  \       /:/  /    /::\  \       /::\  \       /::|  |             
   /:/\:\  \     /:/ /\__\     /:/\ \  \     /:/ /\__\              /:/\ \  \       \:\  \    /:/  /    /:/\:\  \     /:|:|  |         \:\  \              /:/\:\  \     /:/  /    /:/\:\  \     /:/\:\  \     /:|:|  |             
  /::\~\:\  \   /:/ /:/ _/_   _\:\~\ \  \   /:/ /:/ _/_            _\:\~\ \  \      /::\__\  /:/  /    /::\~\:\  \   /:/|:|  |__       /::\  \            /::\~\:\  \   /:/  /    /::\~\:\  \   /::\~\:\  \   /:/|:|__|__           
 /:/\:\ \:\__\ /:/_/:/ /\__\ /\ \:\ \ \__\ /:/_/:/ /\__\          /\ \:\ \ \__\  __/:/\/__/ /:/__/    /:/\:\ \:\__\ /:/ |:| /\__\     /:/\:\__\          /:/\:\ \:\__\ /:/__/    /:/\:\ \:\__\ /:/\:\ \:\__\ /:/ |::::\__\          
 \/__\:\/:/  / \:\/:/ /:/  / \:\ \:\ \/__/ \:\/:/ /:/  /          \:\ \:\ \/__/ /\/:/  /    \:\  \    \:\~\:\ \/__/ \/__|:|/:/  /    /:/  \/__/          \/__\:\/:/  / \:\  \    \/__\:\/:/  / \/_|::\/:/  / \/__/~~/:/  /          
      \::/  /   \::/_/:/  /   \:\ \:\__\    \::/_/:/  /            \:\ \:\__\   \::/__/      \:\  \    \:\ \:\__\       |:/:/  /    /:/  /                    \::/  /   \:\  \        \::/  /     |:|::/  /        /:/  /           
      /:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /              \:\/:/  /    \:\__\       \:\  \    \:\ \/__/       |::/  /     \/__/                     /:/  /     \:\  \       /:/  /      |:|\/__/        /:/  /            
     /:/  /       \::/  /       \::/  /       \::/  /                \::/  /      \/__/        \:\__\    \:\__\         /:/  /                               /:/  /       \:\__\     /:/  /       |:|  |         /:/  /             
     \/__/         \/__/         \/__/         \/__/                  \/__/                     \/__/     \/__/         \/__/                                \/__/         \/__/     \/__/         \|__|         \/__/              
      ___           ___           ___           ___                    ___           ___           ___           ___           ___                    ___           ___           ___           ___           ___           ___     
     /\__\         /\__\         /\  \         /\  \                  /\  \         /\  \         /\__\         /\  \         /\__\                  /\  \         /\  \         /\__\         /\  \         /\  \         /\  \    
    /:/  /        /::|  |       /::\  \       /::\  \                 \:\  \       /::\  \       /:/  /        /::\  \       /:/  /                 /::\  \       /::\  \       /::|  |       /::\  \       /::\  \       /::\  \   
   /:/__/        /:|:|  |      /:/\:\  \     /:/\:\  \                 \:\  \     /:/\:\  \     /:/  /        /:/\:\  \     /:/__/                 /:/\ \  \     /:/\:\  \     /:|:|  |      /:/\ \  \     /:/\:\  \     /:/\:\  \  
  /::\__\____   /:/|:|  |__   /:/  \:\  \   /::\~\:\__\                /::\  \   /:/  \:\  \   /:/  /  ___   /:/  \:\  \   /::\  \ ___            _\:\~\ \  \   /::\~\:\  \   /:/|:|  |__   _\:\~\ \  \   /:/  \:\  \   /::\~\:\  \ 
 /:/\:::::\__\ /:/ |:| /\__\ /:/__/ \:\__\ /:/\:\ \:|__|              /:/\:\__\ /:/__/ \:\__\ /:/__/  /\__\ /:/__/ \:\__\ /:/\:\  /\__\          /\ \:\ \ \__\ /:/\:\ \:\__\ /:/ |:| /\__\ /\ \:\ \ \__\ /:/__/ \:\__\ /:/\:\ \:\__\
 \/_|:|~~|~    \/__|:|/:/  / \:\  \ /:/  / \:\~\:\/:/  /             /:/  \/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \  \/__/ \/__\:\/:/  /          \:\ \:\ \/__/ \:\~\:\ \/__/ \/__|:|/:/  / \:\ \:\ \/__/ \:\  \ /:/  / \/_|::\/:/  /
    |:|  |         |:/:/  /   \:\  /:/  /   \:\ \::/  /             /:/  /       \:\  /:/  /   \:\  /:/  /   \:\  \            \::/  /            \:\ \:\__\    \:\ \:\__\       |:/:/  /   \:\ \:\__\    \:\  /:/  /     |:|::/  / 
    |:|  |         |::/  /     \:\/:/  /     \:\/:/  /              \/__/         \:\/:/  /     \:\/:/  /     \:\  \           /:/  /              \:\/:/  /     \:\ \/__/       |::/  /     \:\/:/  /     \:\/:/  /      |:|\/__/  
    |:|  |         /:/  /       \::/  /       \::/__/                              \::/  /       \::/  /       \:\__\         /:/  /                \::/  /       \:\__\         /:/  /       \::/  /       \::/  /       |:|  |    
     \|__|         \/__/         \/__/         ~~                                   \/__/         \/__/         \/__/         \/__/                  \/__/         \/__/         \/__/         \/__/         \/__/         \|__|                                                                     
*/

// #######################################################################################################################################################
// # Includes:
// # You will need to add the following libraries to your Arduino IDE to use the project:
// # - UniversalTelegramBot           // by witnessmenow:             https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot
// # - ArduinoJson                    // by arduino:                  https://github.com/arduino-libraries/Arduino_JSON
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <ArduinoJson.h>
#include "settings.h"


// #######################################################################################################################################################
// General program settings:
String programname = "Silent ALARM KNOB as touch sensor";


// #######################################################################################################################################################
// # Code version:
String codeversion = "V1.0.1";


// #######################################################################################################################################################
// WiFi, Telegram and other settings:
WiFiClientSecure secured_client;
UniversalTelegramBot bot(BOTtoken, secured_client);
#define Threshold 40  // Raise the value for more touch sensitivity
RTC_DATA_ATTR int bootCount = 0;
touch_pad_t touchPin;


// #######################################################################################################################################################
// Startup function to be startet once only:
void setup() {
  if (debugmode) {
    Serial.begin(115200);
    delay(1000);
    Serial.println("######################################################");
    Serial.println("# Starting: " + programname + " - " + codeversion);
    Serial.println("######################################################");
    Serial.println(" ");
  }

  // Increment boot number and print it every reboot
  ++bootCount;
  if (debugmode) Serial.println("Boot number: " + String(bootCount));

  // Print the wakeup reason for ESP32 and touchpad too
  print_wakeup_reason();

  // Setup interrupt on Touch Pad 0 (GPIO4)
  touchAttachInterrupt(T0, callback, Threshold);

  //Configure Touchpad as wakeup source
  esp_sleep_enable_touchpad_wakeup();

  // Go to sleep now:
  BeginSleep();
}


// #######################################################################################################################################################
// Loop function to be used during runtime:
void loop() {
  // not used to save battery power
}


// #######################################################################################################################################################
// Connect to WiFi:
void ConnectToWiFi() {
  configTime(0, 0, knobtimeserver);
  secured_client.setCACert(TELEGRAM_CERTIFICATE_ROOT);
  if (debugmode) {
    Serial.print("Connecting to Wifi: ");
    Serial.println(ssid);
  }
  WiFi.disconnect();
  delay(150);
  WiFi.setHostname(wifiHostname);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    if (debugmode) Serial.print(".");
    delay(500);
  }
  if (debugmode) {
    Serial.println(".");
    Serial.print("Connected to Wifi: ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    Serial.print("Hostname: ");
    Serial.println(wifiHostname);
  }
}


// #######################################################################################################################################################
// Disconnect from WiFi:
void DisConnectFromWiFi() {
  if (debugmode) {
    Serial.print("Disconnecting from Wifi: ");
    Serial.println(ssid);
  }
  WiFi.disconnect();
  delay(150);
}


// #######################################################################################################################################################
// Method to print the reason by which ESP32 has been awaken from sleep:
void print_wakeup_reason() {
  esp_sleep_wakeup_cause_t wakeup_reason;
  wakeup_reason = esp_sleep_get_wakeup_cause();
  switch (wakeup_reason) {
    case ESP_SLEEP_WAKEUP_EXT0:
      {
        if (debugmode) Serial.println("Wakeup caused by external signal using RTC_IO");
        break;
      }
    case ESP_SLEEP_WAKEUP_EXT1:
      {
        if (debugmode) Serial.println("Wakeup caused by external signal using RTC_CNTL");
        // esp_sleep_enable_ext1_wakeup(BUTTON_PIN_BITMASK1, ESP_EXT1_WAKEUP_ALL_LOW); //ESP_EXT1_WAKEUP_ANY_HIGH
        break;
      }
    case ESP_SLEEP_WAKEUP_TIMER:
      {
        if (debugmode) Serial.println("Wakeup caused by timer");
        break;
      }
    case ESP_SLEEP_WAKEUP_TOUCHPAD:
      {
        if (debugmode) Serial.println("Wakeup caused by touchpad - Send Telegram message...");
        ConnectToWiFi();
        bot.sendMessage(CHAT_ID, "Touch action number " + String(bootCount - 1) + " detected.", "");
        DisConnectFromWiFi();
        break;
      }
    case ESP_SLEEP_WAKEUP_ULP:
      {
        if (debugmode) Serial.println("Wakeup caused by ULP program");
        break;
      }
    default:
      {
        if (debugmode) Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
        // esp_sleep_enable_ext1_wakeup(BUTTON_PIN_BITMASK1, ESP_EXT1_WAKEUP_ALL_LOW);
        ConnectToWiFi();
        bot.sendMessage(CHAT_ID, "Starting: " + programname + " - " + codeversion + ". Startup #: " + String(bootCount), "");
        DisConnectFromWiFi();
        break;
      }
  }
}


// #######################################################################################################################################################
// Deep sleep:
// const unsigned long long UpdateInterval = 12 * ((60LL * 60LL - 5) * 1000000LL);  // Update delay in microseconds
void BeginSleep() {
  // esp_sleep_enable_timer_wakeup((UpdateInterval)*1000000LL);
#ifdef BUILTIN_LED
  pinMode(BUILTIN_LED, INPUT);      // In case it's on, turn output off, sometimes PIN-5 on some boards is used for SPI-SS
  digitalWrite(BUILTIN_LED, HIGH);  // In case it's on, turn LED off, as sometimes PIN-5 on some boards is used for SPI-SS
#endif
  if (debugmode) Serial.println("Start deep sleep... ");
  esp_deep_sleep_start();
  Serial.println("This should never been printed... ");
}


// #######################################################################################################################################################
void callback() {
  //placeholder callback function
}