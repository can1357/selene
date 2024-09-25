#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PROC_DESC.ClientBufferSize", client_buffer_size, 0x0, 0x10, true, 0x2f50acfc7925ead2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PROC_DESC.ServerBufferSize", server_buffer_size, 0x10, 0x10, true, 0x78e0c11b77cb6fab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_opt_flags_t), "_NDR_PROC_DESC.Oi2Flags", oi2_flags, 0x20, 0x8, true, 0x72deffe3101434ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_PROC_DESC.NumberParams", number_params, 0x28, 0x8, true, 0x5cf811d2f7da9c6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_header_exts_t), "_NDR_PROC_DESC.NdrExts", ndr_exts, 0x30, 0x40, true, 0x9ff7f6c1a5172352)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif