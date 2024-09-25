#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_INIT_DATA.InitializationDataSize", initialization_data_size, 0x0, 0x20, true, 0xea4fbbfeda074208)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_dev_info_t), "_CLASS_INIT_DATA.FdoData", fdo_data, 0x40, 0x40, true, 0x55be1dc796a57507)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_dev_info_t), "_CLASS_INIT_DATA.PdoData", pdo_data, 0x580, 0x40, true, 0x8708caee10aea608)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*), "_CLASS_INIT_DATA.ClassAddDevice", class_add_device, 0xac0, 0x40, true, 0xfd805adba88ec19)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*)>*), "_CLASS_INIT_DATA.ClassEnumerateDevice", class_enumerate_device, 0xb00, 0x40, true, 0x6a4d2624734848c6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_id_t ), "_CLASS_INIT_DATA.ClassQueryId", class_query_id, 0xb40, 0x40, true, 0x1070da5e150b83d7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_INIT_DATA.ClassStartIo", class_start_io, 0xb80, 0x40, true, 0x88d76e11e0cd9099)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_CLASS_INIT_DATA.ClassUnload", class_unload, 0xbc0, 0x40, true, 0x70819d04003a3747)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_tick_t ), "_CLASS_INIT_DATA.ClassTick", class_tick, 0xc00, 0x40, true, 0x89f85f8fced1e959)
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