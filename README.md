Sobre o Projeto
Este projeto consiste em um jogo de cartas do tipo Super Trunfo, criado em linguagem C. O jogador preenche os dados de duas cidades brasileiras e o sistema compara atributos como população, PIB, área, entre outros, para definir a cidade vencedora em três rodadas.

O programa é escrito na linguagem C e pode ser compilado com o compilador gcc.
Para compilar o código, utilize o seguinte comando no terminal:
gcc super_trunfo.c -o super_trunfo
Após a compilação, execute o programa com o comando:
./super_trunfo

Ao executar o programa, o usuário deverá inserir os dados da Carta 1 e da Carta 2.
Serão solicitadas as seguintes informações para cada carta:

Nome do estado

Código da carta

Nome da cidade

População

Área em km²

PIB

Número de pontos turísticos

Após a entrada dos dados, o programa irá calcular os seguintes indicadores:

Densidade Populacional (população / área)

PIB per Capita (PIB / população)

Super Poder (soma ponderada dos atributos)

Em seguida, serão realizadas três rodadas de comparação, nas quais o usuário deverá escolher qual atributo deseja comparar entre as cartas.


Atributos Disponíveis para Comparação
Durante cada rodada, o jogador escolherá um dos seguintes atributos para comparar:

População → Ganha quem tiver o maior valor

Área → Ganha quem tiver o maior valor

PIB → Ganha quem tiver o maior valor

Pontos turísticos → Ganha quem tiver o maior valor

Densidade populacional → Ganha quem tiver o menor valor

PIB per capita → Ganha quem tiver o maior valor

Super Poder → Ganha quem tiver o maior valor (é um índice calculado a partir de todos os dados)

