#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.Size", size, 0x0, 0x0, false, 0xcf65bc90d88533b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.Type", type, 0x0, 0x0, false, 0x9996cf33681f900f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0x4c8a0feeffbc6d39)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0x1639c4610ae6c176)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0x5b3afa393e687d12)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x6df647f4cdbfe929)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.TargetFileObject", target_file_object, 0x0, 0x0, false, 0x307e62967c7ae02b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0xe6a90d7fa6ede0d0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.DesiredAccess", desired_access, 0x0, 0x0, false, 0xbd086e27a6e3e1bb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.ShareAccess", share_access, 0x0, 0x0, false, 0x748a582f689be855)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.FileAttributes", file_attributes, 0x0, 0x0, false, 0x21bda7a683d72092)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.CreateDisposition", create_disposition, 0x0, 0x0, false, 0xd0af58e3ff0f6c6a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.CreateOptions", create_options, 0x0, 0x0, false, 0xe5b1e46f06126c65)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xefed3afe5ea9aa5a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x2ca3c5932c55a080)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.AllocationSize", allocation_size, 0x0, 0x0, false, 0x5bc80cf1b029809f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_1.FileInformation", file_information, 0x0, 0x0, false, 0x1af29494fbbfbbf4)
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