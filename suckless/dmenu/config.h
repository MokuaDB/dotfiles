/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                     /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                   /* -c option; centers dmenu on screen */
static int min_width = 300;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"ShureTechMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*   		    fg         bg       */
	[SchemeNorm] = { "#af6df9", "#262335" },
	[SchemeSel] = { "#61E2FF", "#262335" },
	[SchemeSelHighlight] = { "#ffcc00", "#262335" },
	[SchemeNormHighlight] = { "#72f1b8", "#262335" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = { "#262335", "#72f1b8" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
