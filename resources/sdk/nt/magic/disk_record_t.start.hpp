#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_RECORD.ByteOffset", byte_offset, 0x0, 0x40, true, 0x538485cb4959046b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_RECORD.StartTime", start_time, 0x40, 0x40, true, 0xa8f1cd1fef3a280c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_RECORD.EndTime", end_time, 0x80, 0x40, true, 0x4f9145d0aa8e25d7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DISK_RECORD.VirtualAddress", virtual_address, 0xc0, 0x40, true, 0x2457985526ffcd7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_RECORD.NumberOfBytes", number_of_bytes, 0x100, 0x20, true, 0x34369fea096e4fd7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_RECORD.DeviceNumber", device_number, 0x120, 0x8, true, 0x58578dee54c2bd5c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_RECORD.ReadRequest", read_request, 0x128, 0x8, true, 0x74ea41e730f7ee4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif