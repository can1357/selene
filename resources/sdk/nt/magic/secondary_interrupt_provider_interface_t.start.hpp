#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.Size", size, 0x0, 0x10, true, 0xeeb64460bb75ab03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.Version", version, 0x10, 0x10, true, 0xd3ed35c2b7b44806)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.Context", context, 0x40, 0x40, true, 0x4ea894674eca4d1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.GsivBase", gsiv_base, 0x80, 0x20, true, 0x2bdadaacd0352ada)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.GsivSize", gsiv_size, 0xa0, 0x10, true, 0x2a85d0bd8843f6d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.DriverObject", driver_object, 0xc0, 0x40, true, 0x50cdb8c1271c5db6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif