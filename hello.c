#define DRIVER_AUTHOR "VAIBH"
#define DRIVER_DESC "First step to reach networking driver programming"


#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>


int myint = 3;
module_param(myint, int, 0644);
/*MODULE_PARM(myint, "i");*/

int __init hello_init(void)
{
  printk(KERN_ALERT "Hello to the Kernel wordl! for the %i th time \n", myint);
  return 0;
}

void __exit hello_exit(void)
{
  printk(KERN_ALERT "Goodbye for now but I will be back \n");
}

module_init(hello_init);
module_exit(hello_exit);



MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
