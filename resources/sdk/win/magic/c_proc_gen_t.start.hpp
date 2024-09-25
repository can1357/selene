#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "CProcGen._pProcFormatString", p_proc_format_string, 0x0, 0x40, true, 0x676542a6f059aeaa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CProcGen._offset", offset, 0x40, 0x10, true, 0x8feb0d936c0b3722)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CProcGen._stackSize", stack_size, 0x50, 0x10, true, 0x5b79610917e17b99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CProcGen._clientBufferSize", client_buffer_size, 0x60, 0x20, true, 0x58226ae61d8f9b13)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CProcGen._serverBufferSize", server_buffer_size, 0x80, 0x20, true, 0x80ae189e0bc5b36b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CProcGen._fClientMustSize", f_client_must_size, 0xa0, 0x20, true, 0xfc42c47dbe351d1b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CProcGen._fServerMustSize", f_server_must_size, 0xc0, 0x20, true, 0x1b0ae7fd5b882c29)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CProcGen._fClientCorrCheck", f_client_corr_check, 0xe0, 0x20, true, 0x8ef14aaaef01bac4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CProcGen._fServerCorrCheck", f_server_corr_check, 0x100, 0x20, true, 0x946952299edfa419)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CProcGen._usFloatArgMask", us_float_arg_mask, 0x120, 0x10, true, 0x3c7172365742f4f2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CProcGen._usFloatSlots", us_float_slots, 0x130, 0x10, true, 0xf127db957fa6f696)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_type_gen_t*), "CProcGen._pTypeGen", p_type_gen, 0x140, 0x40, true, 0xe47ad486900979cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif