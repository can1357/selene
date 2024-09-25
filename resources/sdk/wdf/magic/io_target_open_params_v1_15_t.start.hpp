#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.Size", size, 0x0, 0x0, false, 0x73288a0f2a21cbb4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.Type", type, 0x0, 0x0, false, 0x54d078a1d7093236)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0x4de43321f4d2210)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0xa3ed2f8a15847f02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0xcb24504e2a5c79f6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0xfc99322a45e7783e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.TargetFileObject", target_file_object, 0x0, 0x0, false, 0x182c5b654da99a1f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x50148726e7e3c5e4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.DesiredAccess", desired_access, 0x0, 0x0, false, 0x3f6b1e38c1b7dab9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.ShareAccess", share_access, 0x0, 0x0, false, 0xf89cf095f6f9906d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.FileAttributes", file_attributes, 0x0, 0x0, false, 0x67fa5ba9bf5ca900)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.CreateDisposition", create_disposition, 0x0, 0x0, false, 0x65e5fe17b8b848c5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.CreateOptions", create_options, 0x0, 0x0, false, 0x4ed8f3018b3fa63a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.EaBuffer", ea_buffer, 0x0, 0x0, false, 0x9da7ca67a4da8966)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x219fd3686aa1c447)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.AllocationSize", allocation_size, 0x0, 0x0, false, 0x5a133514dfaed31d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.FileInformation", file_information, 0x0, 0x0, false, 0xc00998bf458d81b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_15.FileName", file_name, 0x0, 0x0, false, 0x8735d464e7f771df)
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
#define _m17
#endif