# Comunicação Serial Arduino - Simulink

Este repositório apresenta os códigos relacionados ao envio de informações do Arduíno para o Simulink, via comunicação serial. O Arduino envia valores inteiros para o Simulink, que os 
exibe em tempo real. Os códigos realizam as seguintes funcionalidades:

## Arduino (Código Arduino)

### Propósito:
Este é o código Arduino configura a comunicação serial e envia valores inteiros para o Simulink.

### Funcionamento:
1. Inicia a comunicação serial a 115200 bauds.
2. No loop principal envia dois valores inteiros (8 e 12) com um intervalo de 1 segundo entre eles.
3. Envia os valores inteiros para o Simulink por meio da função `writeToSimulink`.

## Simulink (Modelo Simulink)

### Propósito:
O modelo Simulink é projetado para receber os valores inteiros enviados pelo Arduino, via comunicação serial, e os exibe no modelo.

### Funcionamento:
1. Utiliza blocos Simulink para receber os dados do Arduino.
2. Esses dados são recebidos por meio do bloco "Serial Recieve".
3. Os dados são mostrados por meio do bloco "Display".

Obs: Para a comunicação serial é necessário utilizar a biblioteca "Instrument Control Toolbox", caso você não tenha, é necessário instalar.

## Uso:
1. Carregue o código Arduino no Arduino.
2. Execute o modelo Simulink no ambiente do Simulink.
3. O Simulink recebe os dados do Arduino via comunicação serial.
4. O Simulink interpreta esses dados e exibe eles no modelo.

Lembre-se de configurar corretamente a porta COM, a taxa de baud e o hardware no Simulink e no Arduino para garantir que a comunicação ocorra sem problemas.

Esperamos que esses códigos sejam úteis para entender e iniciar a comunicação serial entre o Simulink e o Arduino.

Para qualquer dúvida ou problema, sinta-se à vontade para entrar em contato ou contribuir para este repositório.

