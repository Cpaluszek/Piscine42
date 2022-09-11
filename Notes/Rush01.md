# Rush 01

## Fonctionnement du programme
### Inputs
- /!\ Dois respecter scrupuleusement le format demandé
- ATOI
- Organiser les inputs
  - tableau de 6x6
    - 1ere et dernieres cellules sont CONSIGNES
    - Mettre des valeurs vides au coeur


### Errors
 1. format strict
    1. Tout ce qui n'est pas `1 - 2 - 3 - 4`
       1. il nous faut 16 chars
 2. Print `Error`


### Solution
1. print 4x4 integers
   1. *4* = 1 - 2 - 3 - 4
   2. *1* = 4 - X - X - X
      1. *2* en face = 4 - X - X - 3
   3. *RECURSION*
      1. S'il manque une seule case dans ligne ou colonne
      2. Si 3x même nombre dans grille -> si `countX = 3`
      3. On priorise les plus grands nombres => `3 avant 2`
      4. quand on a deux possibilitée on teste les deux si une seule fonctionne on remplis
         1. -> si les deux fonctionnent on remplis pas !!!
2. Si le resolveur n'y arrive pas -> `Error`

### Print
- Error
  - **OU**
- Solution

### Variables :
- count1, count2, count3, count4
- tableau [6][6]
  - Consignes =   [0 || 5][0 || 5]
  - Solution =    [1-4][1-4]
