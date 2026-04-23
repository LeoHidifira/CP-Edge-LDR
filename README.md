# 🍷 Sistema de Monitoramento de Luminosidade - Vinheria Agnello

## 📖 Descrição do Projeto
Este projeto consiste no desenvolvimento de um sistema de monitoramento de luminosidade utilizando Arduino e um sensor LDR (Light Dependent Resistor).

O objetivo é simular um controle de iluminação para a Vinheria Agnello, garantindo que o ambiente esteja em condições ideais para armazenamento de vinhos.

O sistema realiza a leitura da luminosidade do ambiente e classifica o estado em três níveis:

- 🟢 Condição adequada → LED verde aceso  
- 🟡 Nível de alerta → LED amarelo aceso  
- 🔴 Condição crítica → LED vermelho aceso + buzzer sonoro  

Quando a condição é crítica, o buzzer emite um alerta sonoro (3 bipes) e repete após um intervalo de 2 segundos.

---

## ⚙️ Componentes Utilizados
- 1x Arduino Uno  
- 1x Sensor LDR  
- 3x LEDs (verde, amarelo e vermelho)  
- 1x Buzzer  
- Resistores (para LEDs e LDR)  
- Protoboard  
- Jumpers  

---

## 🔌 Funcionamento
O sensor LDR mede a intensidade da luz e envia um valor analógico para o Arduino (0 a 1023).

Com base nesse valor:

- LDR < 400 → Ambiente escuro (ideal)  
- 400 ≤ LDR ≤ 600 → Atenção  
- LDR > 600 → Excesso de luz (crítico)  

O sistema responde acionando LEDs e buzzer conforme o nível detectado.

---

## 🧠 Lógica do Sistema
- Leitura contínua do sensor LDR  
- Estrutura condicional (if/else) para classificação  
- Controle dos LEDs via portas digitais  
- Uso de tone() e noTone() para o buzzer  
- Loop contínuo com pequeno delay para estabilidade  

---

## 🖼️ Circuito
O circuito foi desenvolvido no Tinkercad.

Link do projeto:
https://www.tinkercad.com/things/5w2Yw8Jz7A7-epic-juttuli-fyyran?sharecode=ErXRdHLDjZ7BH234aG1bc8SlZnXCXp37r-COP1LHZkk

---

## 🚀 Como Executar o Projeto

### 1. Clonar o repositório
git clone: https://github.com/LeoHidifira/CP-Edge-LDR

### 2. Abrir o projeto
- Abra o arquivo .ino na Arduino IDE

### 3. Montar o circuito
- Conecte os componentes conforme o projeto

### 4. Enviar o código
- Conecte o Arduino ao computador
- Clique em Upload

### 5. Testar
- Cubra o sensor → LED verde  
- Luz média → LED amarelo  
- Luz forte → LED vermelho + buzzer  

---

## 📦 Dependências
- Arduino IDE  
- Funções padrão do Arduino (tone, digitalWrite, analogRead)  
- Simulador opcional: Tinkercad  

---

## 💡 Possíveis Melhorias
- Calibração dinâmica dos níveis de luz  
- Display LCD para visualização  
- Integração com IoT  
- Histórico de dados  