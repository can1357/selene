#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.FormatCode", format_code, 0x0, 0x8, true, 0xec248a074e4c06bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.RealFormatCode", real_format_code, 0x8, 0x8, true, 0x5a4b633fd74316a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.Type", type, 0x40, 0x40, true, 0x5b98f116812c2d8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.CtxtFlags", ctxt_flags, 0x80, 0x20, true, 0xe89e32161005016)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.CtxtID", ctxt_id, 0xa0, 0x20, true, 0xf592e85d7f197f9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif