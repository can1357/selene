#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_COMPLETION_QUEUE.Head", head, 0x0, 0x0, false, 0x9f53888fee2ef9d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_COMPLETION_QUEUE.Tail", tail, 0x0, 0x0, false, 0x82eaf900e9408fe2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct os::ioring_cqe_t, 1>), "_NT_IORING_COMPLETION_QUEUE.Entries", entries, 0x0, 0x0, false, 0x4803af6b42b6069e)
#else
#define _m00
#define _m01
#define _m02
#endif