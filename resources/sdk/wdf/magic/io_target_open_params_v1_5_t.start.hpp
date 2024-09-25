#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0x24d76daeb177cbe1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.Type", type, 0x0, 0x0, false, 0xcc8b559c4909a482)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0xfc16905e94dad749)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0xad7249867efce364)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0xded57880e83348f4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x392a12852e8bf0c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.TargetFileObject", target_file_object, 0x0, 0x0, false, 0xe16a5e87672acce1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x642b75a6f6210f7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.DesiredAccess", desired_access, 0x0, 0x0, false, 0x736e535c4efe9988)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.ShareAccess", share_access, 0x0, 0x0, false, 0x2be16f32f83872b3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.FileAttributes", file_attributes, 0x0, 0x0, false, 0x8c9e45b653d98818)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.CreateDisposition", create_disposition, 0x0, 0x0, false, 0x4935686a4c5b952)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.CreateOptions", create_options, 0x0, 0x0, false, 0x1af7579c374252ca)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xc888c4bf0873d421)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x2d08ba9888c79229)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.AllocationSize", allocation_size, 0x0, 0x0, false, 0x764510b651ea100c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_5.FileInformation", file_information, 0x0, 0x0, false, 0x64ac744459b489c4)
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
#define _m15
#define _m16
#endif