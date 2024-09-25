#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_EXCEPTION_INFORMATION.ThreadId", thread_id, 0x0, 0x20, true, 0xbb37b6cb9738e72b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_pointers_t*), "_MINIDUMP_EXCEPTION_INFORMATION.ExceptionPointers", exception_pointers, 0x20, 0x40, true, 0x603d57ab3102a7a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MINIDUMP_EXCEPTION_INFORMATION.ClientPointers", client_pointers, 0x60, 0x20, true, 0x7e6c8f42b1b91f82)
#else
#define _m00
#define _m01
#define _m02
#endif