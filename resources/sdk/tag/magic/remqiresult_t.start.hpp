#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "tagREMQIRESULT.hResult", h_result, 0x0, 0x20, true, 0x12f23c75cebe10c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stdobjref_t), "tagREMQIRESULT.std", std, 0x40, 0x40, true, 0x7c140617f2af768c)
#else
#define _m00
#define _m01
#endif