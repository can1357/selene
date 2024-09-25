#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSATTRIBUTE_LIST.Count", count, 0x0, 0x0, false, 0x3b30c0f4029d7470)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksattribute_t**), "KSATTRIBUTE_LIST.Attributes", attributes, 0x0, 0x0, false, 0x35bcfd69095f8d18)
#else
#define _m00
#define _m01
#endif