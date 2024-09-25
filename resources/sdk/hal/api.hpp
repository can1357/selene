#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/adapter_t.hpp"
#include "../nt/bus_data_type_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/interface_type_t.hpp"
#include "../whea/error_record_t.hpp"
#include "../nt/device_description_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"
#include "../nt/physical_counter_resource_list_t.hpp"

#include "magic/api.start.hpp"
namespace hal
{
    // [HalAllocateCommonBufferDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d0050, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_common_buffer_dma_thin;
    
    // [HalAllocateCommonBufferDmaThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d0080, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) allocate_common_buffer_dma_thin_ex;
    
    // [HalAllocateCommonBufferDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5020a0, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) allocate_common_buffer_dmar_thin;
    
    // [HalAllocateCommonBufferDmarThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5020d0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) allocate_common_buffer_dmar_thin_ex;
    
    // [HalAllocateCommonBufferEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x14a30, 0x11e8 bytes
    //
    _m4(sdk::unknown_ptr) allocate_common_buffer_ex;
    
    // [HalAllocateCommonBufferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fdb70, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) allocate_common_buffer_v3;
    
    // [HalAllocateCommonBufferWithBoundsDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x501b90, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) allocate_common_buffer_with_bounds_dma_thin;
    
    // [HalAllocateCommonBufferWithBoundsDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502170, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) allocate_common_buffer_with_bounds_dmar_thin;
    
    // [HalAllocateDomainCommonBufferDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x501c10, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) allocate_domain_common_buffer_dma_thin;
    
    // [HalAllocateDomainCommonBufferDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5021f0, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) allocate_domain_common_buffer_dmar_thin;
    
    // [HalBuildMdlFromScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x382b30, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) build_mdl_from_scatter_gather_list_dma_thin;
    
    // [HalBuildScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x344450, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) build_scatter_gather_list_dma_thin;
    
    // [HalBuildScatterGatherListDmaThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45b2f0, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) build_scatter_gather_list_dma_thin_ex;
    
    // [HalBuildScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502250, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) build_scatter_gather_list_dmar_thin;
    
    // [HalBuildScatterGatherListDmarThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5022d0, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) build_scatter_gather_list_dmar_thin_ex;
    
    // [HalCancelAdapterChannelDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x501c70, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) cancel_adapter_channel_dma_thin;
    
    // [HalCancelAdapterChannelDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502380, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) cancel_adapter_channel_dmar_thin;
    
    // [HalCreateCommonBufferFromMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x500d50, 0x1fd000 bytes
    //
    _n7(sdk::unknown_ptr) create_common_buffer_from_mdl;
    
    // [HalCreateCommonBufferFromMdlDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x501d20, 0x1fd000 bytes
    //
    _n8(sdk::unknown_ptr) create_common_buffer_from_mdl_dma_thin;
    
    // [HalCreateCommonBufferFromMdlDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502450, 0x1fd000 bytes
    //
    _n9(sdk::unknown_ptr) create_common_buffer_from_mdl_dmar_thin;
    
    // [HAL_ETW_EVENT_WATCHDOG_WAKE_TIMER_TRIGGERED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .rdata:0x3efc0, 0x11e8 bytes
    //
    _o0(sdk::unknown_ptr) etw_event_watchdog_wake_timer_triggered;
    
    // [HalFreeCommonBufferDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391ab0, 0x1fd000 bytes
    //
    _o1(sdk::unknown_ptr) free_common_buffer_dma_thin;
    
    // [HalFreeCommonBufferDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502640, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) free_common_buffer_dmar_thin;
    
    // [HalFreeCommonBufferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x504720, 0x1fd000 bytes
    //
    _o3(sdk::unknown_ptr) free_common_buffer_v2;
    
    // [HalGetScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x344260, 0x1fd000 bytes
    //
    _o4(sdk::unknown_ptr) get_scatter_gather_list_dma_thin;
    
    // [HalGetScatterGatherListDmaThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502000, 0x1fd000 bytes
    //
    _o5(sdk::unknown_ptr) get_scatter_gather_list_dma_thin_ex;
    
    // [HalGetScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45b3a0, 0x1fd000 bytes
    //
    _o6(sdk::unknown_ptr) get_scatter_gather_list_dmar_thin;
    
    // [HalGetScatterGatherListDmarThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502710, 0x1fd000 bytes
    //
    _o7(sdk::unknown_ptr) get_scatter_gather_list_dmar_thin_ex;
    
    // [HalPrmHardwareIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3dff0, 0x1fd000 bytes
    //
    _o8(sdk::unknown_ptr) prm_hardware_id_string;
    
    // [HalPutScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x355200, 0x1fd000 bytes
    //
    _o9(sdk::unknown_ptr) put_scatter_gather_list_dma_thin;
    
    // [HalPutScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45b410, 0x1fd000 bytes
    //
    _p0(sdk::unknown_ptr) put_scatter_gather_list_dmar_thin;
    
    // [HalPutScatterGatherListV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3978d4, 0x1fd000 bytes
    //
    _p1(sdk::unknown_ptr) put_scatter_gather_list_v2;
    
    // [HalReadDmaCounterV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f0e70, 0x1fd000 bytes
    //
    _p2(sdk::unknown_ptr) read_dma_counter_v2;
    
    // [HalAllocateCommonBufferExThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c4fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c4ec0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) allocate_common_buffer_ex_thin;
    
    // [HalAllocateCommonBufferThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c4f60, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) allocate_common_buffer_thin;
    
    // [HalAllocateCommonBufferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // hal.dll .text:0x22244, 0x11e8 bytes
    // ntoskrnl.exe .text:0x309b40, 0x1fd000 bytes
    //
    _p5(sdk::unknown_ptr) allocate_common_buffer_v2;
    
    // [HalAllocateCommonBufferWithBoundsThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c50a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c4f90, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) allocate_common_buffer_with_bounds_thin;
    
    // [HalAllocateDomainCommonBufferThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5010, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) allocate_domain_common_buffer_thin;
    
    // [HalBuildScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5070, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) build_scatter_gather_list_thin;
    
    // [HalBuildScatterGatherListThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c50f0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) build_scatter_gather_list_thin_ex;
    
    // [HalCancelAdapterChannelThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c52b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c51a0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) cancel_adapter_channel_thin;
    
    // [HalFreeCommonBufferThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5270, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) free_common_buffer_thin;
    
    // [HalGetScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5640, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) get_scatter_gather_list_thin;
    
    // [HalGetScatterGatherListThinEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c57c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c56b0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) get_scatter_gather_list_thin_ex;
    
    // [HalPutScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5750, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) put_scatter_gather_list_thin;
    
    // [HalAllocateCommonBufferExV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37d230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e5b0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) allocate_common_buffer_ex_v2;
    
    // [HalAllocateCommonBufferExV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fdae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39db30, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) allocate_common_buffer_ex_v3;
    
    // [HalAllocateCommonBufferVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bfd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fdba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bfc40, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) allocate_common_buffer_vector;
    
    // [HalAllocateCommonBufferWithBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c0160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fdc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0050, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) allocate_common_buffer_with_bounds;
    
    // [HAL_ETW_EVENT_IOMMU_FAULT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfe00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x131f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf968, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) etw_event_iommu_fault;
    
    // [HAL_ETW_EVENT_IOMMU_FAULT_INIT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xbe78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe7c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb610, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) etw_event_iommu_fault_init;
    
    // [HalFirmwareInformationBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49da0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d80, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) firmware_information_block;
    
    // [HalFreeCommonBufferFromVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c0600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe1b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c04f0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) free_common_buffer_from_vector;
    
    // [HalFreeCommonBufferVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c0670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0560, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) free_common_buffer_vector;
    
    // [HalGetCommonBufferFromVectorByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c07d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c06c0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) get_common_buffer_from_vector_by_index;
    
    // [HalGetDmaTransferInfoInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39af48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459edc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39c408, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) get_dma_transfer_info_internal;
    
    // [HalIommuDispatchCalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49cd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cb0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) iommu_dispatch_called;
    
    // [HalMcFinishMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a6250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4bf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4c10, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) mc_finish_microcode;
    
    // [HalMcSleepDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49601, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60701, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495e1, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) mc_sleep_disabled;
    
    // [HalWheaUpdateCmciPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b5dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6680, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) whea_update_cmci_policy;
    
    // [HalAcpiDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d040, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x5870, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5f00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5860, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) acpi_dispatch_table;
    
    // [HalAcpiEmCheckOperator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21aa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0658, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2c40, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) acpi_em_check_operator;
    
    // [HalAcpiGetAllTablesDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11fb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b65f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6ea0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) acpi_get_all_tables_dispatch;
    
    // [HalAcpiGetFacsMappingDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa330, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b5b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c23b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b63b0, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) acpi_get_facs_mapping_dispatch;
    
    // [HalAcpiGetRsdpDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17cc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x360fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3623e0, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) acpi_get_rsdp_dispatch;
    
    // [HalAcpiGetTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c54c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6390, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) acpi_get_table;
    
    // [HalAcpiGetTableDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3f00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35f8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30c970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f86f0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) acpi_get_table_dispatch;
    
    // [HalAcpiGetTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2e70, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) acpi_get_table_ex;
    
    // [HalAcpiHardwareIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ddf0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xecd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12c30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe798, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) acpi_hardware_id_string;
    
    // [HalAcquireDisplayOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s9(sdk::function<void(sdk::function<uint8_t(uint32_t, uint32_t)>*)>*) acquire_display_ownership;
    
    // [HalAdjustResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) adjust_resource_list;
    
    // [HalAllProcessorsStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d440, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa70e60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60e70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa70150, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) all_processors_started;
    
    // [HalAllocateAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x44b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3040, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) allocate_adapter_channel;
    
    // [HalAllocateAdapterChannelEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x502ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4700, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) allocate_adapter_channel_ex;
    
    // [HalAllocateAdapterChannelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4894, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6cb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6ba4, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) allocate_adapter_channel_v2;
    
    // [HalAllocateCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa3e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37d3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e770, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) allocate_common_buffer;
    
    // [HalAllocateCrashDumpRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21f20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b32e0, 0x1fe000 bytes
    //
    _t6(sdk::function<void*(struct dma::adapter_t*, uint32_t*)>*) allocate_crash_dump_registers;
    
    // [HalAllocateDomainCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14ab0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bebe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x500cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bead0, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) allocate_domain_common_buffer;
    
    // [HalAllocateHardwareCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c960, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x861570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f9a0, 0x1fe000 bytes
    //
    _t8(sdk::function<int32_t(struct nt::group_affinity_t*, uint32_t, struct nt::physical_counter_resource_list_t*, void**)>*) allocate_hardware_counters;
    
    // [HalAssignSlotResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5da40, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8614e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92ef20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f910, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) assign_slot_resources;
    
    // [HalBugCheckSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x361a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b36f0, 0x1fe000 bytes
    //
    _u0(sdk::function<void(struct whea::error_source_descriptor_t*, struct whea::error_record_t*)>*) bug_check_system;
    
    // [HalBuildMdlFromScatterGatherListV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3930, 0x11e8 bytes
    // ntoskrnl.exe .text:0x24f870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ab80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd090, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) build_mdl_from_scatter_gather_list_v2;
    
    // [HalBuildMdlFromScatterGatherListV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c01c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fdce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c00b0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) build_mdl_from_scatter_gather_list_v3;
    
    // [HalBuildScatterGatherListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22570, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fdf70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0340, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) build_scatter_gather_list_ex;
    
    // [HalBuildScatterGatherListV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x23a8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7f40, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) build_scatter_gather_list_v2;
    
    // [HalBuildScatterGatherListV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13770, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39a8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39bd70, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) build_scatter_gather_list_v3;
    
    // [HalCalculateScatterGatherListSizeV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x222d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37df40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f2c0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) calculate_scatter_gather_list_size_v2;
    
    // [HalCalculateScatterGatherListSizeV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d990, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) calculate_scatter_gather_list_size_v3;
    
    // [HalCalibratePerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6910, 0x11e8 bytes
    // ntoskrnl.exe .text:0x380540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4edc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381300, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) calibrate_performance_counter;
    
    // [HalCancelAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x225d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0400, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) cancel_adapter_channel;
    
    // [HalCancelMappedTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22e40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c48d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x502fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c47c0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) cancel_mapped_transfer;
    
    // [HalClearSoftwareInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) clear_software_interrupt;
    
    // [HalConfigureAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24e10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c85a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8490, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) configure_adapter_channel;
    
    // [HalConvertDeviceIdtToIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59370, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x752970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a230, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) convert_device_idt_to_irql;
    
    // [HalDisableInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6b70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x372bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373f30, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) disable_interrupt;
    
    // [HalDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f43b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02490, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00a60, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) dispatch_table;
    
    // [HalDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) display_string;
    
    // [HalDmaAllocateCrashDumpRegistersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6e30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a19b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2e70, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) dma_allocate_crash_dump_registers_ex;
    
    // [HalDmaFreeCrashDumpRegistersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7010, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a25c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3b10, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) dma_free_crash_dump_registers_ex;
    
    // [HalEfiGetEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2673c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bde8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a47c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bdd7c, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) efi_get_environment_variable;
    
    // [HalEfiGetTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x267b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bdf18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc87c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bde08, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) efi_get_time;
    
    // [HalEfiMissedMappingsCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d22c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49de0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49dc0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) efi_missed_mappings_count;
    
    // [HalEfiQueryCapsuleCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26918, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be134, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcaac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be024, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) efi_query_capsule_capabilities;
    
    // [HalEfiQueryVariableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26988, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be1b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcb3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be0a8, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) efi_query_variable_info;
    
    // [HalEfiResetSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x269e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be22c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcbc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be11c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) efi_reset_system;
    
    // [HalEfiRuntimeServicesBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1e0, 0x11e8 bytes
    // ntoskrnl.exe CFGRO:0xe01870, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01870, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01870, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) efi_runtime_services_block;
    
    // [HalEfiRuntimeServicesTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d238, 0x11e8 bytes
    // ntoskrnl.exe CFGRO:0xe00008, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe00010, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe00008, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) efi_runtime_services_table;
    
    // [HalEfiSetEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26a70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be2b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcc5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be1a4, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) efi_set_environment_variable;
    
    // [HalEfiSetTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26afc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be34c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be23c, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) efi_set_time;
    
    // [HalEfiSetVirtualAddressMapStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d230, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49de4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ac4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49dc4, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) efi_set_virtual_address_map_status;
    
    // [HalEfiToNtStatusMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f070, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2fa70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16d60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2fdb0, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) efi_to_nt_status_mappings;
    
    // [HalEfiUpdateCapsule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26d14, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be564, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcf4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be454, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) efi_update_capsule;
    
    // [HalEnableInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd120, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3888c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3747e0, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) enable_interrupt;
    
    // [HalEnumerateEnvironmentVariablesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26070, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b61c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f46c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6090, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) enumerate_environment_variables_ex;
    
    // [HalEnumerateProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x124c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3af6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b6b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab120, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) enumerate_processors;
    
    // [HAL_ETW_EVENT_EXPECTED_FALLBACK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3eff0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2ee20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d200, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f160, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) etw_event_expected_fallback;
    
    // [HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f020, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2f450, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d9c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f790, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) etw_event_firmware_sleep_corruption;
    
    // [HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f000, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xd4c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d2b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcc10, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) etw_event_timer_proc_delta_report;
    
    // [HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3efe0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xd4d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ce10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcc20, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) etw_event_timer_proc_synch_report;
    
    // [HAL_ETW_EVENT_TIMER_SYNCH_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3efb0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2e018, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c140, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e358, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) etw_event_timer_synch_failed;
    
    // [HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3efa0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xd4e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c050, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcc30, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) etw_event_timer_synch_summary;
    
    // [HAL_ETW_EVENT_UNEXPECTED_FALLBACK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3efd0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2e8e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cb58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ec28, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) etw_event_unexpected_fallback;
    
    // [HAL_ETW_EVENT_WATCHDOG_TRIGGERED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f010, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2f0f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d590, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f438, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) etw_event_watchdog_triggered;
    
    // [HAL_ETW_PROVIDER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e048, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe808, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12130, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe2b8, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) etw_provider;
    
    // [HalExamineMBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88aed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889680, 0x1fe000 bytes
    //
    _y4(sdk::function<void(struct nt::device_object_t*, uint32_t, uint32_t, void**)>*) examine_mbr;
    
    // [HalFirmwareTypeEfi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d240, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49de8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ac8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49dc8, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) firmware_type_efi;
    
    // [HalFixInterruptLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29610, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1d24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5102d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1c14, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) fix_interrupt_line;
    
    // [HalFlushAdapterBuffersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa530, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39e230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f6f0, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) flush_adapter_buffers_ex;
    
    // [HalFlushCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17e50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3626b0, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) flush_common_buffer;
    
