#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION.ulFlags", ul_flags, 0x0, 0x20, true, 0xdec6b0da50b6f740)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::actctx_requested_run_level_t), "_ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION.RunLevel", run_level, 0x20, 0x20, true, 0xe9817304ecac4cc5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION.UiAccess", ui_access, 0x40, 0x20, true, 0xef365aed9f849ea8)
#else
#define _m00
#define _m01
#define _m02
#endif