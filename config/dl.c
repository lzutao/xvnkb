/*----------------------------------------------------------------------------*/
/*  dl.c -- used by configure script to detect dynamic link loader            */
/*----------------------------------------------------------------------------*/
#include <dlfcn.h>
main()
{
	dlopen(0, 0);
}
