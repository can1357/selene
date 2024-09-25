#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL.Version", version, 0x0, 0x0, false, 0x381f18b3f49db322)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL.Size", size, 0x0, 0x0, false, 0x377b5ebe43c55675)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL.Flags", flags, 0x0, 0x0, false, 0x313dcf336fe15d99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_physical_function_global_properties_t), "_MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL.Properties", properties, 0x0, 0x0, false, 0x6532aaedf1b4266c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif