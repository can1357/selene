#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCH_MAIN_CALLOUT_PARAMS.Version", version, 0x0, 0x0, false, 0xa1d7fe6f6c16784c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCH_MAIN_CALLOUT_PARAMS.PatchPhase", patch_phase, 0x0, 0x0, false, 0xef292353de4d0feb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCH_MAIN_CALLOUT_PARAMS.Flags", flags, 0x0, 0x0, false, 0x48045a15354fb3df)
#else
#define _m00
#define _m01
#define _m02
#endif