#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_WAIT_MULTIPLE.ThreadId", thread_id, 0x0, 0x20, true, 0x89660ee0aee8487b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_WAIT_MULTIPLE.WaitType", wait_type, 0x20, 0x8, true, 0xc9a5580466c0b92d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_WAIT_MULTIPLE.ObjectCount", object_count, 0x28, 0x8, true, 0xbcc8a38de98b902f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wmi::wait_object_record_t, 64>), "_WMI_WAIT_MULTIPLE.ObjectRecord", object_record, 0x40, 0x0, true, 0xfe08d017c0299bdb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif