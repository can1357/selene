#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.Type", type, 0x0, 0x0, false, 0x9cd30ecb8573500c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_5.BufferType.Buffer", buffer, 0x0, 0x0, false, 0xe20e61fa32986346)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.BufferType.Length", length, 0x0, 0x0, false, 0xceb9723b363cf75d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.BufferType", buffer_type, 0x0, 0x0, false, 0xe9e78a2449f49f36)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_5.MdlType.Mdl", mdl, 0x0, 0x0, false, 0xb76a6b845f1ed348)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0xcf9293dfc375ebea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.MdlType", mdl_type, 0x0, 0x0, false, 0x1656c6544edaf8b6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_5.HandleType.Memory", memory, 0x0, 0x0, false, 0x8445bc5b43beb09e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_5_t*), "_WDF_MEMORY_DESCRIPTOR_V1_5.HandleType.Offsets", offsets, 0x0, 0x0, false, 0xfb8a83a8f7b00e3a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_5.HandleType", handle_type, 0x0, 0x0, false, 0xb30c238ef7f34281)
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