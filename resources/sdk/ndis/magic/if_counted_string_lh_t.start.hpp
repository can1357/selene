#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IF_COUNTED_STRING_LH.Length", length, 0x0, 0x10, true, 0xb21482f674ba314c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 257>), "_IF_COUNTED_STRING_LH.String", string, 0x10, 0x10, true, 0x582972f0ddadb92c)
#else
#define _m00
#define _m01
#endif