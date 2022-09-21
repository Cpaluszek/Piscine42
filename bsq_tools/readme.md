# Bsq

## Subject
- Print the biggest possible square in the given zone
    - Avoid obstacles

## Restrictions
- Allowed functions: `open` - `close` - `read` - `write` - `malloc` - `free` - `exit`

---

## Input File
- **9** = lines
- **.** = empty char
- **o** = obstacle
- **x** = Squrare print char
```
%>cat example_file
9.ox
...........................
....o......................
............o..............
...........................
....o......................
...............o...........
...........................
......o..............o.....
..o.......o................
%>./bsq example_file
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxxo..............
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxx...o...........
.....xxxxxxx...............
......o..............o.....
..o.......o................
```

## Map Generation - PERL script
```
#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
        if (int(rand($y) * 2) < $density) {
            print "o";
        }
        else {
            print ".";
        }
    }
    print "\n";
}
```
---
# Tout doux list
- [x] Makefile
    - [x] Executable = `bsq`
    - [x] Check si recompile bien la lib
        - `-Iinclude`
    - [x] essayer de remplacer `*`
    - [x] Remove Sanitize

### Program
- [x] REMOVE PRINTF
- [x] Get program arguments
    - [x] File path
- [x] Read file
- [x] Check if file is valid
    - [x] Same length on all lines
        - [x] '\n' at the end of each line
    - [x] Minimum size = [ 1 ; 1 ]
    - [x] Only char from 1st line of file (ex: `.` - `o`)
    - [x] 1st line of file correct
        - [x] 1 number
        - [x] 3 different chars
        - [x] only printable chars -> ???
- [x] If file invalid -> print `map error\n` sur la **sortie erreur**
    - [x] Go to next file
- [x] Find the biggest square
    - [x] If multiples squares of the same size 
        - [x] the one nearest to top, then nearest to left will be print
- [x] Si aucun argument
    - [x] recup via |
- [x] protect close




