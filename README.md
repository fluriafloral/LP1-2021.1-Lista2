# Trabalho 02: Programação usando o Padrão Iterator

Nestes exercícios iremos desenvolver uma série de Funções que representam algoritmos típicos para manipulação de vetores, assim
todas as funções receberão um _range_ que deve ser operado como argumento.

O principal objetivo deste exercício é praticar programação usando estruturas de abstração de alto nível, onde seu código não precisa
saber qual o tipo de dados ele está operando. Para fazer isso o nosso código precisa usar funções __template__ associadas com ponteiros.
Os __templates__ dão suporte à criação de funções genéricas, enquanto os ponteiros nos ajudam a definir o _range_ onde as operações serão
executadas.

O objetivo secundário é adquirir exeperiencia de programação na construção de bibliotecas de operações típicas em vetores, chamaremos essa
biblioteca de graal(Generic Array Algorithm Library). Através da experiencia de construir essa bibiliteca, iremos experimentar a importância da abstração
de dados e reusabilidade de código no desenvolvimento de aplicações.
<!--
In this exercise you should develop a series of functions that represent typical algorithms for
array manipulation. Because we are still following an imperative programming paradigm, all
functions should receive the range we wish to operate on as an argument.

The primary goal of this exercise is to practice a higher level of abstract programming,
where our code does not need to know in advance which type of data we are operating on. To
do that our code requires the use of function template in association with function pointers.
The former supports the passage of generic arguments to functions, whereas the latter helps
us to defer some decisions to the client by allowing them to provide the code to operate on
data.

The secondary objective is to acquire programming experience by building a library of
typical algorithms on arrays, called graal —GeneRic Array Algorithms Library. By building
this generic library we want to demonstrate the importance of programming abstraction and
code reuse while developing an application in the next exercise.
-->
