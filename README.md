# esp32-blynk
 Automação de relés usando o app Blynk com micro-controlador ESP-32

# Utilização:
- Bibliotecas necessárias:
Instale as bibliotecas posteriormente no seu sketch (caso esteja usando o Arduino IDE):
```c
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
```
- Configuração:
Preencha com as credenciais do seu template Blynk (id, nome e chave de autenticação).
Também utilize o nome e senha da sua rede wifi.
```c
#define BLYNK_TEMPLATE_ID "id do template"
#define BLYNK_TEMPLATE_NAME "nome do template"

char auth[] = "Sua chave de autenticação";
char ssid[] = "SSID da sua rede";
char pass[] = "Senha da sua rede";
```