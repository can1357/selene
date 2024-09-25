#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR_PROC_HEADER_EXTS.Size", size, 0x0, 0x8, true, 0xbb9c48aa0086e342)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_opt_flags2_t), "NDR_PROC_HEADER_EXTS.Flags2", flags2, 0x8, 0x8, true, 0xafb12e6136dd9290)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS.ClientCorrHint", client_corr_hint, 0x10, 0x10, true, 0x4b6694fad8957d4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS.ServerCorrHint", server_corr_hint, 0x20, 0x10, true, 0x11738edf4f12554a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR_PROC_HEADER_EXTS.NotifyIndex", notify_index, 0x30, 0x10, true, 0xaae3b03cda3f4a50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif