#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MM_COPY_ADDRESS.VirtualAddress", virtual_address, 0x0, 0x40, true, 0xcba5a382ff4cd0a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MM_COPY_ADDRESS.PhysicalAddress", physical_address, 0x0, 0x40, true, 0xe473c2ee57d39ca6)
#else
#define _m00
#define _m01
#endif