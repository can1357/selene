#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_SGE.VirtualAddress", virtual_address, 0x0, 0x40, true, 0xf08ed9c5bcdb00a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDK_SGE.LogicalAddress", logical_address, 0x0, 0x40, true, 0x4593649ca7667007)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_SGE.Length", length, 0x40, 0x20, true, 0x11eaba8e7fc3b610)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_SGE.MemoryRegionToken", memory_region_token, 0x60, 0x20, true, 0x7fd158e15787548b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif