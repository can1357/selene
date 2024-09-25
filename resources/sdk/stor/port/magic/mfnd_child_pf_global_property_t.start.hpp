#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_GLOBAL_PROPERTY.Version", version, 0x0, 0x0, false, 0x5879a1fea12603d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_GLOBAL_PROPERTY.Size", size, 0x0, 0x0, false, 0x8bb1830cabd4dd42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_physical_function_global_properties_t), "_MFND_CHILD_PF_GLOBAL_PROPERTY.Property", property, 0x0, 0x0, false, 0x3e4a0f1322976e1a)
#else
#define _m00
#define _m01
#define _m02
#endif