# Shell
- [Administrez un système Linux - OpenClassrooms](https://openclassrooms.com/fr/courses/7274161-administrez-un-systeme-linux)
- [Apprendre à utiliser le shell Bash - Pierre Giraud](https://www.pierre-giraud.com/shell-bash/
- [Shell](https://www.tuteurs.ens.fr/unix/shell/)

## Commandes shell
- `cd` - change directory
- `ls` - list
  - `l` - liste detaille
  - `a` = fichiers caches
  - `R` = recursive
- `mkdir`
- `rmdir`
- `touch`
  - option `t` pour modif time
- `rm`
  - option `r` pour recursive
  - option `f` pour force
- `mv`
- `cat`
- `tar`
  - `cpf` - compression
  - `xpf` decompression
- `ln` - link
  - `f` pour dossier
  - `s` pour symbolic

### Special characters

![](./imgs/Screen%20Shot%202022-08-31%20at%208.25.53%20AM.png)

### STDIN STDOUT
- `command < file` = STDIN
- `command > file` = STDOUT
- `command 2> file` = STDERR
- `command >> file` = append STDOUT to file
- `command > file 2>&1` = redirect STDOUT & STDERR to a file

### Pipes
Used to connect STDOUT to a STDIN
- `cat /etc/passwd | grep :0: | sort`
   

# Git
- `git status`
- `git add`
  - `git rm`
- `git commit -m`
- `git push`
- `git log`

# Scripting with Bash
- `#!/bin/sh`

## Variables
Assign: `MESSAGE="Hello World"`
Access: `echo $MESSAGE`

### Environment variables
export `VARNAME="some value"`

As a normal var, except all subprocesses can access it

## Parameters
- `$1` - `$2` ...
  - number of param = `$@`
  - all param = `$#`


## Test Operators
![](./imgs/Screen%20Shot%202022-08-31%20at%208.38.00%20AM.png)


---
## Sources
- [11 incantations magiques pour bash](https://www.youtube.com/watch?v=hQxcJBGy0Ak)
- [Apprendre a rediger des scripts sous bash](https://debian-facile.org/doc:programmation:shells:debuter-avec-les-scripts-shell-bash)
- [Le guide du debutant des scripts shell](https://azurplus.fr/le-guide-du-debutant-sur-les-scripts-shell-les-bases-2/)