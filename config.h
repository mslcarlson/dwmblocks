// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Command */	 /* Update Interval */	/* Update Signal */
    {"archupdates",  0,                     1},
	{"mail",         0,                     2},
	{"rss",          0,                     3}, 
	{"inet",	     1, 			        4},
	{"volume",     	 0, 			        5},
	{"battery",      1, 			        6},
	{"backlight",    0,                     7}, 
	{"clock",        1, 			        8},
	{"calendar",     1,                     9},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
