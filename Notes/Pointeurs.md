[[C]]
# Pointeurs

```c
int n = 50;
int *p = &n;

printf("%i\n", p)  //Adresse de n = 0x...
printf("%i\n", *p) //Valeur de n = 50
```

On déclare un pointeur avec :
`type *nom_du_pointeur`
- on utilise à nouveau `*` pour déréférencer le pointeur et obtenir la valeur qu'il pointe

## Strings
```c
string s = "HI!";
char *p = &s;
```

On utilise le type char pour les pointeurs sur des strings.
- on incrémente le pointeur pour parcourir le tableau de char