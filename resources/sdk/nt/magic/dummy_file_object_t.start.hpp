#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_header_t), "_DUMMY_FILE_OBJECT.ObjectHeader", object_header, 0x0, 0xc0, true, 0xa4724cb2d7ba0e76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 216>), "_DUMMY_FILE_OBJECT.FileObjectBody", file_object_body, 0x1c0, 0xc0, true, 0xa795a0ce9934c33)
#else
#define _m00
#define _m01
#endif