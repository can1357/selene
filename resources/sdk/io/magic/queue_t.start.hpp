#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_QUEUE.DeviceObject", device_object, 0x0, 0x40, true, 0x82afa8dd2e5f9f71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, void*)>*), "_IO_QUEUE.StartIo", start_io, 0x40, 0x40, true, 0x9eda43044487bdfd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::extended_device_queue_t), "_IO_QUEUE.DeviceQueue", device_queue, 0x80, 0x80, true, 0x9af555f2ef028ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_QUEUE.QueueChanged", queue_changed, 0x500, 0x20, true, 0xdef414cfd3f54671)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif