#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.Type", type, 0x0, 0x0, false, 0xe1c6be9afc94fd10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_7.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x9c3eff3481341d8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.BufferType.Length", length, 0x0, 0x0, false, 0x1391b0051df4df2a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.BufferType", buffer_type, 0x0, 0x0, false, 0xcb71a4cfb8280ee8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_7.MdlType.Mdl", mdl, 0x0, 0x0, false, 0xf61812e1f8087858)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0xf0cd6471f4316689)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.MdlType", mdl_type, 0x0, 0x0, false, 0xd8fa64713d16473a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_7.HandleType.Memory", memory, 0x0, 0x0, false, 0xaae7beed646e540a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_7_t*), "_WDF_MEMORY_DESCRIPTOR_V1_7.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x1e2c46e48c8e7937)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_7.HandleType", handle_type, 0x0, 0x0, false, 0x7a0ab1c304519f8e)
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