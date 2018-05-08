#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>

static int my_int = 1;

static void print_log(void);

static int __init hello_world_init(void) {
  print_log();
  return 0;
}

static void __exit hello_world_exit(void) {
  pr_info("===lizhi End of Hello world!\n");
}

static void print_log(void) {
  pr_info("===lizhi Hello worldi: my_int = %d!\n", my_int);
}

module_init(hello_world_init);
module_exit(hello_world_exit);

module_param(my_int, int, S_IRUGO /* read only */);
MODULE_PARM_DESC(my_int, "===lizhi this is the one of the module params");

MODULE_AUTHOR("lizhi");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sample module with bare skeleton");
