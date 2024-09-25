#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_IO_CONTROL.HeaderLength", header_length, 0x0, 0x20, true, 0x3c7ef5b451f4eddd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SRB_IO_CONTROL.Signature", signature, 0x20, 0x40, true, 0x512951c70bfa3ca5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_IO_CONTROL.Timeout", timeout, 0x60, 0x20, true, 0xf0fe3547bc9b6c92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_IO_CONTROL.ControlCode", control_code, 0x80, 0x20, true, 0x5c3b8b546e8e9355)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_IO_CONTROL.ReturnCode", return_code, 0xa0, 0x20, true, 0xf8a779ab03241a6c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_IO_CONTROL.Length", length, 0xc0, 0x20, true, 0xd2b7c405d826a52a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif