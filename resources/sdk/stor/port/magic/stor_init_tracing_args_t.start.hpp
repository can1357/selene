#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_INIT_TRACING_ARGS.InitInfo", init_info, 0x0, 0x40, true, 0x56266746cb85da5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_INIT_TRACING_ARGS.Result", result, 0x40, 0x20, true, 0x6687eeb1007808e6)
#else
#define _m00
#define _m01
#endif