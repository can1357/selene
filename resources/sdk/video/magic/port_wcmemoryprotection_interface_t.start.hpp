#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.Size", size, 0x0, 0x10, true, 0x1c257afdb1c7eac0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.Version", version, 0x10, 0x10, true, 0x36db357319774764)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.Context", context, 0x40, 0x40, true, 0x9b351b41ed0f64c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xe8882dcd334fc477)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x1c03c2e0bc16c7c4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.VideoPortProtectWCMemory", video_port_protect_wc_memory, 0x100, 0x40, true, 0x9554f9a7b3767c9b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.VideoPortRestoreWCMemory", video_port_restore_wc_memory, 0x140, 0x40, true, 0xe9615d88e343081a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif