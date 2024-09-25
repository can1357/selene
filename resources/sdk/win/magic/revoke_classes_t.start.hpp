#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RevokeClasses.dwSize", dw_size, 0x0, 0x20, true, 0x51f1daf2ccc4602f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::revoke_entry_t, 1>), "_RevokeClasses.revent", revent, 0x20, 0xa0, true, 0x4583ad4fd6ca92d8)
#else
#define _m00
#define _m01
#endif