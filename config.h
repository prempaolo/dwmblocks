//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/statusbar/btc",							10,		7},

	{"", "~/.local/bin/statusbar/music",						10,		1},

	{"", "~/.local/bin/statusbar/memory",						10,		2},

	{"", "~/.local/bin/statusbar/cpu",							10,		3},

	{"", "~/.local/bin/statusbar/volume",						0,		4},

	{"", "~/.local/bin/statusbar/clock",						5,		5},

	{"", "~/.local/bin/statusbar/battery",					5,		6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
