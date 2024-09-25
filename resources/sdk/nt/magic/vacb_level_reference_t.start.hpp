#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VACB_LEVEL_REFERENCE.Reference", reference, 0x0, 0x20, true, 0x283d53428999bd44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VACB_LEVEL_REFERENCE.SpecialReference", special_reference, 0x20, 0x20, true, 0xd340e4660be6a984)
#else
#define _m00
#define _m01
#endif