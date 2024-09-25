#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CLASS_DRIVER_EXTENSION.RegistryPath", registry_path, 0x0, 0x80, true, 0xb2d3c51382e9ca6c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_init_data_t), "_CLASS_DRIVER_EXTENSION.InitData", init_data, 0x80, 0x40, true, 0xdcd02df833553fab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_DRIVER_EXTENSION.DeviceCount", device_count, 0xcc0, 0x20, true, 0x5bd18899b6a4fa93)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_wmi_reginfo_ex_t ), "_CLASS_DRIVER_EXTENSION.ClassFdoQueryWmiRegInfoEx", class_fdo_query_wmi_reg_info_ex, 0xd00, 0x40, true, 0x4435d00e68d02bb5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_wmi_reginfo_ex_t ), "_CLASS_DRIVER_EXTENSION.ClassPdoQueryWmiRegInfoEx", class_pdo_query_wmi_reg_info_ex, 0xd40, 0x40, true, 0xade7ec56a5580628)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLASS_DRIVER_EXTENSION.EtwHandle", etw_handle, 0xd80, 0x40, true, 0x1e1906c765bcc307)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>), "_CLASS_DRIVER_EXTENSION.DeviceMajorFunctionTable", device_major_function_table, 0xdc0, 0x0, true, 0x7ccfabc5b90c57b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>), "_CLASS_DRIVER_EXTENSION.MpDeviceMajorFunctionTable", mp_device_major_function_table, 0x14c0, 0x0, true, 0x7f941af33a55fc06)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_interpret_sense_info2_t*), "_CLASS_DRIVER_EXTENSION.InterpretSenseInfo", interpret_sense_info, 0x1bc0, 0x40, true, 0x9efbe11471d4b839)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_working_set_t*), "_CLASS_DRIVER_EXTENSION.WorkingSet", working_set, 0x1c00, 0x40, true, 0x5571d7a56ad7773e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_DRIVER_EXTENSION.SrbSupport", srb_support, 0x1c40, 0x20, true, 0xa9ea4766a8b5f1de)
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
#endif