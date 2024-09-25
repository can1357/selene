#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPARAMDESCEX.cBytes", c_bytes, 0x0, 0x20, true, 0xdf4aa7b5ddc5812f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t), "tagPARAMDESCEX.varDefaultValue", var_default_value, 0x40, 0xc0, true, 0x6fb9397b60b726e8)
#else
#define _m00
#define _m01
#endif