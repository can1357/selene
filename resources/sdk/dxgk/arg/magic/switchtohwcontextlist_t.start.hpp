#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SWITCHTOHWCONTEXTLIST.hHwContextFirst", h_hw_context_first, 0x0, 0x40, true, 0xc4dfb8d7ebe4a315)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SWITCHTOHWCONTEXTLIST.hHwContextSecond", h_hw_context_second, 0x40, 0x40, true, 0xe0f7fa63fc85f140)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SWITCHTOHWCONTEXTLIST.NodeOrdinal", node_ordinal, 0x80, 0x20, true, 0xe1de88238c4964e4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SWITCHTOHWCONTEXTLIST.EngineOrdinal", engine_ordinal, 0xa0, 0x20, true, 0xb5e3e7c49813ca03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif