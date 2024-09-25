#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWINPUTHEADER.dwType", dw_type, 0x0, 0x20, true, 0x6fa1fd415d9945dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWINPUTHEADER.dwSize", dw_size, 0x20, 0x20, true, 0x8aff3e54b3488c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRAWINPUTHEADER.hDevice", h_device, 0x40, 0x40, true, 0x72fa6a401477cae8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagRAWINPUTHEADER.wParam", w_param, 0x80, 0x40, true, 0x9a53d189031642c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif