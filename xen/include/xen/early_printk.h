/*
 * printk() for use before the console is initialized
 */
#ifndef __XEN_EARLY_PRINTK_H__
#define __XEN_EARLY_PRINTK_H__

#include <asm/types.h>

#ifdef CONFIG_EARLY_PRINTK
void early_puts(const char *s, size_t nr);
#else
#define early_puts NULL
#endif

#endif
/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
