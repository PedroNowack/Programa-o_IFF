# Exercício 10: Entrada de Dados com scanf

A função `scanf` em C é usada para ler dados da entrada padrão (teclado) e armazená-los em variáveis:

- **Funcionamento**: O primeiro argumento de `scanf` é uma string de formato que define o tipo de dado esperado (ex: `%d` para inteiro, `%f` para float). Os argumentos seguintes são os endereços das variáveis onde os valores lidos serão armazenados.
- **Importância do Operador &**: O operador `&` é o operador de endereço. Ele é necessário para que a função `scanf` saiba exatamente onde, na memória do computador, ela deve salvar o valor digitado pelo usuário. Sem o `&`, a função tentaria usar o valor atual da variável como um endereço, o que geralmente causa erros de execução (como falha de segmentação).
