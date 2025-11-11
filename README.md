💰 Calculadora de Juros Simples em C
📖 Descrição Geral
O presente projeto consiste num programa desenvolvido em linguagem C, cujo objetivo é calcular o saldo final de uma aplicação financeira após a aplicação de uma taxa de juros simples.
O utilizador insere o saldo inicial, e o programa calcula automaticamente o valor final, considerando uma taxa de juros fixa de 4,5%.
Este projeto tem caráter educativo e demonstrativo, sendo adequado para estudantes de programação e introdução à linguagem C.
🎯 Objetivos
Implementar um programa funcional em C.
Aplicar o conceito de juros simples através de uma fórmula matemática.
Promover a compreensão do funcionamento de entrada e saída de dados (scanf e printf).
Exibir resultados formatados com precisão decimal.
⚙️ Funcionamento do Programa
Após a execução, o utilizador é solicitado a introduzir o valor do saldo inicial.
Em seguida, o programa realiza o cálculo do saldo final com base na seguinte fórmula:
Saldo Final
=
Saldo Inicial
×
(
1
+
Taxa de Juros
100
)
Saldo Final=Saldo Inicial×(1+ 
100
Taxa de Juros
​	
 )
Finalmente, o resultado é apresentado no ecrã com duas casas decimais.
🧩 Estrutura do Código
O programa encontra-se num único ficheiro principal:
.
├── main.c
└── README.md
Componentes principais:
Declaração das variáveis principais (saldo_inicial, saldo_final, TAXA_DE_JUROS);
Leitura do valor inserido pelo utilizador;
Cálculo do montante final;
Impressão do resultado formatado.
🧮 Código-Fonte
#include <stdio.h>

int main() {
    float saldo_inicial, saldo_final;
    const float TAXA_DE_JUROS = 4.5;

    printf("Insira o Saldo Inicial: ");
    scanf("%f", &saldo_inicial);

    saldo_final = saldo_inicial * (1 + TAXA_DE_JUROS / 100);

    printf("O Saldo Final com juros de %.2f%% é: %.2f\n", TAXA_DE_JUROS, saldo_final);
    return 0;
}
🧠 Exemplo de Execução
Insira o Saldo Inicial: 1000
O Saldo Final com juros de 4.50% é: 1045.00
🛠️ Compilação e Execução
Em Sistemas Linux / macOS
gcc main.c -o juros
./juros
Em Sistemas Windows (com MinGW ou TDM-GCC)
gcc main.c -o juros.exe
juros.exe
📚 Possíveis Extensões do Projeto
Permitir a introdução dinâmica da taxa de juros pelo utilizador.
Implementar o cálculo de juros compostos.
Adicionar validação de entradas (impedir valores negativos).
Criar um menu interativo com múltiplas opções de cálculo.
📄 Licenciamento e Direitos de Utilização
Este projeto é de utilização livre para fins educativos e académicos.
O código pode ser modificado, distribuído e utilizado para fins não comerciais, desde que seja mantida a devida referência ao autor original.
