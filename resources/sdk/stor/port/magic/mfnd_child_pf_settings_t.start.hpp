#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_SETTINGS.Version", version, 0x0, 0x0, false, 0x3e567530afbe72c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_SETTINGS.Size", size, 0x0, 0x0, false, 0x9784132b74d66d9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_physical_function_settings_t), "_MFND_CHILD_PF_SETTINGS.Settings", settings, 0x0, 0x0, false, 0x5a1158eb4396ae2d)
#else
#define _m00
#define _m01
#define _m02
#endif