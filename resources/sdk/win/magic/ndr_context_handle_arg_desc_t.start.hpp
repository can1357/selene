#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_CONTEXT_HANDLE_ARG_DESC.Fc", fc, 0x0, 0x8, true, 0xe69104f8bc0b5211)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_context_handle_flags_t), "NDR_CONTEXT_HANDLE_ARG_DESC.Flags", flags, 0x8, 0x8, true, 0xd4e774c160f2e94)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_CONTEXT_HANDLE_ARG_DESC.RundownRtnIndex", rundown_rtn_index, 0x10, 0x8, true, 0x7ae56c1a6573d4f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_CONTEXT_HANDLE_ARG_DESC.ParamOrdinal", param_ordinal, 0x18, 0x8, true, 0x80e7cb3300b9a92a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif