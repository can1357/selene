#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_REF_STACK_INFO.Sequence", sequence, 0x0, 0x20, true, 0x689729efe0bd0dfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_REF_STACK_INFO.Index", index, 0x20, 0x10, true, 0xe9f593218a22db01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_REF_STACK_INFO.NumTraces", num_traces, 0x30, 0x10, true, 0x7f0832d2ece5c2a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_REF_STACK_INFO.Tag", tag, 0x40, 0x20, true, 0xf029345a7a7323e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif