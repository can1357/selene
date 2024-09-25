#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_STORAGE_ADDRESS_RANGE.StartAddress", start_address, 0x0, 0x40, true, 0x914fc5fabd436127)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_STORAGE_ADDRESS_RANGE.LengthInBytes", length_in_bytes, 0x40, 0x40, true, 0x38df1c566e8dea78)
#else
#define _m00
#define _m01
#endif