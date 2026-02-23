#ifndef CA_CERT_H
#define CA_CERT_H

/*
 * CA certificate for MQTT broker (PEM format).
 * Replace with your broker's CA certificate.
 *
 * For test.mosquitto.org: download mosquitto.org.crt from
 * https://test.mosquitto.org/ssl/ and paste the PEM content here.
 *
 * For your own broker: obtain the CA cert from your broker's TLS chain.
 *
 * Below: Eclipse Mosquitto test root CA (valid for test.mosquitto.org).
 * For other brokers, replace with your broker's CA cert - this cert will
 * not work for brokers outside the Eclipse Mosquitto test infrastructure.
 */
#define MQTT_CA_CERT "-----BEGIN CERTIFICATE-----\n" \
  "MIID0jCCArqgAwIBAgIUPWZteXB28AsU7emgSEDG3w7zqd8wDQYJKoZIhvcNAQEL\n" \
  "BQAwcjELMAkGA1UEBhMCR0IxEzARBgNVBAgMCkRlcmJ5c2hpcmUxDjAMBgNVBAcM\n" \
  "BURlcmJ5MRowGAYDVQQKDBFNb3NxdWl0dG8gUHJvamVjdDEQMA4GA1UECwwHVGVz\n" \
  "dGluZzEQMA4GA1UEAwwHUm9vdCBDQTAeFw0yNTA3MDcyMjI3MjhaFw0zNTA3MDUy\n" \
  "MjI3MjhaMHIxCzAJBgNVBAYTAkdCMRMwEQYDVQQIDApEZXJieXNoaXJlMQ4wDAYD\n" \
  "VQQHDAVEZXJieTEaMBgGA1UECgwRTW9zcXVpdHRvIFByb2plY3QxEDAOBgNVBAsM\n" \
  "B1Rlc3RpbmcxEDAOBgNVBAMMB1Jvb3QgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IB\n" \
  "DwAwggEKAoIBAQDyRXMUPa/pLzERcaE+/TkYmiH83MfGhJ2eSeEqY+vjuzePT/p3\n" \
  "GDLuM5IcprukEuif+4HbvLQC8zIdNjO+Xwb/Acg7njQfNTV9b8IzOn3r/k4ZcB2G\n" \
  "rK7Kae338xAmkTYjACrTUnbUsdRmbRKZZCIk69fxlC4xhCp+7sZyKc4FOkGI4dOe\n" \
  "TVkLN3DQflzR7mF78yCgbr2HBXoF2Eazv008YqTDS2gL3JbXIpt2H7Z8fNZHupbk\n" \
  "B0gydAxmMSUnwBeXLkVkKFOJNDjjGtY4nDKOpuirEx8K0GYs6Mo0iFTwi4IDxjzM\n" \
  "jP5uarn1hx5bAFpuN1r1jbzb0iopZAOhmG2TAgMBAAGjYDBeMB0GA1UdDgQWBBRP\n" \
  "Vu26VxJGE8+W4yzBkWRpW5rnBTAfBgNVHSMEGDAWgBRPVu26VxJGE8+W4yzBkWRp\n" \
  "W5rnBTAPBgNVHRMBAf8EBTADAQH/MAsGA1UdDwQEAwIBBjANBgkqhkiG9w0BAQsF\n" \
  "AAOCAQEAjejhP+g9DbB/vgjUJbk5sRgBeq0sX8ghtq1B+LEgKV+l/h9dmsavChjF\n" \
  "RWzEhfxK83iMJX8dAXbloYSgmXNSmh/7RfXQEBPbwzD9CyZXWa+HC4Rfv0YGvdua\n" \
  "liyXVxHiND4wGiv/GyTOcGJ9P5zjB+svo7rnIHvC6vJyo0hp17AuBSZDWBWt096U\n" \
  "QHwJ3DrLY09OpMwfLZaduEzH9Vpf+rkQrTAo0/jSmhCDPBtLx/c+PKptUiOjvsuc\n" \
  "DlaKBh7s5OBjGDUUqWDmFhcQCEy4eg0KDaAfCUrjoXFK4yf+TAxVpNBCoUCaGOqk\n" \
  "GvK7TZAfHoGSAxTuls/Y0N/StPSojw==\n" \
  "-----END CERTIFICATE-----\n"

#endif // CA_CERT_H
