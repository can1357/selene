#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.Type", type, 0x0, 0x0, false, 0xadbb9ea72450be87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_0.BufferType.Buffer", buffer, 0x0, 0x0, false, 0xb3cc9863801d01b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.BufferType.Length", length, 0x0, 0x0, false, 0xa18ed72e18d53134)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.BufferType", buffer_type, 0x0, 0x0, false, 0x3b30950e4e6838c2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_0.MdlType.Mdl", mdl, 0x0, 0x0, false, 0x43861d1c33889791)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0x241e1c1282fa9671)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.MdlType", mdl_type, 0x0, 0x0, false, 0x48c525022d94f45b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_0.HandleType.Memory", memory, 0x0, 0x0, false, 0xdc182cd9f2a1d812)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_0_t*), "_WDF_MEMORY_DESCRIPTOR_V1_0.HandleType.Offsets", offsets, 0x0, 0x0, false, 0xa311facc75ae437d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_0.HandleType", handle_type, 0x0, 0x0, false, 0xc318d046db5d1cfc)
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