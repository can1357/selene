#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDE_IO_CONTROL.HeaderLength", header_length, 0x0, 0x20, true, 0x2205f8426eeb932d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_IDE_IO_CONTROL.Signature", signature, 0x20, 0x40, true, 0x49110709142d065)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDE_IO_CONTROL.Timeout", timeout, 0x60, 0x20, true, 0x2cbe8b40b64bc4e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDE_IO_CONTROL.ControlCode", control_code, 0x80, 0x20, true, 0x80f3a8ba7c79003f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDE_IO_CONTROL.ReturnStatus", return_status, 0xa0, 0x20, true, 0x681f3503bb20e240)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDE_IO_CONTROL.DataLength", data_length, 0xc0, 0x20, true, 0x9331682335fce95b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif