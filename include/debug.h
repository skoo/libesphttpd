#ifdef DEBUG
 #define dbg_printf os_printf
#else
 #define dbg_printf(fmt, ...)
#endif
