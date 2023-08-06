LC2335Minimum Amount of Time to Fill Cups

Diego Aquino Montero, turma M1

1- lc2335aula.c é o código feito em aula mais a função main () (Esta versão do código não retorna o valor esperado para solucionar o problema)

2- lccasa2335.c é o código final feito em casa

Descrição do LeetCode: You have a water dispenser that can dispense cold, warm, and hot water. Every second, you can either fill up 2 cups with different types of water, or 1 cup of any type of water.

You are given a 0-indexed integer array amount of length 3 where amount[0], amount[1], and amount[2] denote the number of cold, warm, and hot water cups you need to fill respectively. Return the minimum number of seconds needed to fill up all the cups.

Casos testados: Todos os casos do LeetCode estão funcionando. Casos criados por mim no Vscode também funcionam

Como funciona meu código:

1 - São criadas as variáveis do tipo int C para contar a quantidade de copos preenchidos em um segundo e S para contar os segundos, inicializadas em 0.

2 - A função while(amount[0]>0 || amount[1]>0 || amount[2]>0) cria um loop que testa se ainda restam copos em amount[].

3 - Dentro do loop são usados 3 ifs para definir qual dos copos tem prioridade. o primeiro if garante que o amount[0] será decrementado apenas se o seu valor for maior que zero e maior ou igual ao valor em amount[2]. Isto garante que sempre que existirem valores em amount[0] e amount[2] o maior valor será reduzido entre os dois (se ainda existir um valor em amount[1]).

4 - O segundo if sempre ocorrerá enquanto o amount[1] for maior que zero.

5 - O terceiro if sempre ocorrerá enquanto o amount[2] for maior que zero e a variável C for diferente de 2, indicando que ou amount [0] ou amount [1] não foram alterados.

6 - Cada ciclo do loop incrementa o valor de S, indicando que um segundo completo foi efetuado.

7 - Por último o valor S é retornado quando todos os copos forem preenchidos.
