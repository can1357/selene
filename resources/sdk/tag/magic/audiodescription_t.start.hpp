#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAUDIODESCRIPTION.cbSize", cb_size, 0x0, 0x20, true, 0x4e6cb53c34e95cc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagAUDIODESCRIPTION.Enabled", enabled, 0x20, 0x20, true, 0x2ee092b5cc8450a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAUDIODESCRIPTION.Locale", locale, 0x40, 0x20, true, 0x16f02845190184d8)
#else
#define _m00
#define _m01
#define _m02
#endif