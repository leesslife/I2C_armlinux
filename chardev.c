#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

static int one=1;
static char *two=NULL;

module_param(one,int,0);
module_param(two,charp,0);

static int hello_init(void)
{
    printk("Hello world![onevalue=%d:twostring=%s]\n",one,two);
    return 0;
}

static void hello_exit(void)
{
    printk("Goodbye\n");
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("lees1");
MODULE_DESCRIPTION("Module Parameter Test Module");
MODULE_LICENSE("Dual BSD/GPL")