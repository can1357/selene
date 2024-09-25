#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_USER_MARSHAL_INFO_LEVEL1.Buffer", buffer, 0x0, 0x40, true, 0xb4b07e15ad8aa8bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_USER_MARSHAL_INFO_LEVEL1.BufferSize", buffer_size, 0x40, 0x20, true, 0x432826a7f233e922)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_NDR_USER_MARSHAL_INFO_LEVEL1.pfnAllocate", pfn_allocate, 0x80, 0x40, true, 0x50366fed7be054b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDR_USER_MARSHAL_INFO_LEVEL1.pfnFree", pfn_free, 0xc0, 0x40, true, 0xfde63b70af93ccc9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "_NDR_USER_MARSHAL_INFO_LEVEL1.pRpcChannelBuffer", p_rpc_channel_buffer, 0x100, 0x40, true, 0x9278c80814d5ebcf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif