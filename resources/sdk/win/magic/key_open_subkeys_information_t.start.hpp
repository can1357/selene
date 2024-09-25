#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_OPEN_SUBKEYS_INFORMATION.Count", count, 0x0, 0x20, true, 0x5c69d81b7ea078ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::key_pid_array_t, 1>), "_KEY_OPEN_SUBKEYS_INFORMATION.KeyArray", key_array, 0x40, 0xc0, true, 0xf362f56ccbeaddca)
#else
#define _m00
#define _m01
#endif