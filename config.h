// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Command */	 /* Update Interval */	/* Update Signal */
        {"archupdates",  1,                     1},
	{"wifi",	 0, 			2},
	{"volume",     	 0, 			3},
	{"battery",      1, 			4},	
	{"clock",        1, 			5},
	{"calendar",     1,                     6},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
