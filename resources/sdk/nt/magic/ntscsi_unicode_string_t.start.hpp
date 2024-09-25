#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTSCSI_UNICODE_STRING.Length", length, 0x0, 0x10, true, 0x5ee3a1a745dcff11)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTSCSI_UNICODE_STRING.MaximumLength", maximum_length, 0x10, 0x10, true, 0xce753e073f800e3a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NTSCSI_UNICODE_STRING.Buffer", buffer, 0x40, 0x40, true, 0xde7a1b9ab8edb7f3)
#else
#define _m00
#define _m01
#define _m02
#endif