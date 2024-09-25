#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.Version", version, 0x0, 0x20, true, 0x2561c16cc51a7a44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.Length", length, 0x20, 0x20, true, 0x734d303eafbdaaa1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_protocol_type_t), "_STORAGE_PROTOCOL_COMMAND.ProtocolType", protocol_type, 0x40, 0x20, true, 0x2acec01a044a84b8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.Flags", flags, 0x60, 0x20, true, 0x813510b35d78dfdb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.ReturnStatus", return_status, 0x80, 0x20, true, 0xef8f909f893d70d3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.ErrorCode", error_code, 0xa0, 0x20, true, 0xba1e1883d36d94d3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.CommandLength", command_length, 0xc0, 0x20, true, 0xb117a929341ed7d7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.ErrorInfoLength", error_info_length, 0xe0, 0x20, true, 0x6b8d7f2c0b50c90e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.DataToDeviceTransferLength", data_to_device_transfer_length, 0x100, 0x20, true, 0x62ecb44c53d59a27)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.DataFromDeviceTransferLength", data_from_device_transfer_length, 0x120, 0x20, true, 0xd6f06a2be7ec042b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.TimeOutValue", time_out_value, 0x140, 0x20, true, 0x158b2ba84c0f2f69)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.ErrorInfoOffset", error_info_offset, 0x160, 0x20, true, 0x6f6c152421c489c3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.DataToDeviceBufferOffset", data_to_device_buffer_offset, 0x180, 0x20, true, 0x1924b9c156eb9602)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.DataFromDeviceBufferOffset", data_from_device_buffer_offset, 0x1a0, 0x20, true, 0xa545c13d0124b1bb)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.CommandSpecific", command_specific, 0x1c0, 0x20, true, 0xf0890dc58db3f9c3)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_COMMAND.FixedProtocolReturnData", fixed_protocol_return_data, 0x200, 0x20, true, 0x650f41b2bb3f48fc)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_PROTOCOL_COMMAND.Command", command, 0x280, 0x8, true, 0x350b1a1663fd4f04)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif