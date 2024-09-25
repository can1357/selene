#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_SUBMISSION_QUEUE.Head", head, 0x0, 0x0, false, 0xc511be2a30d28922)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_SUBMISSION_QUEUE.Tail", tail, 0x0, 0x0, false, 0xe91aaa70b387c659)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_sq_flags_t), "_NT_IORING_SUBMISSION_QUEUE.Flags", flags, 0x0, 0x0, false, 0xa17061da5e1ab5f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct os::ioring_sqe_t, 1>), "_NT_IORING_SUBMISSION_QUEUE.Entries", entries, 0x0, 0x0, false, 0x1865b8f1cd06f950)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif