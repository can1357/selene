#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::mnk_eq_buf_t), "CTmpMkEqBuf._mkeqbuf", mkeqbuf, 0x0, 0x40, true, 0xf044ff1ebde9d5a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2047>), "CTmpMkEqBuf._abData", ab_data, 0x40, 0xf8, true, 0x667d7938a8500758)
#else
#define _m00
#define _m01
#endif