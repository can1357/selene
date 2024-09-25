#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.Version", version, 0x0, 0x20, true, 0x384a4f8dc188c05e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.RequestsPerPeriod", requests_per_period, 0x20, 0x20, true, 0x8e86baf2e099f813)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.Period", period, 0x40, 0x20, true, 0xa5faa813e0a6bab9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.RetryFailures", retry_failures, 0x60, 0x8, true, 0xc5393389697e704f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.Discardable", discardable, 0x68, 0x8, true, 0x8f8db9ba01381e6a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.AccessType", access_type, 0x80, 0x20, true, 0xe321b397dd6dee8b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_INPUT.AccessMode", access_mode, 0xa0, 0x20, true, 0xd0ec6b2397ca1ff0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif