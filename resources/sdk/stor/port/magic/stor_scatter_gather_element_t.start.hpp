#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STOR_SCATTER_GATHER_ELEMENT.PhysicalAddress", physical_address, 0x0, 0x40, true, 0xfabe522e725ed352)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_SCATTER_GATHER_ELEMENT.Length", length, 0x40, 0x20, true, 0x5438b4ae4b36f490)
#else
#define _m00
#define _m01
#endif