# Shell 01
## Ex01 - print_groups
```
#!/bin/bash
echo -e $(id -G -n $FT_USER | sed "s/ /,/g")

tr pour replace ` ` par `,`
```
## Ex02  - find_sh
```
#!/bin/bash

find . -name "*.sh" -print | sed "s/\.sh//" | sed "s/\.\///"
```
option -basename peut etre utile

## Ex03 - Count_files
```
#!/bin/bash
find . \( -type d -o -type f \) | wc -l
```
## Ex04 - MAC
```
#!/bin/bash
ifconfig | grep "ether "
```

L'espace est important !

## Ex05 - Can you create it
Il faut mettre un `\` avant chaque char special

## Ex06 - Skip
```
#!/bin/bash
ls -l | sed -n 'n;p'
```

`sed -n 'p:n'` pour inverser l'alternance des lignes