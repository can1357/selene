#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FXSAVE_FORMAT_WX86.ControlWord", control_word, 0x0, 0x10, true, 0x66f3b61ff3d4ab97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FXSAVE_FORMAT_WX86.StatusWord", status_word, 0x10, 0x10, true, 0x45c913d7f97dcb45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FXSAVE_FORMAT_WX86.TagWord", tag_word, 0x20, 0x10, true, 0xc168d94672724a7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FXSAVE_FORMAT_WX86.ErrorOpcode", error_opcode, 0x30, 0x10, true, 0x71a0224b5732d08d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.ErrorOffset", error_offset, 0x40, 0x20, true, 0x1b8484984a80dc38)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.ErrorSelector", error_selector, 0x60, 0x20, true, 0x84ed86c9ec03bb42)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.DataOffset", data_offset, 0x80, 0x20, true, 0xe750b519f1c36a64)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.DataSelector", data_selector, 0xa0, 0x20, true, 0xb1f2cdaf6571f8d5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.MXCsr", mx_csr, 0xc0, 0x20, true, 0xba5aee48cc2cb971)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXSAVE_FORMAT_WX86.MXCsr_Mask", mx_csr_mask, 0xe0, 0x20, true, 0x87ea0fa0598b51f5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_FXSAVE_FORMAT_WX86.RegisterArea", register_area, 0x100, 0x0, true, 0x9c2666137dd054fb)
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
#endif