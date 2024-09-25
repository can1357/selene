#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::bpio_operations_t), "_FS_BPIO_INPUT.Operation", operation, 0x0, 0x0, false, 0x6dc660e787a6107c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::bpio_inflags_t), "_FS_BPIO_INPUT.InFlags", in_flags, 0x0, 0x0, false, 0x19f8f44011d9b435)
#else
#define _m00
#define _m01
#endif