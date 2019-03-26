#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5eadf54a, "module_layout" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x59528ec6, "remove_proc_entry" },
	{ 0x70236c3f, "filp_close" },
	{ 0x91715312, "sprintf" },
	{ 0x2bc95bd4, "memset" },
	{ 0x9331365d, "proc_mkdir" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x7e1805b7, "create_proc_entry" },
	{ 0x37ff4c06, "copy_from_user_overflow" },
	{ 0x37a0cba, "kfree" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x34fb8ff2, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "023C8C0BAB549C2E27FA66E");
