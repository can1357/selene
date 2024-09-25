#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.Type", type, 0x0, 0x0, false, 0xc2475c5e81d2efa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_11.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x291bb672ff6ab074)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.BufferType.Length", length, 0x0, 0x0, false, 0x122f2cc8826e7b77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.BufferType", buffer_type, 0x0, 0x0, false, 0xf01f682026d34662)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_11.MdlType.Mdl", mdl, 0x0, 0x0, false, 0xcfe349315ed850bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0x81748a18b960b6aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.MdlType", mdl_type, 0x0, 0x0, false, 0xcbdc46a255865ad5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_11.HandleType.Memory", memory, 0x0, 0x0, false, 0x9334c41958d3627)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_11_t*), "_WDF_MEMORY_DESCRIPTOR_V1_11.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x772c4823440100d1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_11.HandleType", handle_type, 0x0, 0x0, false, 0x210f25c7315531aa)
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