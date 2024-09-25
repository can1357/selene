#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PROC_FORMAT.Flags", flags, 0x0, 0x20, true, 0x3604399c5b9a0f52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PROC_FORMAT.StackSize", stack_size, 0x20, 0x20, true, 0x470fcbf39c8e7ae8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PROC_FORMAT.ConstantClientBufferSize", constant_client_buffer_size, 0x40, 0x20, true, 0xbb0459b7deef255)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PROC_FORMAT.ConstantServerBufferSize", constant_server_buffer_size, 0x60, 0x20, true, 0xac05af84d44ff288)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_PROC_FORMAT.RpcFlags", rpc_flags, 0x80, 0x10, true, 0x48dc4da411f88390)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_PROC_FORMAT.FloatDoubleMask", float_double_mask, 0x90, 0x10, true, 0x2ac64a0f875b148d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_PROC_FORMAT.NumberOfParams", number_of_params, 0xa0, 0x10, true, 0x91a4eb352016097a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_PROC_FORMAT.ExtensionSize", extension_size, 0xb0, 0x10, true, 0xe87ebe650c71ce01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif