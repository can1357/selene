#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VHF_CONFIG.Size", size, 0x0, 0x20, true, 0x4331fe7fc6ebd2aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VHF_CONFIG.VhfClientContext", vhf_client_context, 0x40, 0x40, true, 0x2c34854282e70125)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VHF_CONFIG.OperationContextSize", operation_context_size, 0x80, 0x20, true, 0xc7d7ad355155c7e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_VHF_CONFIG.DeviceObject", device_object, 0xc0, 0x40, true, 0xcba257852e0146ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.VendorID", vendor_id, 0x100, 0x10, true, 0x36d8354fe70c7d11)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.ProductID", product_id, 0x110, 0x10, true, 0xbe9082e67597562b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.VersionNumber", version_number, 0x120, 0x10, true, 0x410c9b404f2894d1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_VHF_CONFIG.ContainerID", container_id, 0x140, 0x80, true, 0x6619d35feeab3b75)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.InstanceIDLength", instance_id_length, 0x1c0, 0x10, true, 0x761058c518322824)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_VHF_CONFIG.InstanceID", instance_id, 0x200, 0x40, true, 0xec0a412153248b11)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.ReportDescriptorLength", report_descriptor_length, 0x240, 0x10, true, 0x25bc7a558d381f13)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_VHF_CONFIG.ReportDescriptor", report_descriptor, 0x280, 0x40, true, 0x5dee28a521fd2f16)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VHF_CONFIG.EvtVhfReadyForNextReadReport", evt_vhf_ready_for_next_read_report, 0x2c0, 0x40, true, 0x9238db305abeb95a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pevt_vhf_async_operation_t ), "_VHF_CONFIG.EvtVhfAsyncOperationGetFeature", evt_vhf_async_operation_get_feature, 0x300, 0x40, true, 0xa993b305b751b186)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pevt_vhf_async_operation_t ), "_VHF_CONFIG.EvtVhfAsyncOperationSetFeature", evt_vhf_async_operation_set_feature, 0x340, 0x40, true, 0x22c6a7f1d67a69b8)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pevt_vhf_async_operation_t ), "_VHF_CONFIG.EvtVhfAsyncOperationWriteReport", evt_vhf_async_operation_write_report, 0x380, 0x40, true, 0x29ea0b213ee45fe9)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pevt_vhf_async_operation_t ), "_VHF_CONFIG.EvtVhfAsyncOperationGetInputReport", evt_vhf_async_operation_get_input_report, 0x3c0, 0x40, true, 0x34f68593b78cacb2)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VHF_CONFIG.EvtVhfCleanup", evt_vhf_cleanup, 0x400, 0x40, true, 0xc60b0d12cfd3723e)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VHF_CONFIG.HardwareIDsLength", hardware_i_ds_length, 0x440, 0x10, true, 0x530161195eab0136)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_VHF_CONFIG.HardwareIDs", hardware_i_ds, 0x480, 0x40, true, 0x699a6ec44949a81e)
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
#define _m18
#define _m19
#endif