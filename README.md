# CookieClicker
https://orteil.dashnet.org/cookieclicker/

# Goal:
Create an algorithm to find the absolute most optimal moves (purchases) in the game Cookie Clicker based on price-cookie output

# More Details:
This game has many different types of aspects to keep in mind aside from the raw price-cookie production ratio, such as opportunity cost, upgrading to the next tier, overall upgrades, and selling current assets.  The current spreadsheet I have been using did not take into account most of these things, so this algorithm should do so.

# Challenges:
* The cost per cookie producer increase as you buy more.  It does not appear obvious exactly how they increase, so I must either reverse engineer the formula that determines the price increase, input the new prices manually (undesirable), or interface with the game (most desirable)
* Interfacing with the game
  * Get new prices as things change
  * Automatically click the cookie
  * Automatically purchase optimal cookie manufacturer
* Allow expansion to other similar games (Like tangerine tycoon)
