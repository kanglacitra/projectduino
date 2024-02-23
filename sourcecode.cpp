  client.setNoDelay(false);
  while (client.connected() || client.available()) {
    if (client.available()) {
      c = client.read();
      if (c == '{' || c == '[') {
        isBody = true;
      }
      if (isBody) {
        parser.parse(c);
      }
    }


void MetOfficeClient::whitespace(char c) {
  Serial.println("whitespace");
}

void MetOfficeClient::startDocument() {
  Serial.println("start document");
}

void MetOfficeClient::key(String key) {
  currentKey = String(key);
}
 if (currentKey == "F") {
    feelsLikeTemp = value;
  }
  if (currentKey == "G") {
    windGust = value;
  }
