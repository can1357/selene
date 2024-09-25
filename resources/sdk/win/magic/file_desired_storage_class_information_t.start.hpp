#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::file_storage_tier_class_t), "_FILE_DESIRED_STORAGE_CLASS_INFORMATION.Class", _class, 0x0, 0x20, true, 0xd82afdf9d139ce5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_DESIRED_STORAGE_CLASS_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xfcdd8514e9d330c5)
#else
#define _m00
#define _m01
#endif