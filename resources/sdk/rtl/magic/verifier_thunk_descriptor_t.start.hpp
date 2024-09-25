#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_RTL_VERIFIER_THUNK_DESCRIPTOR.ThunkName", thunk_name, 0x0, 0x40, true, 0x7e877637b024f0c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_THUNK_DESCRIPTOR.ThunkOldAddress", thunk_old_address, 0x40, 0x40, true, 0xbbb2ccc280b54064)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_THUNK_DESCRIPTOR.ThunkNewAddress", thunk_new_address, 0x80, 0x40, true, 0x16347df84ae70c85)
#else
#define _m00
#define _m01
#define _m02
#endif