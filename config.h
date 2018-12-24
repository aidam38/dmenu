/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "dwmcolors.h"
static const char *colors[SchemeLast][2] = {
		      /*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel] = { selfgcolor, selbgcolor },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
