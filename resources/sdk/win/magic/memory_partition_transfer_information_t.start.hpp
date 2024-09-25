#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_TRANSFER_INFORMATION.NumberOfPages", number_of_pages, 0x0, 0x40, true, 0xa18a3824e63b7f2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_TRANSFER_INFORMATION.NumaNode", numa_node, 0x40, 0x20, true, 0x7aae651bf1e4a954)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_TRANSFER_INFORMATION.Flags", flags, 0x60, 0x20, true, 0xbfc3e361eb7afc84)
#else
#define _m00
#define _m01
#define _m02
#endif