    // [HalFlushDmaBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25c20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bec40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4beb30, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) flush_dma_buffer;
    
    // [HalFreeAdapterObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4870, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c05d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c04c0, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) free_adapter_object;
    
    // [HalFreeCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22130, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37df70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f2f0, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) free_common_buffer;
    
    // [HalFreeCommonBufferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x155f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bec90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x501130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4beb80, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) free_common_buffer_v3;
    
    // [HalFreeHardwareCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c9b0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8616c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f1c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85faf0, 0x1fe000 bytes
    //
    _z3(sdk::function<int32_t(void*)>*) free_hardware_counters;
    
    // [HalGetAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c0f0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x861550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92ef90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f980, 0x1fe000 bytes
    //
    _z4(sdk::function<struct dma::adapter_t*(struct nt::device_description_t*, uint32_t*)>*) get_adapter;
    
    // [HalGetAdapterV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58e00, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x745de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8218, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74da20, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) get_adapter_v2;
    
    // [HalGetAdapterV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x597e8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7a51e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad2f0, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) get_adapter_v3;
    
    // [HalGetBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdac0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c2d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3b50, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) get_bus_data;
    
    // [HalGetBusDataByOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdae0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b340, 0x1fe000 bytes
    //
    _z8(sdk::function<uint32_t(enum nt::bus_data_type_t, uint32_t, uint32_t, void*, uint32_t, uint32_t)>*) get_bus_data_by_offset;
    
    // [HalGetDmaAdapterInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22670, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0740, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) get_dma_adapter_info;
    
    // [HalGetDmaAlignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17cd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2604c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3480, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) get_dma_alignment;
    
    // [HalGetDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362580, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) get_dma_domain;
    
    // [HalGetDmaTransferInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13d50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c08c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c07b0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) get_dma_transfer_info;
    
    // [HalGetEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x263b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b61e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f46e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b60b0, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) get_environment_variable;
    
    // [HalGetEnvironmentVariableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b5fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6850, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) get_environment_variable_ex;
    
    // [HalGetInterruptTargetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15120, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c45f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c07a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5360, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) get_interrupt_target_information;
    
    // [HalGetInterruptVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27c40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b58f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b57c0, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) get_interrupt_vector;
    
    // [HalGetMemoryCachingRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14f10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39fcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d18d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a1190, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) get_memory_caching_requirements;
    
    // [HalGetMessageRoutingInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14c50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x372cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3884e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374030, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) get_message_routing_info;
    
    // [HalGetProcessorIdByNtNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x149b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x372e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374200, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) get_processor_id_by_nt_number;
    
    // [HalGetScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x255290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304580, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) get_scatter_gather_list;
    
    // [HalGetScatterGatherListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x226e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c07f0, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) get_scatter_gather_list_ex;
    
    // [HalGetVectorInput]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15eb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c5480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6350, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) get_vector_input;
    
    // [HalHandleMcheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36d20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b7130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f55d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7000, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) handle_mcheck;
    
    // [HalHandleNMI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x370f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b7e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f61e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7ce0, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) handle_nmi;
    
    // [HalHardwareIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ddd8, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xee28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x131b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe8e8, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) hardware_id_string;
    
    // [HalInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60810, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x997f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa75280, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997690, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) init_system;
    
    // [HalInitializeBios]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7310, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bfdb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d40f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0bc0, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) initialize_bios;
    
    // [HalInitializeDmaTransferContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17ce0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362590, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) initialize_dma_transfer_context;
    
    // [HalInitializeOnResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3885e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f64f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389020, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) initialize_on_resume;
    
    // [HalInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcb70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a3dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9750, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) initialize_processor;
    
    // [HalInstanceIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ddd0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xed0c, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12c64, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe7cc, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) instance_id_string;
    
    // [HalIommuDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f58a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04e18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e58, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) iommu_dispatch;
    
    // [HalIommuDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5470, 0x32828 bytes
    // ntoskrnl.exe .data:0xc048b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06b70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc048f0, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) iommu_dispatch_table;
    
    // [HalIsHyperThreadingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16380, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a4350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9cd0, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) is_hyper_threading_enabled;
    
    // [HalJoinDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25c70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c2560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3370, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) join_dma_domain;
    
    // [HalLeaveDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25d50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bf060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x501230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bef50, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) leave_dma_domain;
    
