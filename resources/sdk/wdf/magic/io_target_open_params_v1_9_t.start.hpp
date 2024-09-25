#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0x45c91d6c388616ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.Type", type, 0x0, 0x0, false, 0x2de8f520976266c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0x5cb4c5b3f32cb7ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0x994927f5700a0ed4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0xadfc318bdbe306ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x2acf9a232713ef91)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.TargetFileObject", target_file_object, 0x0, 0x0, false, 0x5e492252fa5df553)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x6bb20b9c85755bca)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.DesiredAccess", desired_access, 0x0, 0x0, false, 0x3c8f0254a8b7344f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.ShareAccess", share_access, 0x0, 0x0, false, 0x16ece4e4dbfe5ad0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.FileAttributes", file_attributes, 0x0, 0x0, false, 0x5ab29cb6078d416c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.CreateDisposition", create_disposition, 0x0, 0x0, false, 0xe47b97596393378e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.CreateOptions", create_options, 0x0, 0x0, false, 0xbb0a82bbb693d92e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.EaBuffer", ea_buffer, 0x0, 0x0, false, 0x570a55fc4fcfee45)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x29b390e7910f3506)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.AllocationSize", allocation_size, 0x0, 0x0, false, 0x52ca9df875b4c5d8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_9.FileInformation", file_information, 0x0, 0x0, false, 0xfea9cecac785a561)
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