#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSA.cbSize", cb_size, 0x0, 0x20, true, 0x4a2f9f40a06efcc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSA.dwFlags", dw_flags, 0x20, 0x20, true, 0x51bd8f7083603325)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagSERIALKEYSA.lpszActivePort", lpsz_active_port, 0x40, 0x40, true, 0x5518e777feaf4c14)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagSERIALKEYSA.lpszPort", lpsz_port, 0x80, 0x40, true, 0x4e9ea3d680c9449d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSA.iBaudRate", i_baud_rate, 0xc0, 0x20, true, 0x93b63196958c33b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSA.iPortState", i_port_state, 0xe0, 0x20, true, 0x9258b64b41007657)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALKEYSA.iActive", i_active, 0x100, 0x20, true, 0xb5dac0dc077191eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif