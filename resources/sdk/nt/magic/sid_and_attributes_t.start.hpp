#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SID_AND_ATTRIBUTES.Sid", sid, 0x0, 0x40, true, 0xcc106109c06a21a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SID_AND_ATTRIBUTES.Attributes", attributes, 0x40, 0x20, true, 0x8b8850a7133ffd9e)
#else
#define _m00
#define _m01
#endif