#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DATA_DIRECTORY.VirtualAddress", virtual_address, 0x0, 0x20, true, 0xe638fd0a078d6a26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DATA_DIRECTORY.Size", size, 0x20, 0x20, true, 0x71d14f64eaef98b3)
#else
#define _m00
#define _m01
#endif