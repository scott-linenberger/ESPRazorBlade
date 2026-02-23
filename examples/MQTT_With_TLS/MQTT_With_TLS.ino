/*
 * ESPRazorBlade MQTT With TLS Example
 *
 * This example demonstrates secure MQTT connection over TLS (port 8883)
 * with CA certificate verification and username/password authentication.
 *
 * Use this example when:
 * - Your MQTT broker requires encrypted connections (production)
 * - You need to connect over the internet securely
 * - You want to protect credentials and telemetry in transit
 *
 * Demonstrates:
 * - WiFi connection with automatic reconnection
 * - MQTT over TLS with CA certificate verification
 * - MQTT authentication (username/password)
 * - Built-in telemetry
 *
 * Setup Instructions:
 * 1. Open Configuration.h and set your WiFi and MQTT broker details
 * 2. Uncomment and set MQTT_USERNAME and MQTT_PASSWORD in Configuration.h
 * 3. Edit ca_cert.h and add your broker's CA certificate (PEM format)
 *    - For test.mosquitto.org: download from https://test.mosquitto.org/ssl/
 *    - For your broker: obtain the CA cert from your broker's TLS chain
 * 4. Upload to your ESP32 board
 * 5. Open Serial Monitor at 115200 baud
 *
 * Testing with Mosquitto (TLS):
 *   mosquitto_sub -h test.mosquitto.org -p 8883 -t "my-esp32/#" -v \
 *     --cafile mosquitto.org.crt -u <username> -P <password>
 */

#include "Configuration.h"
#include "ESPRazorBlade.h"

ESPRazorBlade razorBlade;

void setup() {
    Serial.begin(115200);
    delay(200);

    Serial.println();
    Serial.println("=== ESPRazorBlade MQTT With TLS Example ===");
    Serial.println();

    if (!razorBlade.begin()) {
        Serial.println("ERROR: Failed to initialize ESPRazorBlade.");
        Serial.println("Check Configuration.h and ca_cert.h.");
        while (true) {
            delay(1000);
        }
    }

    Serial.println("Connecting with MQTT over TLS...");
    unsigned long startTime = millis();
    while (!razorBlade.isWiFiConnected() || !razorBlade.isMQTTConnected()) {
        delay(500);
        Serial.print(".");

        if (millis() - startTime > 30000) {
            Serial.println();
            Serial.println("ERROR: Connection timeout!");
            Serial.println("Check WiFi, MQTT broker (port 8883), and ca_cert.h.");
            while (true) {
                delay(1000);
            }
        }
    }

    Serial.println();
    Serial.println("Connected successfully over TLS!");
    Serial.print("IP Address: ");
    Serial.println(razorBlade.getIPAddress());
    Serial.println();
    Serial.println("Setup complete! Telemetry publishing.");
    Serial.println();
}

void loop() {
    delay(100);
}
