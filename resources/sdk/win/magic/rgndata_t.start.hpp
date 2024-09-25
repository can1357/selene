#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rgndataheader_t), "_RGNDATA.rdh", rdh, 0x0, 0x0, true, 0x605124554e99bf60)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_RGNDATA.Buffer", buffer, 0x100, 0x8, true, 0xb36eda406ee1d858)
#else
#define _m00
#define _m01
#endif