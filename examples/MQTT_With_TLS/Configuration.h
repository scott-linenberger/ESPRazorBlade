#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// WiFi Configuration
#define WIFI_SSID "your_wifi_ssid_here"
#define WIFI_PASSWORD "your_wifi_password_here"

// MQTT over TLS Configuration
#define MQTT_USE_TLS
#define MQTT_BROKER "test.mosquitto.org"
#define MQTT_PORT 8883
#define MQTT_CLIENT_ID "ESPRazorBlade_TLS_Client"

// MQTT Authentication (optional for test.mosquitto.org; recommended for production)
#define MQTT_USERNAME "your_mqtt_username"
#define MQTT_PASSWORD "your_mqtt_password"

// CA certificate: see ca_cert.h - must define MQTT_CA_CERT

// Device Identity & Telemetry Configuration
#define DEVICE_ID "my-esp32"                     // Unique device identifier for MQTT topics
#define WIFI_SIGNAL_INTERVAL_MS 30000            // Publish WiFi RSSI every 30 seconds
#define TIME_ALIVE_INTERVAL_MS 60000            // Publish time alive every 60 seconds
#define FREE_HEAP_INTERVAL_MS 90000             // Publish free heap memory every 90 seconds

#endif // CONFIGURATION_H
