#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_VM_POST_READ_CALLBACK.Offset", offset, 0x0, 0x40, true, 0x87b7cffcf30c3526)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_VM_POST_READ_CALLBACK.Buffer", buffer, 0x40, 0x40, true, 0x68adcd4bdca7a857)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_VM_POST_READ_CALLBACK.Size", size, 0x80, 0x20, true, 0xf0c2b62e9a299b40)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_VM_POST_READ_CALLBACK.Completed", completed, 0xa0, 0x20, true, 0x9426f0a85a70763a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_VM_POST_READ_CALLBACK.Status", status, 0xc0, 0x20, true, 0x8d915348d072df5b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif