#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_USER_MARSHAL_INFO.InformationLevel", information_level, 0x0, 0x20, true, 0x7c856ce4cf46aeb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_user_marshal_info_level1_t), "_NDR_USER_MARSHAL_INFO.Level1", level1, 0x40, 0x80, true, 0xa08fda15536236c7)
#else
#define _m00
#define _m01
#endif