#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_VM_PRE_READ_CALLBACK.Offset", offset, 0x0, 0x40, true, 0x647fb52d025f93d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_VM_PRE_READ_CALLBACK.Buffer", buffer, 0x40, 0x40, true, 0xe05a0fe21eb3dc39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_VM_PRE_READ_CALLBACK.Size", size, 0x80, 0x20, true, 0x1d1aea8b75e9f04)
#else
#define _m00
#define _m01
#define _m02
#endif