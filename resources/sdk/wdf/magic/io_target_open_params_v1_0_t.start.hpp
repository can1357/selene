#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0x5b93ecdaf3c8ceb8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.Type", type, 0x0, 0x0, false, 0x8afd83ac8ab871f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0x196222f7e5089d9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0xafe873c117426f0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0x9e3a6a7c71597643)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x63a5e0bc1915b94c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.TargetFileObject", target_file_object, 0x0, 0x0, false, 0x32e9b1b696187266)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0xbc2811574a0c404f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.DesiredAccess", desired_access, 0x0, 0x0, false, 0x78690818e874a9d5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.ShareAccess", share_access, 0x0, 0x0, false, 0xcfecc78ca967c315)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.FileAttributes", file_attributes, 0x0, 0x0, false, 0xfbc4dcbe2cd6d25d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.CreateDisposition", create_disposition, 0x0, 0x0, false, 0x36de37349240390c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.CreateOptions", create_options, 0x0, 0x0, false, 0x622359b9f6970929)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xd92415bf5139a287)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0xedd660b0ff0a8a49)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.AllocationSize", allocation_size, 0x0, 0x0, false, 0xe2db6e67edd87c7d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_0.FileInformation", file_information, 0x0, 0x0, false, 0xef573a7290170e2f)
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