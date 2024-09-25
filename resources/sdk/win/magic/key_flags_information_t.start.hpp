#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FLAGS_INFORMATION.Wow64Flags", wow64_flags, 0x0, 0x20, true, 0xe48c74c949feaf48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FLAGS_INFORMATION.KeyFlags", key_flags, 0x20, 0x20, true, 0x658c5bc2a9db9262)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FLAGS_INFORMATION.ControlFlags", control_flags, 0x40, 0x20, true, 0x1a2a23f4e038721d)
#else
#define _m00
#define _m01
#define _m02
#endif