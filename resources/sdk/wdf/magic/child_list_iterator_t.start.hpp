#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_ITERATOR.Size", size, 0x0, 0x20, true, 0x91d0fd38e5b44347)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_ITERATOR.Flags", flags, 0x20, 0x20, true, 0x15f37cb884023557)
#else
#define _m00
#define _m01
#endif