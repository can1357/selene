#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLOAD_STATE_HEADER.Length", length, 0x0, 0x20, true, 0x2019af55c816c6eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLOAD_STATE_HEADER.RecognizedOptions", recognized_options, 0x20, 0x20, true, 0xa64b70d39735be10)
#else
#define _m00
#define _m01
#endif