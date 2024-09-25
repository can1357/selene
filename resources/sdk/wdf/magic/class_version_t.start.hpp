#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION.Major", major, 0x0, 0x20, true, 0x6bf1facef1fb4350)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION.Minor", minor, 0x20, 0x20, true, 0x9ae04766b3be662e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION.Build", build, 0x40, 0x20, true, 0xfd5218b7688b8ce7)
#else
#define _m00
#define _m01
#define _m02
#endif