    // [HalMakeBeep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29690, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b80f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7fc0, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) make_beep;
    
    // [HalMapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa900, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bde20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8b50, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) map_io_space;
    
    // [HalMapTransferEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13a70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39abe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5032a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39c0a0, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) map_transfer_ex;
    
    // [HalMatchAcpiCreatorRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21d00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2e90, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) match_acpi_creator_revision;
    
    // [HalMatchAcpiFADTBootArch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14f90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d79f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1340, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) match_acpi_fadt_boot_arch;
    
    // [HalMatchAcpiOemId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13fa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bb660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc010, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) match_acpi_oem_id;
    
    // [HalMatchAcpiOemRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21d80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f08e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2f10, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) match_acpi_oem_revision;
    
    // [HalMatchAcpiOemTableId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c97a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca690, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) match_acpi_oem_table_id;
    
    // [HalMatchAcpiRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21e00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b30c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2f90, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) match_acpi_revision;
    
    // [HalMcUpdateReadPCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34cd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5041b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6540, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) mc_update_read_pci_config;
    
    // [HalName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3de28, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xa348, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xedc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb288, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) name;
    
    // [HalPerformEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1572b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec5b0, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) perform_end_of_interrupt;
    
    // [HalPerformEndOfInterruptAtController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49000, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc00a48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00a48, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) perform_end_of_interrupt_at_controller;
    
    // [HalPnpGetDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbcb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3751f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376570, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) pnp_get_dma_adapter;
    
    // [HalPnpInterfaceNullReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) pnp_interface_null_reference;
    
    // [HalPrivateDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5080, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc019b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00590, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) private_dispatch_table;
    
    // [HalProcessorIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17380, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1570, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) processor_idle;
    
    // [HalPutDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22150, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2617b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261190, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) put_dma_adapter;
    
    // [HalPutScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3460, 0x11e8 bytes
    // ntoskrnl.exe .text:0x247e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3978a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f30d0, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) put_scatter_gather_list;
    
    // [HalPutScatterGatherListV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa41c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39e120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe498, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f5e0, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) put_scatter_gather_list_v3;
    
    // [HalQueryDisplayParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) query_display_parameters;
    
    // [HalQueryEnvironmentVariableInfoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26450, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6150, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) query_environment_variable_info_ex;
    
    // [HalQueryMaximumProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd900, 0x11e8 bytes
    // ntoskrnl.exe .text:0x377120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3871e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3784a0, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) query_maximum_processor_count;
    
    // [HalQueryRealTimeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x254850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201830, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) query_real_time_clock;
    
    // [HalReadBootRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x651b4, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a6a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cfe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a59d4, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) read_boot_register;
    
    // [HalReadDmaCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22010, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b33e0, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) read_dma_counter;
    
    // [HalReadDmaCounterV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22e80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4810, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) read_dma_counter_v3;
    
    // [HalRealAllocateAdapterChannelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22220, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6e20, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) real_allocate_adapter_channel_v2;
    
    // [HalRealAllocateAdapterChannelV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22ea0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4840, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) real_allocate_adapter_channel_v3;
    
    // [HalRegisterDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b83d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b82a0, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) register_dynamic_processor;
    
    // [HalRegisterErrataCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d410, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa405e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f1e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47390, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) register_errata_callbacks;
    
    // [HalRegisterPermanentAddressUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12d70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a9ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a88b0, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) register_permanent_address_usage;
    
    // [HalReportResourceUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69ba0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa38f30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2abe0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa393e0, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) report_resource_usage;
    
    // [HalRequestClockInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2290, 0x11e8 bytes
    // ntoskrnl.exe .text:0x25ddf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e540, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) request_clock_interrupt;
    
    // [HalRequestDeferredRecoveryServiceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x289c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b82d0, 0x1fe000 bytes
    //
    _g1(sdk::unknown_ptr) request_deferred_recovery_service_interrupt;
    
    // [HalRequestIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2710, 0x11e8 bytes
    // ntoskrnl.exe .text:0x23c8e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359690, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) request_ipi;
    
    // [HalRequestIpiSpecifyVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1f70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x300d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b5f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26b1e0, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) request_ipi_specify_vector;
    
    // [HalRequestSoftwareInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x20dd70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3599f0, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) request_software_interrupt;
    
    // [HalReturnToFirmware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x299a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8740, 0x1fe000 bytes
    //
    _g5(sdk::unknown_ptr) return_to_firmware;
    
    // [HalSendNMI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1dc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8310, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) send_nmi;
    
    // [HalSendSoftwareInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x252980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b5fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x302850, 0x1fe000 bytes
    //
    _g7(sdk::function<void(uint32_t, uint8_t)>*) send_software_interrupt;
    
    // [HalSetBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34b70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f09e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3010, 0x1fe000 bytes
    //
    _g8(sdk::unknown_ptr) set_bus_data;
    
    // [HalSetBusDataByOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd9c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b220, 0x1fe000 bytes
    //
    _g9(sdk::function<uint32_t(enum nt::bus_data_type_t, uint32_t, uint32_t, void*, uint32_t, uint32_t)>*) set_bus_data_by_offset;
    
    // [HalSetDisplayParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _h0(sdk::unknown_ptr) set_display_parameters;
    
    // [HalSetEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26510, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6250, 0x1fe000 bytes
    //
    _h1(sdk::unknown_ptr) set_environment_variable;
    
    // [HalSetEnvironmentVariableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x265f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6330, 0x1fe000 bytes
    //
    _h2(sdk::unknown_ptr) set_environment_variable_ex;
    
    // [HalSetProfileInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27890, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8d60, 0x1fe000 bytes
    //
    _h3(sdk::unknown_ptr) set_profile_interval;
    
    // [HalSetRealTimeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a530, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1100, 0x1fe000 bytes
    //
    _h4(sdk::unknown_ptr) set_real_time_clock;
    
    // [HalSetTimerProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a640, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfb90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfa80, 0x1fe000 bytes
    //
    _h5(sdk::unknown_ptr) set_timer_problem;
    
    // [HalSocGetAcpiTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10ec8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa004, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c10bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a89c4, 0x1fe000 bytes
    //
    _h6(sdk::unknown_ptr) soc_get_acpi_table;
    
    // [HalSocRequestApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfc38, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d59c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8f3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ea5c, 0x1fe000 bytes
    //
    _h7(sdk::unknown_ptr) soc_request_api;
    
    // [HalSocRequestConfigurationData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfa78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d39c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8918, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e85c, 0x1fe000 bytes
    //
    _h8(sdk::unknown_ptr) soc_request_configuration_data;
    
    // [HalStartDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28360, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b69b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6880, 0x1fe000 bytes
    //
    _h9(sdk::unknown_ptr) start_dynamic_processor;
    
    // [HalStartNextProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39de60, 0x1fe000 bytes
    //
    _i0(sdk::unknown_ptr) start_next_processor;
    
    // [HalStartProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x278d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8da0, 0x1fe000 bytes
    //
    _i1(sdk::unknown_ptr) start_profile_interrupt;
    
    // [HalStopProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x278f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8dd0, 0x1fe000 bytes
    //
    _i2(sdk::unknown_ptr) stop_profile_interrupt;
    
    // [HalSubComponents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d540, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x8120, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8e00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8110, 0x1fe000 bytes
    //
    _i3(sdk::unknown_ptr) sub_components;
    
    // [HalSystemVectorDispatchEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _i4(sdk::unknown_ptr) system_vector_dispatch_entry;
    
    // [HalTranslateBusAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa8c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b62d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2530, 0x1fe000 bytes
    //
    _i5(sdk::function<uint8_t(enum nt::interface_type_t, uint32_t, int64_t, uint32_t*, int64_t*)>*) translate_bus_address;
    
    // [HalUefiHardwareIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f290, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2fcb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12c10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2fff0, 0x1fe000 bytes
    //
    _i6(sdk::unknown_ptr) uefi_hardware_id_string;
    
    // [HalUnmapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a680, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfad0, 0x1fe000 bytes
    //
    _i7(sdk::unknown_ptr) unmap_io_space;
    
    // [HalUpdateTimerCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd4b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39cde0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e2a0, 0x1fe000 bytes
    //
    _i8(sdk::unknown_ptr) update_timer_capabilities;
    
    // [HalWriteBootRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x651f8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a6aac, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d030, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5a1c, 0x1fe000 bytes
    //
    _i9(sdk::unknown_ptr) write_boot_register;
};
#include "magic/api.end.hpp"
