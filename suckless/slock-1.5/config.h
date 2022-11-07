/* user and group to drop privileges to */
static const char *user  = "harsh";
static const char *group = "harsh";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#DB9744",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/harsh/Pictures/wallpapers/solar-system.jpg";
