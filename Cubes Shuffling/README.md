# Cubes-Shuffling

- <h6> <center> Time limit per test 2 second </center> </h6>
- <h6> <center> Memory limit per test 256 megabytes </center> </h6>
- <h6> <center> input: cubes.in </center> </h6>
- <h6> <center> output: standard output </center> </h6>

It’s Friday, and unfortunately the curfew starts at 7 pm today. **Bakkar** and **Maymona** are very bored as they won’t be able to go out today. They decided to stay at home and try to do anything interesting to entertain themselves. They searched in their old toys boxes for puzzles or games they could play, interestingly they found some cubes that are numbered with random numbers. They started to shuffle the cubes boringly in a random way to see what numbers they can make.

**Maymona** then had an interesting idea, after shuffling the cubes in a row form, he started to sum up the sub-ranges of the cubes. for example if **Maymona** & **Bakkar** has 3 cubes numbered (1, 2, 3) they can then form 6 sub-ranges which are `{ [1], [2], [3], [1,2], [2,3], [1,2,3] }`. Summing these sub-ranges `{ 1, 2, 3, 3, 5, 6 }` we get a total sum of `20`.

**Maymona** called this game ‘**Cubes Shuffling**’ but **Bakkar** was not completely satisfied so he decided to make the game more interesting. He told **Maymona** they will take turns in shuffling the cubes and the first one who makes the shuffle with the minimum total sum of the sub-ranges would then be the winner.

**Maymona** & **Bakkar** started playing; and after many turns of randomly shuffling the cubes, Bakkar noticed that he can get the minimum shuffle in just one turn.

As you are a friend of **Maymona** you would like to help Maymona know the secret behind {Bakkar’s} idea so you decided to write a program that given the cubes you would produce the arrangement that yields the minimum total sum of the sub-ranges. If multiple arrangements with the minimum total sum exists; you would produces the lexicographical smallest arrangement. An arrangement `A` is lexicographically smaller than an arrangement `B` with the same length if the first position they differ in is `i` and `Ai < Bi`.

<h5>Input</h5>

Your program will be tested on one or more test cases. The first line of the input will be a single integer `T`, 
the number of test cases *(1  ≤  T  ≤  1000)*. Followed by `T` test cases, each test case will consist of *2 lines.* The first will contain a single integer `N`, 
the number of cubes available in the toys boxes *(1  ≤  N  ≤  100)*. The second line will contain `N` integers, representing the values written on the cubes 
*(1  ≤  values  ≤  109)*.

<h5>Output</h5>

For each test case print a two lines. The first line contains "Case n:" (without the quotes) where n is the test case number (starting from 1). 
The second line will consist of the values in the minimum arrangement that can be produced, space separated.

<h5>Example 1</h5>

<h6>Input</h6>

>2 <br>
3 <br>
1 2 3 <br>
5 <br>
4 5 2 1 3


<h6>Output</h6>

>Case 1: <br>
>2 1 3 <br>
>Case 2: <br>
>4 2 1 3 5 <br>


## Codeforces Link
[K. Cubes Shuffling](https://codeforces.com/gym/100283/problem/K)

