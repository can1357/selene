#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_DENIED_CALLBACK_ACE.Header", header, 0x0, 0x20, true, 0xbc5357e9bc5c2620)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_CALLBACK_ACE.Mask", mask, 0x20, 0x20, true, 0x12d81dcd1a8cbab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_CALLBACK_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x5f58ef0130f428ff)
#else
#define _m00
#define _m01
#define _m02
#endif