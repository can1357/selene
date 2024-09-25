#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRAWINPUTDEVICELIST.hDevice", h_device, 0x0, 0x40, true, 0xdf7a70ba29602a58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWINPUTDEVICELIST.dwType", dw_type, 0x40, 0x20, true, 0x87445fbc746089ef)
#else
#define _m00
#define _m01
#endif