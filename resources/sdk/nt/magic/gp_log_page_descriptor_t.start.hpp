#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GP_LOG_PAGE_DESCRIPTOR.LogAddress", log_address, 0x0, 0x10, true, 0xef1142e60d79ef24)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GP_LOG_PAGE_DESCRIPTOR.LogSectors", log_sectors, 0x10, 0x10, true, 0xf325f5f3e1b3c767)
#else
#define _m00
#define _m01
#endif