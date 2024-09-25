#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::registry_key_t), "RegistryPathWatcher._ancestor", ancestor, 0x0, 0x40, true, 0x3cb0472ba6e15f10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t const*), "RegistryPathWatcher._path", path, 0x40, 0x40, true, 0xc36daf8b41a8486a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "RegistryPathWatcher._pathLength", path_length, 0x80, 0x10, true, 0xb0cb8c52f86c2d49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "RegistryPathWatcher._pathElementCount", path_element_count, 0x90, 0x10, true, 0x4180e92ec9ef3494)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "RegistryPathWatcher._indexCurrentlyRegistered", index_currently_registered, 0xa0, 0x10, true, 0xc533b42505ac7fcc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::registry_key_watcher_t), "RegistryPathWatcher._watchedKey", watched_key, 0xc0, 0xc0, true, 0xfc5731f3e6095608)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif