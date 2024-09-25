#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_COPY_INFORMATION.SourceFileObject", source_file_object, 0x0, 0x0, false, 0x89b48c68a30df85f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_COPY_INFORMATION.SourceFileOffset", source_file_offset, 0x0, 0x0, false, 0x32ae66f596311c19)
#else
#define _m00
#define _m01
#endif