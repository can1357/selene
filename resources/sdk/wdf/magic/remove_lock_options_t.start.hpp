#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REMOVE_LOCK_OPTIONS.Size", size, 0x0, 0x20, true, 0xeb4499230b020535)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REMOVE_LOCK_OPTIONS.Flags", flags, 0x20, 0x20, true, 0x9fd66e9d50f1432f)
#else
#define _m00
#define _m01
#endif