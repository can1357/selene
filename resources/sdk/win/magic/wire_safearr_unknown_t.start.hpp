#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_UNKNOWN.Size", size, 0x0, 0x20, true, 0xe3f39833f6bd27d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "_wireSAFEARR_UNKNOWN.apUnknown", ap_unknown, 0x40, 0x40, true, 0xdf2df3b82f39e31a)
#else
#define _m00
#define _m01
#endif