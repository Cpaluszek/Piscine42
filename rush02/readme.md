# Rush02

## Subject
- Makefile:
	- Executable name = `rush-02`
- Program:
	- Up to 2 arguments:
		- (1 arg) -> value to convert
		- (2args) -> (1)dictionnary & (2)value to convert
- Dictionnary:
	- `[a number][0 to n spaces]:[0 to n spaces][any printable characters]\n`
		- (ft_atoi) number -> same atoi as man

## Variables
- Program inputs
- Dictionnary -> **struct**(Value(STRING),Text=(STRING))
	- Array of structs
		- maybe 1/2/3 array to split [0-19]-[20-90]-[100-up]

## TODOs
- [ ] Makefile ->[tuto](https://www.youtube.com/watch?v=-riHEHGP2DU)
- [ ] Program
	- [ ] 1 arg only
	- [ ] 2 args -> custom dictionnary
	- [ ] Error detection -> return `Error\n`
		- Decimal value `0.0`
		- Dictionnary error -> return `Dict Error\n`
			- impossible to solve current value -> missing keys ???
			- double keys
	- [ ] Dictionnary parsing
		- [ ] atoi
		- [ ] trim spaces
		- [ ] manage empty lines in dictionnary
	- [ ] Manage `malloc` & `free`
	- [ ] Print the full string
