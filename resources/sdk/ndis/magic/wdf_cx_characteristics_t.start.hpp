#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WDF_CX_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x17510bf891b6cb45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, uint8_t)>*, sdk::function<int32_t(void*, uint8_t, uint8_t)>*>), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxPowerReference", evt_cx_power_reference, 0x40, 0x40, true, 0x2cfec52c5363932f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxPowerDereference", evt_cx_power_dereference, 0x80, 0x40, true, 0xa929f11d24a3972c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetDeviceObject", evt_cx_get_device_object, 0x140, 0x40, true, 0x65f7f24cf2861d25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetNextDeviceObject", evt_cx_get_next_device_object, 0x180, 0x40, true, 0x9b0d5fcd7e282b77)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct nt::device_object_t*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetNdisHandleFromDeviceObject", evt_cx_get_ndis_handle_from_device_object, 0x200, 0x40, true, 0xb7624c9d3bf5a4e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::pm_parameters_t*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxUpdatePMParameters", evt_cx_update_pm_parameters, 0x240, 0x40, true, 0xbb21f687466432c3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, nt::unicode_view*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetAssignedFdoName", evt_cx_get_assigned_fdo_name, 0x1c0, 0x40, true, 0xeab65a62f44ac937)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void**)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxAllocateMiniportBlock", evt_cx_allocate_miniport_block, 0x280, 0x40, true, 0xa2d93dbbfbd1251b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::wdf_complete_add_params_t*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxMiniportCompleteAdd", evt_cx_miniport_complete_add, 0x2c0, 0x40, true, 0x9cc4ffe6b2d589d2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxDeviceStartComplete", evt_cx_device_start_complete, 0x300, 0x40, true, 0xa0faa7fe062fb39d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, enum ndis::net_device_reset_type_t)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxMiniportDeviceReset", evt_cx_miniport_device_reset, 0x340, 0x40, true, 0x551ff07ba92b7b90)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxMiniportQueryDeviceResetSupport", evt_cx_miniport_query_device_reset_support, 0x380, 0x40, true, 0x7ac00ca15004b4bf)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, int32_t, struct ndis::guid_t**)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetWmiEventGuid", evt_cx_get_wmi_event_guid, 0x3c0, 0x40, true, 0x7f5f6bb802dc17c3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxPowerAoAcEngage", evt_cx_power_ao_ac_engage, 0xc0, 0x40, true, 0x8b1e305b4c8306c8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxPowerAoAcDisengage", evt_cx_power_ao_ac_disengage, 0x100, 0x40, true, 0xdbcb96c2d09033f6)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum ndis::idle_condition_t)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxUpdateIdleCondition", evt_cx_update_idle_condition, 0x0, 0x0, false, 0x7d17d426b37ede72)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_NDIS_WDF_CX_CHARACTERISTICS.EvtCxGetAssignedFdoIndex", evt_cx_get_assigned_fdo_index, 0x0, 0x0, false, 0x899abfcd3e4df5c)
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