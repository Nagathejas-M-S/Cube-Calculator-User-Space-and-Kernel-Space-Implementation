#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init cube_init(void) {
    int number = 5; // You can change the number here
    int cube = number * number * number;
    printk(KERN_INFO "Cube of %d is: %d\n", number, cube);
    return 0; // Indicate success
}

static void __exit cube_exit(void) {
    printk(KERN_INFO "Exiting cube module\n");
}

module_init(cube_init);
module_exit(cube_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("NagathejasMS");
MODULE_DESCRIPTION("A simple kernel module to print the cube of a number");
MODULE_VERSION("0.1");




