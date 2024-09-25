#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FORWARD_OPTIONS.Size", size, 0x0, 0x20, true, 0x1bb79920428f9ffa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_FORWARD_OPTIONS.Flags", flags, 0x20, 0x20, true, 0xe70665028190afd6)
#else
#define _m00
#define _m01
#endif