#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NT_IORING_HANDLEREF.Handle", handle, 0x0, 0x0, false, 0x786692c056b33f6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_HANDLEREF.HandleIndex", handle_index, 0x0, 0x0, false, 0x6df38bc31fc61b96)
#else
#define _m00
#define _m01
#endif