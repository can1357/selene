#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.Type", type, 0x0, 0x0, false, 0x786ffaa13c3a4e5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_17.BufferType.Buffer", buffer, 0x0, 0x0, false, 0xeda7878d69f4264c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.BufferType.Length", length, 0x0, 0x0, false, 0xb85a8cf35aa01048)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.BufferType", buffer_type, 0x0, 0x0, false, 0xb0da263d1aad1ba9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_17.MdlType.Mdl", mdl, 0x0, 0x0, false, 0xb890e217d4c85165)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0x8d31db7bb6aa4fb9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.MdlType", mdl_type, 0x0, 0x0, false, 0xee8c2582060e7b5f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_17.HandleType.Memory", memory, 0x0, 0x0, false, 0x71b0a4598dcae33c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_17_t*), "_WDF_MEMORY_DESCRIPTOR_V1_17.HandleType.Offsets", offsets, 0x0, 0x0, false, 0xee95762b941154de)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_17.HandleType", handle_type, 0x0, 0x0, false, 0xf973cab6b295a89d)
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