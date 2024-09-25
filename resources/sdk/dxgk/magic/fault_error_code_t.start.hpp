#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FAULT_ERROR_CODE.IsDeviceSpecificCode", is_device_specific_code, 0x0, 0x1, true, 0x233a853ef1575b39, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int31_t), "_DXGK_FAULT_ERROR_CODE.GeneralErrorCode", general_error_code, 0x1, 0x1f, true, 0xd1c6e1f815d3f215, 31, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FAULT_ERROR_CODE.IsDeviceSpecificCodeReservedBit", is_device_specific_code_reserved_bit, 0x0, 0x1, true, 0x3ebc79b5d181d447, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_DXGK_FAULT_ERROR_CODE.DeviceSpecificCode", device_specific_code, 0x1, 0x1f, true, 0x462c3c01005b043c, 31, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif