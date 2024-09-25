#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHARDWAREINPUT.uMsg", u_msg, 0x0, 0x20, true, 0xb56c5cede2f5f38c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagHARDWAREINPUT.wParamL", w_param_l, 0x20, 0x10, true, 0xd5e1a54cec5a45b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagHARDWAREINPUT.wParamH", w_param_h, 0x30, 0x10, true, 0x99f73de5fa6bc792)
#else
#define _m00
#define _m01
#define _m02
#endif