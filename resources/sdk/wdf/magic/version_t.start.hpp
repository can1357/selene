#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_VERSION.Major", major, 0x0, 0x20, true, 0x253d2d8a09f87c77)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_VERSION.Minor", minor, 0x20, 0x20, true, 0xa6e5de0b4630abb4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_VERSION.Build", build, 0x40, 0x20, true, 0xcaff13ba897dd96e)
#else
#define _m00
#define _m01
#define _m02
#endif