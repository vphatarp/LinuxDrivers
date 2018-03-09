#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

int __init start_init(void)
{
  printk(KERN_ALERT "On entering the start mode \n");
  return 0;
}

module_init(start_init);
