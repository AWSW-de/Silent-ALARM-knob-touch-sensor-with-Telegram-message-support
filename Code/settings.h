// #######################################################################################################################################################

// Wifi settings - replace with your network credentials
const char* ssid = "YOUR_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
const char* wifiHostname = "AWSW-Knob-Alarm";

// #######################################################################################################################################################

// Touch contact pin:
#define contactPin 0

// #######################################################################################################################################################

// NTP server settings:
#define knobtimeserver "pool.ntp.org"       // Note: The time server could be your local router too
#define knobtimeZone 2                      // 2 = Central European Time
#define knobtimeport 8888                   // Local port to listen for UDP packets

// #######################################################################################################################################################

// Telegram new BOT creation:
// In Telegram search user "BotFather" and use the "Start" button
// Then type: "/newbot" 
// Set a name for the new bot when requested
// Set a username for the new bot when requested
// Check the "Done! Congratulations" message for the line after "Use this token to access the HTTP API:" and add this line to the setting above here:
#define BOTtoken "XXXXXXXXXX:YYYYYYYYYYYYYYY-ZZZZZZZZZZZZZZZZZZZZ"
// Leave the "BotFather" and search for your new bot name. 
// Select your new created bot and use the "/start" command or the "Start"-button to activate the bot

// #######################################################################################################################################################

// Your chat id for your own Telegram messanger
// In Telegram search user "IDBot" and use the "Start" button
// Then type: "/getid"
// Copy your own Telegram ID and add this number to the setting above here:
#define CHAT_ID "1234512345"

// #######################################################################################################################################################

// Turn serial output messages on or off to save battery power:
#define debugmode 1

// #######################################################################################################################################################