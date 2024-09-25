#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_IO_COMPLETION_INFORMATION.KeyContext", key_context, 0x0, 0x40, true, 0xe95b069c5eb563e2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_IO_COMPLETION_INFORMATION.ApcContext", apc_context, 0x40, 0x40, true, 0xaf846aef2a45f1af)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_FILE_IO_COMPLETION_INFORMATION.IoStatusBlock", io_status_block, 0x80, 0x80, true, 0x8bfeb75c0785b3af)
#else
#define _m00
#define _m01
#define _m02
#endif