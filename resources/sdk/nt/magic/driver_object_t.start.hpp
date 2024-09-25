#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DRIVER_OBJECT.Type", type, 0x0, 0x10, true, 0x8537651638522942)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DRIVER_OBJECT.Size", size, 0x10, 0x10, true, 0xe8dbbad2488c8d00)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DRIVER_OBJECT.DeviceObject", device_object, 0x40, 0x40, true, 0x4c3df9d2520de1c5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVER_OBJECT.Flags", flags, 0x80, 0x20, true, 0x85dc8e5150ff9330)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_OBJECT.DriverStart", driver_start, 0xc0, 0x40, true, 0x6b81b3cdaa4d6448)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVER_OBJECT.DriverSize", driver_size, 0x100, 0x20, true, 0x28eb24d9ae6faafa)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_OBJECT.DriverSection", driver_section, 0x140, 0x40, true, 0x56f0949e0933411)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::driver_extension_t*), "_DRIVER_OBJECT.DriverExtension", driver_extension, 0x180, 0x40, true, 0xca564284ac7be945)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DRIVER_OBJECT.DriverName", driver_name, 0x1c0, 0x80, true, 0x6678a24ce3acc72f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_DRIVER_OBJECT.HardwareDatabase", hardware_database, 0x240, 0x40, true, 0x9da704c839f4f22f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fast_io_dispatch_t*), "_DRIVER_OBJECT.FastIoDispatch", fast_io_dispatch, 0x280, 0x40, true, 0xd2d64731ab3d2d2f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdriver_initialize_t ), "_DRIVER_OBJECT.DriverInit", driver_init, 0x2c0, 0x40, true, 0xfc938e7b03f8d122)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*), "_DRIVER_OBJECT.DriverStartIo", driver_start_io, 0x300, 0x40, true, 0x556e4f8fbb439222)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_DRIVER_OBJECT.DriverUnload", driver_unload, 0x340, 0x40, true, 0x80de10e8de581514)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>), "_DRIVER_OBJECT.MajorFunction", major_function, 0x380, 0x0, true, 0x3fac78f003b69210)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif