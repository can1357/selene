#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DMA_COMMON_BUFFER_ENTRY.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x8664bca13cf01daf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DMA_COMMON_BUFFER_ENTRY.LogicalAddress", logical_address, 0x40, 0x40, true, 0x16768fda38d03768)
#else
#define _m00
#define _m01
#endif