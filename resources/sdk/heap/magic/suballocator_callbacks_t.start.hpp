#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBALLOCATOR_CALLBACKS.Allocate", allocate, 0x0, 0x40, true, 0x15799e798d983270)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBALLOCATOR_CALLBACKS.Free", free, 0x40, 0x40, true, 0x995ea29628974b95)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBALLOCATOR_CALLBACKS.Commit", commit, 0x80, 0x40, true, 0x14dbcf17ca87c626)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBALLOCATOR_CALLBACKS.Decommit", decommit, 0xc0, 0x40, true, 0x1d6d41c4c29a88a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SUBALLOCATOR_CALLBACKS.ExtendContext", extend_context, 0x100, 0x40, true, 0x4c89f1cf7d0d8059)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif