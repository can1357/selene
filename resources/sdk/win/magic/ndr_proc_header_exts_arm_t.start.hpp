#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_PROC_HEADER_EXTS_ARM.Size", size, 0x0, 0x8, true, 0xa097a7164ac579ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_opt_flags2_t), "NDR_PROC_HEADER_EXTS_ARM.Flags2", flags2, 0x8, 0x8, true, 0x111c7ea8489a8f5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS_ARM.ClientCorrHint", client_corr_hint, 0x10, 0x10, true, 0x755d11c35d2e6740)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS_ARM.ServerCorrHint", server_corr_hint, 0x20, 0x10, true, 0xba70fe65197cd568)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS_ARM.NotifyIndex", notify_index, 0x30, 0x10, true, 0xb375a0c85d198c01)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::arm_params_t), "NDR_PROC_HEADER_EXTS_ARM.ParamLayout", param_layout, 0x40, 0x20, true, 0x53eb868df147b5b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif