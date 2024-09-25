#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t volatile*), "RegistryKey._hkey", hkey, 0x0, 0x40, true, 0x84e3d018080e7a6d)
#else
#define _m00
#endif