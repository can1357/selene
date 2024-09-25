#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_RESOURCE_LIST.Version", version, 0x0, 0x10, true, 0x8e4ddaa4eb8ff9e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_RESOURCE_LIST.Revision", revision, 0x10, 0x10, true, 0xe3aaca9d443299cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_LIST.Count", count, 0x20, 0x20, true, 0xe79e0d08c7e2a8df)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 1>), "_IO_RESOURCE_LIST.Descriptors", descriptors, 0x40, 0x0, true, 0x80b5fa32cdd8ad37)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif