# PRATICA.LED

🔆 Projeto Experimental: Controle de LED com Botão (Modo Alternância)

Neste experimento, o objetivo é construir um circuito simples em que um **botão** controla o **liga e desliga de um LED**. A cada toque, o LED muda de estado, funcionando como um **interruptor eletrônico**. Esse tipo de controle é muito usado em sistemas embarcados e automação, onde é necessário alterar o estado de um dispositivo por meio de uma única entrada.



 ⚡ Estrutura do Circuito

O sistema é formado por dois componentes principais:

* **Um botão tátil**, responsável pela entrada do comando.
* **Um LED**, que atua como saída visual do sistema.

O **Arduino** faz o papel de intermediário, lendo o estado do botão e atualizando o LED conforme necessário. O circuito aproveita o **resistor de pull-up interno** do microcontrolador, o que reduz o número de componentes externos e facilita a montagem.



🎛️ Entrada Digital — Botão Tátil

O botão é conectado ao **pino digital D5** do Arduino. O outro terminal do botão é ligado diretamente ao **GND (terra)**.
Quando configurado com o **pull-up interno**, o pino D5 permanece em **nível lógico alto (HIGH)** enquanto o botão não é pressionado.

Ao pressionar o botão, o circuito é fechado, e o pino passa para **nível lógico baixo (LOW)**.
Esse comportamento permite ao Arduino identificar claramente quando o botão foi acionado.

Essa técnica elimina a necessidade de um resistor externo de pull-down, deixando o circuito mais limpo e econômico.

 💡 Saída Digital — LED

O **LED** é o indicador de saída do sistema e mostra visualmente o estado atual do “interruptor”.

**Conexões:**

* O **pino D6** do Arduino é ligado a um **resistor de 220 Ω**.
* O resistor é conectado ao **ânodo (perna longa)** do LED.
* O **cátodo (perna curta)** do LED vai ao **GND**.

**Função do Resistor:**
O resistor atua como um **limitador de corrente**, garantindo que o LED não receba mais energia do que suporta. Sem ele, o LED queimaria rapidamente, e o pino do Arduino poderia ser danificado.

**Operação:**

* Quando o Arduino envia um sinal **HIGH** ao pino D6, o LED **acende**.
* Quando o sinal é **LOW**, o LED **apaga**.

---

🧠 Princípio de Funcionamento

O código do Arduino monitora continuamente o estado do botão.
Quando detecta que o botão foi pressionado, ele **inverte o estado anterior do LED** — se estava aceso, apaga; se estava apagado, acende.

Essa técnica é chamada de **toggle**, ou alternância, e é amplamente usada em projetos de interface com o usuário (como botões de ligar/desligar ou controle de modo).

🧾 Considerações Finais

Esse projeto demonstra de forma prática conceitos fundamentais da eletrônica digital:

* **Leitura de entradas digitais** (botão).
* **Atuação em saídas digitais** (LED).
* **Uso do resistor de pull-up interno** do Arduino.
* **Proteção de componentes** com resistores limitadores.







