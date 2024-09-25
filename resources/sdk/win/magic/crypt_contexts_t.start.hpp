#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXTS.cContexts", c_contexts, 0x0, 0x20, true, 0x185c748a54756247)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_CONTEXTS.rgpszContexts", rgpsz_contexts, 0x40, 0x40, true, 0xed5dfa4afd996d35)
#else
#define _m00
#define _m01
#endif