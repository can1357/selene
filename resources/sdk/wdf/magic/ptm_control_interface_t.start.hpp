#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PTM_CONTROL_INTERFACE.Size", size, 0x0, 0x10, true, 0xd7b168754ddefd81)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PTM_CONTROL_INTERFACE.Version", version, 0x10, 0x10, true, 0xaa898e6a0da3f880)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PTM_CONTROL_INTERFACE.Context", context, 0x40, 0x40, true, 0xb9427cee5a39ebc1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PTM_CONTROL_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x250949960a2ad7c6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PTM_CONTROL_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xd1c0b1240121ffa8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "_PTM_CONTROL_INTERFACE.QueryGranularity", query_granularity, 0x100, 0x40, true, 0xf5074b70b3bdc28)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_PTM_CONTROL_INTERFACE.QueryTimeSource", query_time_source, 0x140, 0x40, true, 0x62c8092ba46b7ad2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PTM_CONTROL_INTERFACE.Enable", enable, 0x180, 0x40, true, 0x71a7eab8e5632c08)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PTM_CONTROL_INTERFACE.Disable", disable, 0x1c0, 0x40, true, 0xa07cfed26023c3f4)
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