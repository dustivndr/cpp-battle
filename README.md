# Cowboy C++, Battle and Quiz Game

Simple ASCII battle and quiz game in C++, works in Windows/Linux Terminal (at least in Fedora, where I write the code).<br />
This is a small project created for fun and is not part of any university coursework.

**Currently In Progress**

## Gameplay

You're a Cowboy, wandering through vast land, encountering different bosses, ranging from the easy ones to the hardest ones.

The gameplay is simple; you move only forward, and at a random time, you will encounter a boss, starting from the easiest one.
The more bosses you discover, the harder the difficulty will be. You and the boss only have 2 choices: attack or defend.

### Attack

When you attack the boss, there's a chance for the attack to be critical (deals double damage) or 0 (attack fails).
Attacking an easy boss is 100% guaranteed to succeed (no fail attack).

#### Boosted Attack

This is where the quiz part is.<br />
You can double the attack damage by answering one quiz question correctly.
The Attack Booster can only be used once per battle. How long the effect will last depends on the boss's difficulty.

| Difficulty | Apply to  |
| :--------- | :-------: |
| Easy       | 1 move    |
| Medium     | 2 move    |
| Hard       | 4 move    |

A "move" refers to each time you choose to attack or defend.

- Every attack or defence action counts as one move.
- For example, if you encounter a medium boss and use the attack booster:
  - First move: attack (damage is doubled)
  - Second move: defend
  - Third move: attack (damage returns to normal)

### Defend

When defending, the player has a 50% chance to block all damage or reflect the boss's attack at them.
For hard bosses, only 50% of their attack damage is reflected when defending.

### Player's Health

While wandering (not in battle), the player's HP automatically increases by 1 point every second, up to a maximum HP limit.
