#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_t*), "_OBJECT_HEADER_NAME_INFO.Directory", directory, 0x0, 0x40, true, 0x277117e177bedf36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_HEADER_NAME_INFO.Name", name, 0x40, 0x80, true, 0x7d01a3deb79e142a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_OBJECT_HEADER_NAME_INFO.ReferenceCount", reference_count, 0xc0, 0x20, true, 0x61d736b3f1dd5b14)
#else
#define _m00
#define _m01
#define _m02
#endif