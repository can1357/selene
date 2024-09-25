#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_HARDPAGEFAULT_INFORMATION.ReadOffset", read_offset, 0x0, 0x40, true, 0x59a5ffe8d0ed5af4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_HARDPAGEFAULT_INFORMATION.VirtualAddress", virtual_address, 0x40, 0x40, true, 0xe56ec91bd43079ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_HARDPAGEFAULT_INFORMATION.FileObject", file_object, 0x80, 0x40, true, 0x3f7e1fa3fcef380e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_HARDPAGEFAULT_INFORMATION.ThreadId", thread_id, 0xc0, 0x20, true, 0x55f7e353954dc0c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_HARDPAGEFAULT_INFORMATION.ByteCount", byte_count, 0xe0, 0x20, true, 0xb63c24be6126cf10)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif