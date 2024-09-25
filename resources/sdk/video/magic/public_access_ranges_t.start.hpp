#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PUBLIC_ACCESS_RANGES.InIoSpace", in_io_space, 0x0, 0x20, true, 0x1986136abe13d9be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PUBLIC_ACCESS_RANGES.MappedInIoSpace", mapped_in_io_space, 0x20, 0x20, true, 0x53c80e8c90ef2175)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PUBLIC_ACCESS_RANGES.VirtualAddress", virtual_address, 0x40, 0x40, true, 0xfb0ea5fc2fcd3a0c)
#else
#define _m00
#define _m01
#define _m02
#endif