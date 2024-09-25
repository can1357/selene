#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOCK_INTERFACE.Size", size, 0x0, 0x10, true, 0x9c4b9b5e9b4fbb24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOCK_INTERFACE.Version", version, 0x10, 0x10, true, 0x883735dba5f188d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "DOCK_INTERFACE.Context", context, 0x40, 0x40, true, 0x40207b315229319b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "DOCK_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x524b7daccddda0fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "DOCK_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x493f79b35967af7c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, enum nt::profile_departure_style_t)>*), "DOCK_INTERFACE.ProfileDepartureSetMode", profile_departure_set_mode, 0x100, 0x40, true, 0xfdc2e2b2fb10bf82)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "DOCK_INTERFACE.ProfileDepartureUpdate", profile_departure_update, 0x140, 0x40, true, 0x3d04eb059735d94f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif