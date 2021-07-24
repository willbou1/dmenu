/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static double opacity = 1.0;                /* -o  option; defines alpha translucency        */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centertext = 0;
static int closeNoLines = 1;
static const unsigned int border_width = 5;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monospace:size=20",
	"JoyPixels:pixelsize=20:antialias=true:autohint=true"
};
static const char *prompt      = ":";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#dbdbdb", "#000000" },
	[SchemeSel] = { "#dbdbdb", "#333333" },
	[SchemeOut] = { "#dbdbdb", "#000000" },
};
static const unsigned int baralpha = 210;
static const unsigned int borderalpha = /*100*/1;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

