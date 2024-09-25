#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_DESCRIPTOR_TABLE_ENTRY.Selector", selector, 0x0, 0x20, true, 0x3b7cc5d0e245ec25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wow64_ldt_entry_t), "_WOW64_DESCRIPTOR_TABLE_ENTRY.Descriptor", descriptor, 0x20, 0x40, true, 0xc3e9851a927ae1f3)
#else
#define _m00
#define _m01
#endif