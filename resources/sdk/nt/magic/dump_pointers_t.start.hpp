#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::adapter_object_t*), "_DUMP_POINTERS.AdapterObject", adapter_object, 0x0, 0x40, true, 0x21e6cc196426c7e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS.MappedRegisterBase", mapped_register_base, 0x40, 0x40, true, 0x9ce9c06c3bef1fa0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS.DumpData", dump_data, 0x80, 0x40, true, 0x9a1150c550a43436)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS.CommonBufferVa", common_buffer_va, 0xc0, 0x40, true, 0xe016918a42b49b34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_POINTERS.CommonBufferPa", common_buffer_pa, 0x100, 0x40, true, 0x913998eb102509e0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS.CommonBufferSize", common_buffer_size, 0x140, 0x20, true, 0xa5c50171b0f3d90b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_POINTERS.AllocateCommonBuffers", allocate_common_buffers, 0x160, 0x8, true, 0xc8e42bb266f3670a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_POINTERS.UseDiskDump", use_disk_dump, 0x168, 0x8, true, 0x5ce71cee00189b45)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS.DeviceObject", device_object, 0x180, 0x40, true, 0xc451c94b5f36a52d)
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
#endif