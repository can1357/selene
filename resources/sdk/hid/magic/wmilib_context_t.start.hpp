#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMILIB_CONTEXT.GuidCount", guid_count, 0x0, 0x20, true, 0xf66a51e9161c8af3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::wmiguidreginfo_t*), "_WMILIB_CONTEXT.GuidList", guid_list, 0x40, 0x40, true, 0x1cdbdfb70c69296b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view**, nt::unicode_view*, struct nt::device_object_t**)>*), "_WMILIB_CONTEXT.QueryWmiRegInfo", query_wmi_reg_info, 0x80, 0x40, true, 0x57f5e93d790f39e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t, uint8_t*)>*), "_WMILIB_CONTEXT.QueryWmiDataBlock", query_wmi_data_block, 0xc0, 0x40, true, 0x66a4e974a772a1dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint8_t*)>*), "_WMILIB_CONTEXT.SetWmiDataBlock", set_wmi_data_block, 0x100, 0x40, true, 0xf21bfa2509df8408)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*)>*), "_WMILIB_CONTEXT.SetWmiDataItem", set_wmi_data_item, 0x140, 0x40, true, 0xbbe007f7e2dd737f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*)>*), "_WMILIB_CONTEXT.ExecuteWmiMethod", execute_wmi_method, 0x180, 0x40, true, 0x37b58661faaecbe0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, enum hid::wmienabledisablecontrol_t, uint8_t)>*), "_WMILIB_CONTEXT.WmiFunctionControl", wmi_function_control, 0x1c0, 0x40, true, 0x4972f1fa6023c879)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif