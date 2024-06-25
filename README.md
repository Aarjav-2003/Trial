<h1> Sample Game Practice </h1>
<h2>Guess The Number Game</h2>
<p>Sure! Let's create a simple and interesting C++ game: Guess the Number. In this game, the computer will randomly choose a number between 1 and 100, and the player will try to guess it. The computer will give hints whether the guess is too high or too low until the player guesses the correct number.</p>
<ol>
  <li><b>Random Number Generation</b></li>
  <p>The <b>srand()</b> function initializes the random number generator with the current time as the seed. The <b>rand() % 100 + 1</b> expression generates a random number between 1 and 100.</p>
  <li><b>Main Game Loop</b></li>
  <p>This loop continues until the player guesses the correct number. After each guess, the program provides feedback on whether the guess was too low, too high, or correct. The number of attempts is also tracked and displayed when the player guesses the number correctly.</p>
</ol>
<h3>Simple Instructions while Playing the Game</h3>
<p>When you run the program, it will prompt you to enter your guesses. Based on your input, it will provide feedback until you guess the correct number. </p>
#This simple game is an enjoyable way to demonstrate basic programming concepts like input/output, loops, and random number generation.
