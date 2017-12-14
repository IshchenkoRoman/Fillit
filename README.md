# Fillit

Your executable must take only one parameter, a file which contains a list of Tetriminos
to assemble. This file has a very specific format : every Tetrimino must exactly fit in a
4 by 4 chars square and all Tetrimino are **separated by an newline each.**
If the number of parameters sent to your executable is not 1, your program must display
its usage and exit properly. If you don’t know what a usage is, execute the command
cp without arguments in your Shell. It will give you an idea. Your file should contain
between 1 and 26 Tetriminos.

The description of a Tetriminos must respect the following rules :
  1. Precisely 4 lines of 4 characters, each followed by a new line (well... a 4x4 square).
  2. A Tetrimino is a classic piece of Tetris composed of 4 blocks.
  3. Each character must be either a block character(’#’ ) or an empty character (’.’).
  4. Each block of a Tetrimino must touch at least one other block on any of his 4 sides (up, down, left and right).

## A few examples of valid descriptions of Tetriminos:
```
.... .... #### .... .##. .... .#.. .... ....
..## .... .... .... ..## .##. ###. ##.. .##.
..#. ..## .... ##.. .... ##.. .... #... ..#.
..#. ..## .... ##.. .... .... .... #... ..#.
```
## A few examples of invalid descriptions of Tetriminos
```
#### ...# ##... #.  .... ..## #### ,,,,  .HH.
...# ..#. ##... ##  .... .... #### ####  HH..
.... .#.. ....  #.  .... .... #### ,,,,  ....
.... #... ....      .... ##.. #### ,,,,  ....
```
## How describe the Tetriminos
  Because each Tetrimino fills only 4 of the 16 available boxes, it is possible to describe
the same Tetrimino in multiple ways. However, a rotated Tetrimino describes a different
Tetrimino from the original, in the case of this project. This means no rotation is possible
on a Tetrimino, when you will arrange it with the others.

*Those Tetriminos are then perfectly equivalents on every aspect :*
```
##.. .##. ..## .... .... ....
#... .#.. ..#. ##.. .##. ..##
#... .#.. ..#. #... .#.. ..#.
.... .... .... #... .#.. ..#.
```

*These 5 Tetriminos are, for their part, 5 distincts Tetriminos on every aspect :*
```
##.. .### .... .... ....
#... ...# ...# .... .##.
#... .... ...# #... .##.
.... .... ..## ###. ....
```

**Finally, here is an example of a valid file your program must resolve:**
```
$> cat -e valid_sample.fillit
...#$
...#$
...#$
...#$
$
....$
....$
....$
####$
$
.###$
...#$
....$
....$
$
....$
..##$
.##.$
....$
$>
```
## How to run

```
make
./fillit fileWithData
```
