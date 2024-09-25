#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_VF_DRIVER_IO_CALLBACKS.DriverInit", driver_init, 0x0, 0x40, true, 0xc924211002baab5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*), "_VF_DRIVER_IO_CALLBACKS.DriverStartIo", driver_start_io, 0x40, 0x40, true, 0xe92bf1899647d66b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_VF_DRIVER_IO_CALLBACKS.DriverUnload", driver_unload, 0x80, 0x40, true, 0x2a9867e81c80da12)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*), "_VF_DRIVER_IO_CALLBACKS.AddDevice", add_device, 0xc0, 0x40, true, 0x8f8fe85a9960bb3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>), "_VF_DRIVER_IO_CALLBACKS.MajorFunction", major_function, 0x100, 0x0, true, 0xc842e930f6cb8867)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif