#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagInstanceInfoData.fileName", file_name, 0x0, 0x40, true, 0xe9230a1050b1c981)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstanceInfoData.mode", mode, 0x40, 0x20, true, 0xc315aba271223a7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "tagInstanceInfoData.ifdROT", ifd_rot, 0x80, 0x40, true, 0xe33e85580928a9a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "tagInstanceInfoData.ifdStg", ifd_stg, 0xc0, 0x40, true, 0x68e393abcc178318)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif