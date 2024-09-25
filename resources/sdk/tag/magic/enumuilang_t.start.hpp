#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENUMUILANG.NumOfEnumUILang", num_of_enum_ui_lang, 0x0, 0x20, true, 0x866d35246b0c82dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENUMUILANG.SizeOfEnumUIBuffer", size_of_enum_ui_buffer, 0x20, 0x20, true, 0x3754cad13d22b130)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagENUMUILANG.pEnumUIBuffer", p_enum_ui_buffer, 0x40, 0x40, true, 0x535609ce60130ddf)
#else
#define _m00
#define _m01
#define _m02
#endif