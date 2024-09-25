#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FILE_ID_DESCRIPTOR.dwSize", dw_size, 0x0, 0x20, true, 0xee9af567cd2a6cb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::file_id_type_t), "FILE_ID_DESCRIPTOR.Type", type, 0x20, 0x20, true, 0x10b917732de8f456)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FILE_ID_DESCRIPTOR.FileId", file_id, 0x40, 0x40, true, 0x2f05124bc7848880)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "FILE_ID_DESCRIPTOR.ObjectId", object_id, 0x40, 0x80, true, 0x3f5f32520bbbdc1c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "FILE_ID_DESCRIPTOR.ExtendedFileId", extended_file_id, 0x40, 0x80, true, 0x39a2719a1e554c7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif