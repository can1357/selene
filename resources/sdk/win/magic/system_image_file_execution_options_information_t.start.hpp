#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_IMAGE_FILE_EXECUTION_OPTIONS_INFORMATION.FlagsToEnable", flags_to_enable, 0x0, 0x20, true, 0x873cf3b44ad983f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_IMAGE_FILE_EXECUTION_OPTIONS_INFORMATION.FlagsToDisable", flags_to_disable, 0x20, 0x20, true, 0x133007b4102a4425)
#else
#define _m00
#define _m01
#endif