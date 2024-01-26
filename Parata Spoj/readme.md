<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PRATA - Roti Prata</title>
</head>
<body>

<h1>PRATA - Roti Prata</h1>

<h2>Problem Statement:</h2>
<p>IEEE is having its AGM next week, and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. The stall has L cooks (L<=50), and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes, 1 more prata in the next 2R minutes, 1 more prata in 3R minutes, and so on (he can only cook a complete prata). For example, if a cook is ranked 2, he will cook one prata in 2 minutes, one more prata in the next 4 mins, and one more in the next 6 minutes, hence in total 12 minutes, he cooks 3 pratas. In 13 minutes, he can cook only 3 pratas as he does not have enough time for the 4th prata. The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.</p>

<h2>Input:</h2>
<p>The first line tells the number of test cases. Each test case consists of 2 lines. In the first line of the test case, we have P, the number of pratas ordered. In the next line, the first integer denotes the number of cooks L, and L integers follow in the same line, each denoting the rank of a cook.</p>

<h2>Output:</h2>
<p>Print an integer which tells the number of minutes needed to get the order done.</p>

<h2>Example:</h2>
<pre>
Input:
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
</pre>

<p><strong>Note:</strong> This problem involves finding the minimum time required to cook a given number of pratas using a certain number of cooks, each with a specific rank. The program should output the minimum time for each test case.</p>

</body>
</html>
