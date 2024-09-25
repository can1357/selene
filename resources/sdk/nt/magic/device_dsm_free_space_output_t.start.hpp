#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_FREE_SPACE_OUTPUT.Version", version, 0x0, 0x20, true, 0x36166d588832ea6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DSM_FREE_SPACE_OUTPUT.FreeSpace", free_space, 0x40, 0x40, true, 0x20e3029eb37b22f8)
#else
#define _m00
#define _m01
#endif