#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_PROC_HEADER_EXTS64.Size", size, 0x0, 0x8, true, 0xdd1a75cef224de5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_opt_flags2_t), "NDR_PROC_HEADER_EXTS64.Flags2", flags2, 0x8, 0x8, true, 0xd559106fcbfa53a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS64.ClientCorrHint", client_corr_hint, 0x10, 0x10, true, 0x35b4e8e4f6477dfb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS64.ServerCorrHint", server_corr_hint, 0x20, 0x10, true, 0xcc3afaf09fef7b83)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS64.NotifyIndex", notify_index, 0x30, 0x10, true, 0x685f730ca5bd8b51)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS64.FloatArgMask", float_arg_mask, 0x40, 0x10, true, 0x28211aab93fc12ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif