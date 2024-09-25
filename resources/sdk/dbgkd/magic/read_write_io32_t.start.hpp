#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO32.DataSize", data_size, 0x0, 0x20, true, 0x285e2e1a2cbf2008)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO32.IoAddress", io_address, 0x20, 0x20, true, 0xc85c68b8902af713)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO32.DataValue", data_value, 0x40, 0x20, true, 0x2d03cb3f75137a8a)
#else
#define _m00
#define _m01
#define _m02
#endif