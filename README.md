# Vigenere Cipher - C++
Criei interesse pela cifra de Vigenère após utilizá-la em um desafio, então resolvi aprender mais sobre ela. Neste repositório, você encontrará uma breve explicação de como a cifra funciona,
além de um algoritmo que criei em C++ para codificar e decodificar mensagens usando essa cifra.

## Introdução

A Cifra de Vigenere é uma técnica antiga de criptografia que utiliza substituições múltiplas com base em uma chave. Ela se baseia em uma matriz de 26x26 letras,
conhecida como tabela de Vigenere, que é construída pela rotação do alfabeto em cada linha.

## Tabela de Vigenere: 

<img src="https://danieldonda.com/wp-content/uploads/2021/01/image-4.png" width="400">

## Como codificar 

Para codificar uma palavra usando a **cifra de Vigenere**, precisamos de uma **chave.** A chave deve ser outra palavra, que pode ser repetida para igualar o número de caracteres da palavra original se necessário. 
Preparei um exemplo bem simples para ficar mais claro:

vamos codificar a palavra **lua**, utilizando a palavra **sol** como chave.

Pegamos a primeira letra de lua **(que é l)** e a primeira letra de sol **(que é s)**. Na tabela de Vigenere, encontramos a **interseção** da linha **l** com a coluna **s**, que nos dá a **letra D**.

Em seguida, pegamos a segunda letra de lua **(u)** e a segunda letra de sol **(o)**. A interseção da linha u com a coluna o resulta na **letra I**.

Então, pegamos a terceira letra de lua **(a)** e a terceira letra de sol **(l)**. A interseção da linha a com a coluna l nos dá a **letra L**.

Assim, a palavra lua é codificada como **DIL** usando a **chave sol**, e só pode ser decifrada ultilizando a senha **sol**.

