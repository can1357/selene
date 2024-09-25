#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0x49792879795e3966)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT.VersionHigh", version_high, 0x40, 0x40, true, 0x29f9bfd26f4f8230)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT.VersionLow", version_low, 0x80, 0x40, true, 0x8e4cd14c34a58b76)
#else
#define _m00
#define _m01
#define _m02
#endif