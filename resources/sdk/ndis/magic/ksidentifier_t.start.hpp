#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSIDENTIFIER.Set", set, 0x0, 0x0, false, 0xadf1554773128b76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSIDENTIFIER.Id", id, 0x0, 0x0, false, 0xbf8a5ddb44dd5dea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSIDENTIFIER.Flags", flags, 0x0, 0x0, false, 0xb10fff918a87fbae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSIDENTIFIER.Alignment", alignment, 0x0, 0x0, false, 0x2bcb20d432c72592)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif