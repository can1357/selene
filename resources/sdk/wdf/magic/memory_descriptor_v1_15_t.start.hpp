#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.Type", type, 0x0, 0x0, false, 0x92805ebaccd178c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_15.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x9e88bd5406a825b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.BufferType.Length", length, 0x0, 0x0, false, 0x2a1d4fde5821fad7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.BufferType", buffer_type, 0x0, 0x0, false, 0x16838e8526f2046)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_15.MdlType.Mdl", mdl, 0x0, 0x0, false, 0x17fe8d39a509101d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0xc0b083c60efde512)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.MdlType", mdl_type, 0x0, 0x0, false, 0xb8c41957a4bc6811)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_15.HandleType.Memory", memory, 0x0, 0x0, false, 0x5b0bb6294d967dce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_15_t*), "_WDF_MEMORY_DESCRIPTOR_V1_15.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x3320f5df8af67a04)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_15.HandleType", handle_type, 0x0, 0x0, false, 0x6bbe921b259bcdd2)
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