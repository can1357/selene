#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_BPIO_INFO.ActiveBypassIoCount", active_bypass_io_count, 0x0, 0x0, false, 0x557b0013b25ad39a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FS_BPIO_INFO.StorageDriverNameLen", storage_driver_name_len, 0x0, 0x0, false, 0x4caf7c0a7dafe261)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_FS_BPIO_INFO.StorageDriverName", storage_driver_name, 0x0, 0x0, false, 0x4cf7aee76392646e)
#else
#define _m00
#define _m01
#define _m02
#endif