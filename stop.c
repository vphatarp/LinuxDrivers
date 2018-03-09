#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

void __exit stop_exit(void)
{
  printk(KERN_ALERT "Goddbye from the start stop module");
}

module_exit(stop_exit);

