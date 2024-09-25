#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devpropkey_t), "_DEVPROPCOMPKEY.Key", key, 0x0, 0xa0, true, 0xaca8dba2e35e15ee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::devpropstore_t), "_DEVPROPCOMPKEY.Store", store, 0xa0, 0x20, true, 0x9079f0e0b3ef093e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_DEVPROPCOMPKEY.LocaleName", locale_name, 0xc0, 0x40, true, 0xbb063706d81762a3)
#else
#define _m00
#define _m01
#define _m02
#endif