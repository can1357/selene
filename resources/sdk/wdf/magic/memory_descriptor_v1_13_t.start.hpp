#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.Type", type, 0x0, 0x0, false, 0xc09743cb4c5ffc9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR_V1_13.BufferType.Buffer", buffer, 0x0, 0x0, false, 0x16d746f10713118a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.BufferType.Length", length, 0x0, 0x0, false, 0xdfede669277b05c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.BufferType", buffer_type, 0x0, 0x0, false, 0x2dfc4814e9f17cab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR_V1_13.MdlType.Mdl", mdl, 0x0, 0x0, false, 0x2b1c0ba304064045)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.MdlType.BufferLength", buffer_length, 0x0, 0x0, false, 0x96a5d34e01229044)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.MdlType", mdl_type, 0x0, 0x0, false, 0xc65f7633f70396aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR_V1_13.HandleType.Memory", memory, 0x0, 0x0, false, 0xc08f89593ebc456c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_v1_13_t*), "_WDF_MEMORY_DESCRIPTOR_V1_13.HandleType.Offsets", offsets, 0x0, 0x0, false, 0x7f9b8ec8957d60d4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_handle_type_t), "_WDF_MEMORY_DESCRIPTOR_V1_13.HandleType", handle_type, 0x0, 0x0, false, 0x4427f9cefa6d8ce5)
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