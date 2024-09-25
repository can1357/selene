#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DRIVER_CAPS.ulMajorVersion", ul_major_version, 0x0, 0x20, true, 0x8e3607b9ff8bcdf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DRIVER_CAPS.ulMinorVersion", ul_minor_version, 0x20, 0x20, true, 0xe059abf680d9ca7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DRIVER_CAPS.ulDriverCaps", ul_driver_caps, 0x40, 0x20, true, 0x5bbd2d8ca456aa95)
#else
#define _m00
#define _m01
#define _m02
#endif