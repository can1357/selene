#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMULTIPLE_ITEM.Size", size, 0x0, 0x0, false, 0xa47f4a0f51f06407)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMULTIPLE_ITEM.Count", count, 0x0, 0x0, false, 0xb1076409a267fb8d)
#else
#define _m00
#define _m01
#endif