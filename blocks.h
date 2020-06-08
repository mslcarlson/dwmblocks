//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"", "~/.local/bin/statusbar/archupdates", 60, 1},
	{"", "~/.local/bin/statusbar/wifi",	0, 2},
	{"", "~/.local/bin/statusbar/volume",     0, 3},
	{"", "~/.local/bin/statusbar/battery",     5, 4},	
	{"", "~/.local/bin/statusbar/time",     5, 5},
	{"", "~/.local/bin/statusbar/date", 5, 6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
