# Trial
<h1> Sample Game Practice </h1>
<h2>Guess The Number Game</h2>
<p>Sure! Let's create a simple and interesting C++ game: Guess the Number. In this game, the computer will randomly choose a number between 1 and 100, and the player will try to guess it. The computer will give hints whether the guess is too high or too low until the player guesses the correct number.</p>
<ol>
  <li>Random Number Generation</li>
  <p>The srand() function initializes the random number generator with the current time as the seed. The rand() % 100 + 1 expression generates a random number between 1 and 100.</p>
  <li>Main Game Loop</li>
  <p>This loop continues until the player guesses the correct number. After each guess, the program provides feedback on whether the guess was too low, too high, or correct. The number of attempts is also tracked and displayed when the player guesses the number correctly.</p>
</ol>
