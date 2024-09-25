#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_MESSAGE.Type", type, 0x0, 0x10, true, 0x55382ed31e0e6a53)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_MESSAGE.Size", size, 0x10, 0x10, true, 0xd585feefb97f89fc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_ERROR_LOG_MESSAGE.DriverNameLength", driver_name_length, 0x20, 0x10, true, 0x83b8626bea243201)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_ERROR_LOG_MESSAGE.TimeStamp", time_stamp, 0x40, 0x40, true, 0x813f669f2789b21d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ERROR_LOG_MESSAGE.DriverNameOffset", driver_name_offset, 0x80, 0x20, true, 0x883b031404c7c84a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::error_log_packet_t), "_IO_ERROR_LOG_MESSAGE.EntryData", entry_data, 0xc0, 0x80, true, 0xc5de656eb7419f95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif