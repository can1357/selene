#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::memory_descriptor_type_t), "_WDF_MEMORY_DESCRIPTOR.Type", type, 0x0, 0x20, true, 0x9232a470a16a0c6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_MEMORY_DESCRIPTOR.BufferType.Buffer", buffer, 0x0, 0x40, true, 0x912b8288f9d9f26b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR.BufferType.Length", length, 0x40, 0x20, true, 0xb4e1e11384062ca9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_buffer_type_t), "_WDF_MEMORY_DESCRIPTOR.BufferType", buffer_type, 0x40, 0x80, true, 0x3a2355bae2c7362c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WDF_MEMORY_DESCRIPTOR.MdlType.Mdl", mdl, 0x0, 0x40, true, 0xbc4c3044c9552879)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_MEMORY_DESCRIPTOR.MdlType.BufferLength", buffer_length, 0x40, 0x20, true, 0x95ae615d6776271b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_mdl_type_t), "_WDF_MEMORY_DESCRIPTOR.MdlType", mdl_type, 0x40, 0x80, true, 0x78a62f56add16c30)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_MEMORY_DESCRIPTOR.HandleType.Memory", memory, 0x0, 0x40, true, 0xe384296c54f90cb3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_t*), "_WDF_MEMORY_DESCRIPTOR.HandleType.Offsets", offsets, 0x40, 0x40, true, 0x9b6bd22eabb55230)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_handle_type_t), "_WDF_MEMORY_DESCRIPTOR.HandleType", handle_type, 0x40, 0x80, true, 0x5aa12295e8072b85)
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