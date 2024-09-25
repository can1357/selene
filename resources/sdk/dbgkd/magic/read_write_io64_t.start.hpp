#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_READ_WRITE_IO64.IoAddress", io_address, 0x0, 0x40, true, 0xc1dc99f81b28f136)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO64.DataSize", data_size, 0x40, 0x20, true, 0x4ad4de1465ac3974)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO64.DataValue", data_value, 0x60, 0x20, true, 0x29e43311436a46da)
#else
#define _m00
#define _m01
#define _m02
#endif