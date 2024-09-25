#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.Type", type, 0x0, 0x0, false, 0x46b10795f79c6ae9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_9.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x304a02befee731a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.BufferType.Length", length, 0x0, 0x0, false, 0xbc9f6d1fbb374c88)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.BufferType", buffer_type, 0x0, 0x0, false, 0x32c23a7c00626fa7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_9.MdlType.Mdl", mdl, 0x0, 0x0, false, 0xf9363e09d2966cec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0xa072ba2f6f960f95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.MdlType", mdl_type, 0x0, 0x0, false, 0x3f5740ca66dfc07a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_9.HandleType.Memory", memory, 0x0, 0x0, false, 0x13ebc4841a604034)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_9_t*), "_WDF_MEMORY_DESCRIPTOR_V1_9.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x7dc9a974fc6840de)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_9.HandleType", handle_type, 0x0, 0x0, false, 0xea53c6ef301ec632)
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