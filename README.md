# atividade_advinhacao.c
Esse repositório tem como objetivo armazenar as respostas da atividade denominada "Jogo da Adivinhação", solicitada pelo professor da disciplina de Fundamentos de Programação (FUP), do curso Bacharelado em Ciência da Computação do IFCE de Maracanaú.

# SOBRE O JOGO DA ADIVINHAÇÃO
O Jogo da Adivinhação foi desenvolvido no decorrer das aulas de FUP, juntamente com o professor. Este é um jogo simples e divertido onde o jogador tenta adivinhar um número secreto escolhido aleatoriamente pelo sistema. O jogo permite que o jogador escolha os limites do intervalo no qual o número secreto estará contido e ajustar o nível de dificuldade,com base nessa informação é lhe dado um número limitado de tentativas para adivinhar o número secreto.
### Principais Características:
- O jogador escolhe os limites superior e inferior do intervalo para o número secreto.
- O jogador seleciona o nível de dificuldade: fácil, médio ou difícil.
- O jogador tem um número limitado de tentativas para adivinhar o número secreto, com base no nível de dificuldade escolhido.
- O jogo impede que o jogador insira o mesmo número repetidamente na mesma sequência.
- O jogador recebe dicas sobre se o chute foi maior ou menor do que o número secreto.
- O jogo informa o número de tentativas restantes e os pontos acumulados.
- Ao final do jogo, o jogador recebe uma mensagem de parabéns se adivinhar o número secreto ou uma mensagem de incentivo para tentar novamente.

# QUESTÕES
1. Hoje o jogo escolhe um número entre 0 e 99. Deixe o usuário escolher esse limite. Você precisa capturar esses dois números ele, e usá-los na hora de calcular o número randômico.

2. Temos ainda alguns números mágicos em nosso código. Use #defines para a quantidade de tentativas por níveis.

3. Ao terminar uma partida, pergunte para o usuário se ele quer jogar novamente. Se ele digitar “1”, significa que quer, então você deverá começar o jogo de novo. Para isso, você precisará usar mais um loop.

4. Não deixe o usuário jogar o mesmo número na sequência. Se ele jogou o número “2”, errou, e jogou novamente o “2”, avise-o de que ele já jogou esse número, e não conte como uma tentativa. Para isso, crie uma variável que guardará o “último número chutado”. (Não tente guardar todos os números chutados nesse momento. Aprenderemos como fazer isso mais para frente.)
