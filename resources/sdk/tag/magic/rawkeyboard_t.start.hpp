#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWKEYBOARD.MakeCode", make_code, 0x0, 0x10, true, 0xfa84b2f902d5df25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWKEYBOARD.Flags", flags, 0x10, 0x10, true, 0xbe2134743522414c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWKEYBOARD.VKey", v_key, 0x30, 0x10, true, 0xf62939ea51865cb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWKEYBOARD.Message", message, 0x40, 0x20, true, 0x8546aae5876cdc0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWKEYBOARD.ExtraInformation", extra_information, 0x60, 0x20, true, 0xcd035386f0c1753c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif