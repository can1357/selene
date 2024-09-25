#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.Type", type, 0x0, 0x0, false, 0x712df61760181bba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_1.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x1a2f60c20d2cb95c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.BufferType.Length", length, 0x0, 0x0, false, 0xa920a866f6d432a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.BufferType", buffer_type, 0x0, 0x0, false, 0x8f1bfa444778e979)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_1.MdlType.Mdl", mdl, 0x0, 0x0, false, 0x52bfaecc7dd46cb3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0x1ef97648f139c279)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.MdlType", mdl_type, 0x0, 0x0, false, 0xe170b22d430b7d40)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_1.HandleType.Memory", memory, 0x0, 0x0, false, 0xb43ab92865a1b8ce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_1_t*), "_WDF_MEMORY_DESCRIPTOR_V1_1.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x84387bb7e05f0def)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_1.HandleType", handle_type, 0x0, 0x0, false, 0xf5dd36a0d72278b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif