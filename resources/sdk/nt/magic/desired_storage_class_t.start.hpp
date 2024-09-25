#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::file_storage_tier_class_t), "_DesiredStorageClass.Class", _class, 0x0, 0x20, true, 0x420feaa8409f6a24)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DesiredStorageClass.Flags", flags, 0x20, 0x20, true, 0x67a89e7c3be6d407)
#else
#define _m00
#define _m01
#endif