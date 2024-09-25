#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::fdo_event_callbacks_t), "FdoInit.EventCallbacks", event_callbacks, 0x0, 0x0, true, 0xfa7f728e56307af9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::child_list_config_t), "FdoInit.ListConfig", list_config, 0x100, 0x0, true, 0x6276c3e2e8f69fc1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FdoInit.ListConfigAttributes", list_config_attributes, 0x400, 0xc0, true, 0x80a8cb1c8803f1c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FdoInit.Filter", filter, 0x5c0, 0x8, true, 0x8290812980cdfe59)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FdoInit.PhysicalDevice", physical_device, 0x600, 0x40, true, 0x12c1984893b4585d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif