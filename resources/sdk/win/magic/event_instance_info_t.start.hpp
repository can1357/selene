#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "EVENT_INSTANCE_INFO.RegHandle", reg_handle, 0x0, 0x40, true, 0x804c3f777b39600e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EVENT_INSTANCE_INFO.InstanceId", instance_id, 0x40, 0x20, true, 0xfbfd0d3ccdfdf805)
#else
#define _m00
#define _m01
#endif