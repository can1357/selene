#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_ALLOWED_CALLBACK_ACE.Header", header, 0x0, 0x20, true, 0x25c0a6a90e6ca0ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_CALLBACK_ACE.Mask", mask, 0x20, 0x20, true, 0x7182c126ac25b1c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_CALLBACK_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x694a252ab33a5954)
#else
#define _m00
#define _m01
#define _m02
#endif