#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_LEARNING_MODE_USER_OBJECT_DATA.Cookie", cookie, 0x0, 0x20, true, 0xe6238716a7b93cc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SE_LEARNING_MODE_USER_OBJECT_DATA.ObjectType", object_type, 0x40, 0x40, true, 0x4246d7b9b04963a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SE_LEARNING_MODE_USER_OBJECT_DATA.ObjectName", object_name, 0x80, 0x40, true, 0x53c7381b65d9fc0a)
#else
#define _m00
#define _m01
#define _m02
#endif