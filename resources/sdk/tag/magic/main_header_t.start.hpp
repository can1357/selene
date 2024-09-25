#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMainHeader.Signature", signature, 0x0, 0x20, true, 0x4fb616a916edc648)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMainHeader.Version", version, 0x20, 0x20, true, 0xd306835509c9820d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMainHeader.cPolicies", c_policies, 0x40, 0x20, true, 0x7e871a0e923e2efa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMainHeader.cbBuffer", cb_buffer, 0x60, 0x20, true, 0xfa15127a21f725c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMainHeader.cbSize", cb_size, 0x80, 0x20, true, 0x659ba1081e96d41)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMainHeader.hr", hr, 0xa0, 0x20, true, 0x13fa3815b0e14fc4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMainHeader.hrServer", hr_server, 0xc0, 0x20, true, 0x294c5800233978d9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif