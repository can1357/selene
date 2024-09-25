#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ata
{
    // [AtaBuildCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x8598, 0x5f10 bytes
    //
    _m00(sdk::unknown_ptr) ata_build_crb;
    
    // [AtaReadWriteCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x8c44, 0x5f10 bytes
    //
    _m01(sdk::unknown_ptr) ata_read_write_crb;
    
    // [CallMiniPortHwStartIo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x614c, 0x5f10 bytes
    //
    _m02(sdk::unknown_ptr) call_mini_port_hw_start_io;
    
    // [IdeExecuteScsiCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x83ec, 0x5f10 bytes
    //
    _m03(sdk::unknown_ptr) ide_execute_scsi_crb;
    
    // [IdeLogCrbActive]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x1e88, 0x5f10 bytes
    //
    _m04(sdk::unknown_ptr) ide_log_crb_active;
    
    // [IdeLunQueueInsert]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xecb4, 0x5f10 bytes
    //
    _m05(sdk::unknown_ptr) ide_lun_queue_insert;
    
    // [IdeLunQueueRemoveNext]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xee4c, 0x5f10 bytes
    //
    _m06(sdk::unknown_ptr) ide_lun_queue_remove_next;
    
    // [IdePortSetupMappedDataBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xd60c, 0x5f10 bytes
    //
    _m07(sdk::unknown_ptr) ide_port_setup_mapped_data_buffer;
    
    // [IdeRemoveCrbFromDeviceQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xb3a4, 0x5f10 bytes
    //
    _m08(sdk::unknown_ptr) ide_remove_crb_from_device_queue;
    
    // [IdeSeverCompletedList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xcbf4, 0x5f10 bytes
    //
    _m09(sdk::unknown_ptr) ide_sever_completed_list;
    
    // [IdeTranslateCompletedRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x4428, 0x5f10 bytes
    //
    _m10(sdk::unknown_ptr) ide_translate_completed_request;
    
    // [IdepInterpretTransportErrors]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x46fc, 0x5f10 bytes
    //
    _m11(sdk::unknown_ptr) idep_interpret_transport_errors;
    
    // [Microsoft_Windows_ATAPortHandle]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .data:0x19060, 0x5f10 bytes
    //
    _m12(sdk::unknown_ptr) microsoft_windows_ata_port_handle;
    
    // [ProcessStatusSuccess]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x59fc, 0x5f10 bytes
    //
    _m13(sdk::unknown_ptr) process_status_success;
    
    // [ProxyCompleteRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x10128, 0x5f10 bytes
    //
    _m14(sdk::unknown_ptr) proxy_complete_request;
    
    // [ProxyGetPhysicalAddress]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x10654, 0x5f10 bytes
    //
    _m15(sdk::unknown_ptr) proxy_get_physical_address;
    
    // [ProxyRegistryAllocateBuffer]
    // Ldr = [ataport.sys]
    // => Windows 11
    // ataport.sys .text:0x15a18, 0x5f38 bytes
    //
    _m16(sdk::unknown_ptr) proxy_registry_allocate_buffer;
    
    // [Template_ccccq]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x3e10, 0x5f10 bytes
    //
    _m17(sdk::unknown_ptr) template_ccccq;
    
    // [Template_pc]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x5b1c, 0x5f10 bytes
    //
    _m18(sdk::unknown_ptr) template_pc;
    
    // [Template_pcxxp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x128dc, 0x5f10 bytes
    //
    _m19(sdk::unknown_ptr) template_pcxxp;
    
    // [Template_xpccp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xdaf0, 0x5f10 bytes
    //
    _m20(sdk::unknown_ptr) template_xpccp;
    
    // [TransferAvioRequests]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x13d34, 0x5f10 bytes
    //
    _m21(sdk::unknown_ptr) transfer_avio_requests;
    
    // [WPP_0b603cb1294d3684226ef2c638a4c45b_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x168a0, 0x5f10 bytes
    //
    _m22(sdk::unknown_ptr) wpp_0b603cb1294d3684226ef2c638a4c45b_traceguids;
    
    // [WPP_11bd0d7c05db328555421558fc457712_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x168f0, 0x5f10 bytes
    //
    _m23(sdk::unknown_ptr) wpp_11bd0d7c05db328555421558fc457712_traceguids;
    
    // [WPP_29cc73cc318b3a559805e4722588468e_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16590, 0x5f10 bytes
    //
    _m24(sdk::unknown_ptr) wpp_29cc73cc318b3a559805e4722588468e_traceguids;
    
    // [WPP_363b2ba3e8203fccf80ce39641ffbf9c_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x168c0, 0x5f10 bytes
    //
    _m25(sdk::unknown_ptr) wpp_363b2ba3e8203fccf80ce39641ffbf9c_traceguids;
    
    // [WPP_377dee39df9c3dd04a1224ebd0a127ae_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16890, 0x5f10 bytes
    //
    _m26(sdk::unknown_ptr) wpp_377dee39df9c3dd04a1224ebd0a127ae_traceguids;
    
    // [WPP_471d45a42f1d3046648ae19a8112ee71_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x167a0, 0x5f10 bytes
    //
    _m27(sdk::unknown_ptr) wpp_471d45a42f1d3046648ae19a8112ee71_traceguids;
    
    // [WPP_5c0fa40589613f95a426c47e49b14573_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x168e0, 0x5f10 bytes
    //
    _m28(sdk::unknown_ptr) wpp_5c0fa40589613f95a426c47e49b14573_traceguids;
    
    // [WPP_6fb1ee2faf373cd420e2167ace32a088_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16810, 0x5f10 bytes
    //
    _m29(sdk::unknown_ptr) wpp_6fb1ee2faf373cd420e2167ace32a088_traceguids;
    
    // [WPP_8b971333af2a37d16277ebdb8087bec2_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16900, 0x5f10 bytes
    //
    _m30(sdk::unknown_ptr) wpp_8b971333af2a37d16277ebdb8087bec2_traceguids;
    
    // [WPP_a9abcd937f223c5891ddb2ad1c4c4359_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16840, 0x5f10 bytes
    //
    _m31(sdk::unknown_ptr) wpp_a9abcd937f223c5891ddb2ad1c4c4359_traceguids;
    
    // [WPP_aec57d8b7da03c0302a25af1d765c98d_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16830, 0x5f10 bytes
    //
    _m32(sdk::unknown_ptr) wpp_aec57d8b7da03c0302a25af1d765c98d_traceguids;
    
    // [WPP_b10e3a21625e317f37a8ff47cc099023_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16880, 0x5f10 bytes
    //
    _m33(sdk::unknown_ptr) wpp_b10e3a21625e317f37a8ff47cc099023_traceguids;
    
    // [WPP_b98d94b53d093b2edbbb59cfbacecca0_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16850, 0x5f10 bytes
    //
    _m34(sdk::unknown_ptr) wpp_b98d94b53d093b2edbbb59cfbacecca0_traceguids;
    
    // [WPP_d58b213c9527375794fea38f7ceedf57_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16540, 0x5f10 bytes
    //
    _m35(sdk::unknown_ptr) wpp_d58b213c9527375794fea38f7ceedf57_traceguids;
    
    // [WPP_d79ff390001f32364871857b7018153d_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16530, 0x5f10 bytes
    //
    _m36(sdk::unknown_ptr) wpp_d79ff390001f32364871857b7018153d_traceguids;
    
    // [WPP_e12db5fd5fbc30f4d935b04137bcd721_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16500, 0x5f10 bytes
    //
    _m37(sdk::unknown_ptr) wpp_e12db5fd5fbc30f4d935b04137bcd721_traceguids;
    
    // [WPP_f80feb124cb439d99005f27e9a5f59da_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x168b0, 0x5f10 bytes
    //
    _m38(sdk::unknown_ptr) wpp_f80feb124cb439d99005f27e9a5f59da_traceguids;
    
    // [WPP_ffdf77117f0a3e2fd7ac3157bb1ae77c_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .rdata:0x16550, 0x5f10 bytes
    //
    _m39(sdk::unknown_ptr) wpp_ffdf77117f0a3e2fd7ac3157bb1ae77c_traceguids;
    
    // [WPP_SF_DDDDDqDDDDxDdd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0xc290, 0x5f10 bytes
    //
    _m40(sdk::unknown_ptr) wpp_sf_dddd_dq_ddd_dx_ddd;
    
    // [WPP_SF_DDDDDDDDDDDDDDDDDDDDDXDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607
    // ataport.sys .text:0x3eb8, 0x5f10 bytes
    //
    _m41(sdk::unknown_ptr) wpp_sf_dddddddddddddddddddddxdd;
    
    // [AdjustUsagePathCount]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xdee4, 0x5f38 bytes
    // ataport.sys .text:0xd738, 0x5f38 bytes
    //
    _m42(sdk::unknown_ptr) adjust_usage_path_count;
    
    // [AtaMediumRemovalCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x103b8, 0x5f38 bytes
    // ataport.sys .text:0xfc08, 0x5f38 bytes
    //
    _m43(sdk::unknown_ptr) ata_medium_removal_crb;
    
    // [AtaSetReadCommand]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10b3c, 0x5f38 bytes
    // ataport.sys .text:0x1037c, 0x5f38 bytes
    //
    _m44(sdk::unknown_ptr) ata_set_read_command;
    
    // [CallAllocateDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xeab0, 0x5f38 bytes
    // ataport.sys .text:0xe310, 0x5f38 bytes
    //
    _m45(sdk::unknown_ptr) call_allocate_device;
    
    // [CallFreeDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xeae4, 0x5f38 bytes
    // ataport.sys .text:0xe344, 0x5f38 bytes
    //
    _m46(sdk::unknown_ptr) call_free_device;
    
    // [CallRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xeb24, 0x5f38 bytes
    // ataport.sys .text:0xe384, 0x5f38 bytes
    //
    _m47(sdk::unknown_ptr) call_remove_device;
    
    // [CallStartDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xeb70, 0x5f38 bytes
    // ataport.sys .text:0xe3d0, 0x5f38 bytes
    //
    _m48(sdk::unknown_ptr) call_start_device;
    
    // [CallStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xebac, 0x5f38 bytes
    // ataport.sys .text:0xe40c, 0x5f38 bytes
    //
    _m49(sdk::unknown_ptr) call_stop_device;
    
    // [ChannelDeleteSymblicLinks]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26310, 0x5f38 bytes
    // ataport.sys PAGE:0x26314, 0x5f38 bytes
    //
    _m50(sdk::unknown_ptr) channel_delete_symblic_links;
    
    // [ChannelEnableDeviceInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c31c, 0x5f38 bytes
    // ataport.sys PAGE:0x2c34c, 0x5f38 bytes
    //
    _m51(sdk::unknown_ptr) channel_enable_device_interface;
    
    // [ChannelFreeInterfaces]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28c98, 0x5f38 bytes
    // ataport.sys PAGE:0x28ca8, 0x5f38 bytes
    //
    _m52(sdk::unknown_ptr) channel_free_interfaces;
    
    // [ChannelIsTransferTooBig]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x115bc, 0x5f38 bytes
    // ataport.sys .text:0x10e2c, 0x5f38 bytes
    //
    _m53(sdk::unknown_ptr) channel_is_transfer_too_big;
    
    // [ChannelPreAllocMemory]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26660, 0x5f38 bytes
    // ataport.sys PAGE:0x26664, 0x5f38 bytes
    //
    _m54(sdk::unknown_ptr) channel_pre_alloc_memory;
    
    // [ChannelQueryBusMasterInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28d38, 0x5f38 bytes
    // ataport.sys PAGE:0x28d48, 0x5f38 bytes
    //
    _m55(sdk::unknown_ptr) channel_query_bus_master_interface;
    
    // [ChannelQueryDefaultControllerInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28ddc, 0x5f38 bytes
    // ataport.sys PAGE:0x28dec, 0x5f38 bytes
    //
    _m56(sdk::unknown_ptr) channel_query_default_controller_interface;
    
    // [ChannelQueryInterruptInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28ec4, 0x5f38 bytes
    // ataport.sys PAGE:0x28ed4, 0x5f38 bytes
    //
    _m57(sdk::unknown_ptr) channel_query_interrupt_interface;
    
    // [ChannelQueryObsoleteMiniportInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28f60, 0x5f38 bytes
    // ataport.sys PAGE:0x28f70, 0x5f38 bytes
    //
    _m58(sdk::unknown_ptr) channel_query_obsolete_miniport_interface;
    
    // [ChannelQueryPciideInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x29008, 0x5f38 bytes
    // ataport.sys PAGE:0x29018, 0x5f38 bytes
    //
    _m59(sdk::unknown_ptr) channel_query_pciide_interface;
    
    // [ChannelQuerySyncAccessInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x290ac, 0x5f38 bytes
    // ataport.sys PAGE:0x290bc, 0x5f38 bytes
    //
    _m60(sdk::unknown_ptr) channel_query_sync_access_interface;
    
    // [ChannelRefPassThroughPdo]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2923c, 0x5f38 bytes
    // ataport.sys PAGE:0x2924c, 0x5f38 bytes
    //
    _m61(sdk::unknown_ptr) channel_ref_pass_through_pdo;
    
    // [ChannelRegisterDeviceInterface]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c3e4, 0x5f38 bytes
    // ataport.sys PAGE:0x2c414, 0x5f38 bytes
    //
    _m62(sdk::unknown_ptr) channel_register_device_interface;
    
    // [ChannelSetCurrentTransferMode]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x18158, 0x5f38 bytes
    // ataport.sys .text:0x17aac, 0x5f38 bytes
    //
    _m63(sdk::unknown_ptr) channel_set_current_transfer_mode;
    
    // [ChannelSetDefaultChannelProperties]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x29150, 0x5f38 bytes
    // ataport.sys PAGE:0x29160, 0x5f38 bytes
    //
    _m64(sdk::unknown_ptr) channel_set_default_channel_properties;
    
    // [ChannelSetStartIoCallBack]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x269e4, 0x5f38 bytes
    // ataport.sys PAGE:0x269e4, 0x5f38 bytes
    //
    _m65(sdk::unknown_ptr) channel_set_start_io_call_back;
    
    // [ConvertDataRangeToAtaLbaRange]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x293c8, 0x5f38 bytes
    // ataport.sys PAGE:0x293d8, 0x5f38 bytes
    //
    _m66(sdk::unknown_ptr) convert_data_range_to_ata_lba_range;
    
    // [DeviceAllocatePowerCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2abfc, 0x5f38 bytes
    // ataport.sys PAGE:0x2ac24, 0x5f38 bytes
    //
    _m67(sdk::unknown_ptr) device_allocate_power_crb;
    
    // [DeviceFreeDumpDriverList]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa664, 0x5f38 bytes
    // ataport.sys .text:0x9ec4, 0x5f38 bytes
    //
    _m68(sdk::unknown_ptr) device_free_dump_driver_list;
    
    // [DeviceFreeDumpPointersEx]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa698, 0x5f38 bytes
    // ataport.sys .text:0x9ef8, 0x5f38 bytes
    //
    _m69(sdk::unknown_ptr) device_free_dump_pointers_ex;
    
    // [DeviceFreePowerCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2ac2c, 0x5f38 bytes
    // ataport.sys PAGE:0x2ac54, 0x5f38 bytes
    //
    _m70(sdk::unknown_ptr) device_free_power_crb;
    
    // [DeviceGetDSMMaxTransferByteSize]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13664, 0x5f38 bytes
    // ataport.sys .text:0x13004, 0x5f38 bytes
    //
    _m71(sdk::unknown_ptr) device_get_dsm_max_transfer_byte_size;
    
    // [DeviceGetDumpMiniportName]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa728, 0x5f38 bytes
    // ataport.sys .text:0x9f88, 0x5f38 bytes
    //
    _m72(sdk::unknown_ptr) device_get_dump_miniport_name;
    
    // [DeviceInitAtaIds]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28494, 0x5f38 bytes
    // ataport.sys PAGE:0x284a0, 0x5f38 bytes
    //
    _m73(sdk::unknown_ptr) device_init_ata_ids;
    
    // [DeviceInitAtapiIds]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xfcb4, 0x5f38 bytes
    // ataport.sys .text:0xf510, 0x5f38 bytes
    //
    _m74(sdk::unknown_ptr) device_init_atapi_ids;
    
    // [DeviceNeedsPowerUp]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1190c, 0x5f38 bytes
    // ataport.sys .text:0x1117c, 0x5f38 bytes
    //
    _m75(sdk::unknown_ptr) device_needs_power_up;
    
    // [DevicePowerToIdePowerState]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15bcc, 0x5f38 bytes
    // ataport.sys .text:0x154fc, 0x5f38 bytes
    //
    _m76(sdk::unknown_ptr) device_power_to_ide_power_state;
    
    // [DevicePowerUpDevice]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11948, 0x5f38 bytes
    // ataport.sys .text:0x111b8, 0x5f38 bytes
    //
    _m77(sdk::unknown_ptr) device_power_up_device;
    
    // [DeviceQueryGtfData]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2ac5c, 0x5f38 bytes
    // ataport.sys PAGE:0x2ac84, 0x5f38 bytes
    //
    _m78(sdk::unknown_ptr) device_query_gtf_data;
    
    // [DeviceResetRequestTimeoutCounter]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x152cc, 0x5f38 bytes
    // ataport.sys .text:0x14c70, 0x5f38 bytes
    //
    _m79(sdk::unknown_ptr) device_reset_request_timeout_counter;
    
    // [DeviceScsiMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4f90, 0x5f38 bytes
    // ataport.sys .text:0x34c4, 0x5f38 bytes
    //
    _m80(sdk::unknown_ptr) device_scsi_miniport_ioctl;
    
    // [FdoChildRequestPowerUp]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xebe8, 0x5f38 bytes
    // ataport.sys .text:0xe448, 0x5f38 bytes
    //
    _m81(sdk::unknown_ptr) fdo_child_request_power_up;
    
    // [FdoDevicePowerCompletionCallBack]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xed18, 0x5f38 bytes
    // ataport.sys .text:0xe578, 0x5f38 bytes
    //
    _m82(sdk::unknown_ptr) fdo_device_power_completion_call_back;
    
    // [GenAppendMiniportResources]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26a30, 0x5f38 bytes
    // ataport.sys PAGE:0x26a30, 0x5f38 bytes
    //
    _m83(sdk::unknown_ptr) gen_append_miniport_resources;
    
    // [GenPnpFindPagingDeviceInGlobalList]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf2c8, 0x5f38 bytes
    // ataport.sys .text:0xeb28, 0x5f38 bytes
    //
    _m84(sdk::unknown_ptr) gen_pnp_find_paging_device_in_global_list;
    
    // [GenPopulateAccessRange]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27920, 0x5f38 bytes
    // ataport.sys PAGE:0x27920, 0x5f38 bytes
    //
    _m85(sdk::unknown_ptr) gen_populate_access_range;
    
    // [GenPopulateInterruptParameters]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27a44, 0x5f38 bytes
    // ataport.sys PAGE:0x27a44, 0x5f38 bytes
    //
    _m86(sdk::unknown_ptr) gen_populate_interrupt_parameters;
    
    // [GetQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15504, 0x5f38 bytes
    // ataport.sys .text:0x14eb4, 0x5f38 bytes
    //
    _m87(sdk::unknown_ptr) get_queue_tag;
    
    // [GetSectorCountFromCdb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x115f4, 0x5f38 bytes
    // ataport.sys .text:0x10e64, 0x5f38 bytes
    //
    _m88(sdk::unknown_ptr) get_sector_count_from_cdb;
    
    // [IdeAllocateCrbLog]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24f64, 0x5f38 bytes
    // ataport.sys PAGE:0x24f54, 0x5f38 bytes
    //
    _m89(sdk::unknown_ptr) ide_allocate_crb_log;
    
    // [IdeAllocateQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf5f4, 0x5f38 bytes
    // ataport.sys .text:0xee54, 0x5f38 bytes
    //
    _m90(sdk::unknown_ptr) ide_allocate_queue_tag;
    
    // [IdeAtaPassThroughMarshalResults]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2a6e4, 0x5f38 bytes
    // ataport.sys PAGE:0x2a70c, 0x5f38 bytes
    //
    _m91(sdk::unknown_ptr) ide_ata_pass_through_marshal_results;
    
    // [IdeAvioGetPriorityFromCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11990, 0x5f38 bytes
    // ataport.sys .text:0x11200, 0x5f38 bytes
    //
    _m92(sdk::unknown_ptr) ide_avio_get_priority_from_crb;
    
    // [IdeAvioGetSubQueueFromCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x119cc, 0x5f38 bytes
    // ataport.sys .text:0x1123c, 0x5f38 bytes
    //
    _m93(sdk::unknown_ptr) ide_avio_get_sub_queue_from_crb;
    
    // [IdeAvioSetCrbTenacity]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11a2c, 0x5f38 bytes
    // ataport.sys .text:0x1129c, 0x5f38 bytes
    //
    _m94(sdk::unknown_ptr) ide_avio_set_crb_tenacity;
    
    // [IdeBuildDeviceResetCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x16d08, 0x5f38 bytes
    // ataport.sys .text:0x1664c, 0x5f38 bytes
    //
    _m95(sdk::unknown_ptr) ide_build_device_reset_crb;
    
    // [IdeChannelQueueClearFrozen]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9dd8, 0x5f38 bytes
    // ataport.sys .text:0x9638, 0x5f38 bytes
    //
    _m96(sdk::unknown_ptr) ide_channel_queue_clear_frozen;
    
    // [IdeChannelQueueResume]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9fa8, 0x5f38 bytes
    // ataport.sys .text:0x9808, 0x5f38 bytes
    //
    _m97(sdk::unknown_ptr) ide_channel_queue_resume;
    
    // [IdeChannelQueueSetFrozen]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa050, 0x5f38 bytes
    // ataport.sys .text:0x98b0, 0x5f38 bytes
    //
    _m98(sdk::unknown_ptr) ide_channel_queue_set_frozen;
    
    // [IdeClearCancelRoutine]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9d18, 0x5f38 bytes
    // ataport.sys .text:0x9578, 0x5f38 bytes
    //
    _m99(sdk::unknown_ptr) ide_clear_cancel_routine;
    
    // [IdeFixEsdiGeometry]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xfbe8, 0x5f38 bytes
    // ataport.sys .text:0xf448, 0x5f38 bytes
    //
    _n00(sdk::unknown_ptr) ide_fix_esdi_geometry;
    
    // [IdeFreeCommonBuffer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x156b8, 0x5f38 bytes
    // ataport.sys .text:0x15068, 0x5f38 bytes
    //
    _n01(sdk::unknown_ptr) ide_free_common_buffer;
    
    // [IdeFreeCrbLog]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24fb4, 0x5f38 bytes
    // ataport.sys PAGE:0x24fa4, 0x5f38 bytes
    //
    _n02(sdk::unknown_ptr) ide_free_crb_log;
    
    // [IdeFreeEnumInfo]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25960, 0x5f38 bytes
    // ataport.sys PAGE:0x25970, 0x5f38 bytes
    //
    _n03(sdk::unknown_ptr) ide_free_enum_info;
    
    // [IdeGet1667DeviceRegistryValue]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c490, 0x5f38 bytes
    // ataport.sys PAGE:0x2c4c0, 0x5f38 bytes
    //
    _n04(sdk::unknown_ptr) ide_get1667_device_registry_value;
    
    // [IdeGetAvioRoundSize]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28b44, 0x5f38 bytes
    // ataport.sys PAGE:0x28b54, 0x5f38 bytes
    //
    _n05(sdk::unknown_ptr) ide_get_avio_round_size;
    
    // [IdeGetDSMDataSizeCap]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c538, 0x5f38 bytes
    // ataport.sys PAGE:0x2c568, 0x5f38 bytes
    //
    _n06(sdk::unknown_ptr) ide_get_dsm_data_size_cap;
    
    // [IdeInitializeQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27ad4, 0x5f38 bytes
    // ataport.sys PAGE:0x27ad4, 0x5f38 bytes
    //
    _n07(sdk::unknown_ptr) ide_initialize_queue_tag;
    
    // [IdeInsertPendingIrpQueue]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13ad8, 0x5f38 bytes
    // ataport.sys .text:0x13478, 0x5f38 bytes
    //
    _n08(sdk::unknown_ptr) ide_insert_pending_irp_queue;
    
    // [IdeIsAvioEnabled]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28be8, 0x5f38 bytes
    // ataport.sys PAGE:0x28bf8, 0x5f38 bytes
    //
    _n09(sdk::unknown_ptr) ide_is_avio_enabled;
    
    // [IdeLunQueueRemoveRequest]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x14024, 0x5f38 bytes
    // ataport.sys .text:0x139c4, 0x5f38 bytes
    //
    _n10(sdk::unknown_ptr) ide_lun_queue_remove_request;
    
    // [IdeLunQueueResume]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x14134, 0x5f38 bytes
    // ataport.sys .text:0x13ad4, 0x5f38 bytes
    //
    _n11(sdk::unknown_ptr) ide_lun_queue_resume;
    
    // [IdeLunQueueSetFrozen]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x14244, 0x5f38 bytes
    // ataport.sys .text:0x13be4, 0x5f38 bytes
    //
    _n12(sdk::unknown_ptr) ide_lun_queue_set_frozen;
    
    // [IdeLunQueueSeverPendingList]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x142a4, 0x5f38 bytes
    // ataport.sys .text:0x13c44, 0x5f38 bytes
    //
    _n13(sdk::unknown_ptr) ide_lun_queue_sever_pending_list;
    
    // [IdeMapLockedPagesWithReservedMapping]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13b78, 0x5f38 bytes
    // ataport.sys .text:0x13518, 0x5f38 bytes
    //
    _n14(sdk::unknown_ptr) ide_map_locked_pages_with_reserved_mapping;
    
    // [IdeNvcMarshalResults]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2a334, 0x5f38 bytes
    // ataport.sys PAGE:0x2a35c, 0x5f38 bytes
    //
    _n15(sdk::unknown_ptr) ide_nvc_marshal_results;
    
    // [IdePortGetATATelemetryParameters]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x172cc, 0x5f38 bytes
    // ataport.sys .text:0x16c1c, 0x5f38 bytes
    //
    _n16(sdk::unknown_ptr) ide_port_get_ata_telemetry_parameters;
    
    // [IdePortSetupScatterGatherList]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12ec8, 0x5f38 bytes
    // ataport.sys .text:0x12870, 0x5f38 bytes
    //
    _n17(sdk::unknown_ptr) ide_port_setup_scatter_gather_list;
    
    // [IdeProcessChannelStateChange]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12f5c, 0x5f38 bytes
    // ataport.sys .text:0x12904, 0x5f38 bytes
    //
    _n18(sdk::unknown_ptr) ide_process_channel_state_change;
    
    // [IdeProcessDeviceStateChange]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15334, 0x5f38 bytes
    // ataport.sys .text:0x14cd8, 0x5f38 bytes
    //
    _n19(sdk::unknown_ptr) ide_process_device_state_change;
    
    // [IdeQuiesceDeviceSrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1172c, 0x5f38 bytes
    // ataport.sys .text:0x10f9c, 0x5f38 bytes
    //
    _n20(sdk::unknown_ptr) ide_quiesce_device_srb;
    
    // [IdeRefPdoExtension]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4ca8, 0x5f38 bytes
    // ataport.sys .text:0x31f0, 0x5f38 bytes
    //
    _n21(sdk::unknown_ptr) ide_ref_pdo_extension;
    
    // [IdeRegBuildServiceSubKeyName]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c6b0, 0x5f38 bytes
    // ataport.sys PAGE:0x2c6e0, 0x5f38 bytes
    //
    _n22(sdk::unknown_ptr) ide_reg_build_service_sub_key_name;
    
    // [IdeRegGetDeviceDumpMaxSize]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xaa54, 0x5f38 bytes
    // ataport.sys .text:0xa2b8, 0x5f38 bytes
    //
    _n23(sdk::unknown_ptr) ide_reg_get_device_dump_max_size;
    
    // [IdeRegGetDeviceDumpSupportLevel]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xaae4, 0x5f38 bytes
    // ataport.sys .text:0xa348, 0x5f38 bytes
    //
    _n24(sdk::unknown_ptr) ide_reg_get_device_dump_support_level;
    
    // [IdeRegGetEnumDevice1]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xdc3c, 0x5f38 bytes
    // ataport.sys .text:0xd490, 0x5f38 bytes
    //
    _n25(sdk::unknown_ptr) ide_reg_get_enum_device1;
    
    // [IdeRegMiniportBufferValid]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2c810, 0x5f38 bytes
    // ataport.sys PAGE:0x2c840, 0x5f38 bytes
    //
    _n26(sdk::unknown_ptr) ide_reg_miniport_buffer_valid;
    
    // [IdeRegWriteEnumDevice1]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb9a8, 0x5f38 bytes
    // ataport.sys .text:0xb23c, 0x5f38 bytes
    //
    _n27(sdk::unknown_ptr) ide_reg_write_enum_device1;
    
    // [IdeRestartChannel]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11f04, 0x5f38 bytes
    // ataport.sys .text:0x11774, 0x5f38 bytes
    //
    _n28(sdk::unknown_ptr) ide_restart_channel;
    
    // [IdeSetMiniportTimer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x131ec, 0x5f38 bytes
    // ataport.sys .text:0x12b8c, 0x5f38 bytes
    //
    _n29(sdk::unknown_ptr) ide_set_miniport_timer;
    
    // [IdeSfioInitialize]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2a478, 0x5f38 bytes
    // ataport.sys PAGE:0x2a4a0, 0x5f38 bytes
    //
    _n30(sdk::unknown_ptr) ide_sfio_initialize;
    
    // [IdeShutdownCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11810, 0x5f38 bytes
    // ataport.sys .text:0x11080, 0x5f38 bytes
    //
    _n31(sdk::unknown_ptr) ide_shutdown_crb;
    
    // [IdeSrbToNtStatus]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2eb8, 0x5f38 bytes
    // ataport.sys .text:0x3620, 0x5f38 bytes
    //
    _n32(sdk::unknown_ptr) ide_srb_to_nt_status;
    
    // [IdeStartPendingIrp]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13d88, 0x5f38 bytes
    // ataport.sys .text:0x13728, 0x5f38 bytes
    //
    _n33(sdk::unknown_ptr) ide_start_pending_irp;
    
    // [IdeSynchronizeExecution]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13254, 0x5f38 bytes
    // ataport.sys .text:0x12bf4, 0x5f38 bytes
    //
    _n34(sdk::unknown_ptr) ide_synchronize_execution;
    
    // [IdeTraceStart]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x17a4c, 0x5f38 bytes
    // ataport.sys .text:0x173ac, 0x5f38 bytes
    //
    _n35(sdk::unknown_ptr) ide_trace_start;
    
    // [IdepAllocateSenseBuffer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa214, 0x5f38 bytes
    // ataport.sys .text:0x9a74, 0x5f38 bytes
    //
    _n36(sdk::unknown_ptr) idep_allocate_sense_buffer;
    
    // [IncrementPathId]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x16a18, 0x5f38 bytes
    // ataport.sys .text:0x16354, 0x5f38 bytes
    //
    _n37(sdk::unknown_ptr) increment_path_id;
    
    // [IncursSeekPenalty]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4cd8, 0x5f38 bytes
    // ataport.sys .text:0x3220, 0x5f38 bytes
    //
    _n38(sdk::unknown_ptr) incurs_seek_penalty;
    
    // [IsEmergencyCrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x30cc, 0x5f38 bytes
    // ataport.sys .text:0x3830, 0x5f38 bytes
    //
    _n39(sdk::unknown_ptr) is_emergency_crb;
    
    // [IsReadWriteRequest]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x118a8, 0x5f38 bytes
    // ataport.sys .text:0x11118, 0x5f38 bytes
    //
    _n40(sdk::function<uint32_t(uint32_t, uint8_t)>*) is_read_write_request;
    
    // [McTemplateK0puxip_EtwWriteTransfer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x17dfc, 0x5f38 bytes
    // ataport.sys .text:0x1775c, 0x5f38 bytes
    //
    _n41(sdk::unknown_ptr) mc_template_k0puxip_etw_write_transfer;
    
    // [McTemplateK0uuuuq_EtwWriteTransfer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbe6c, 0x5f38 bytes
    // ataport.sys .text:0xb6c0, 0x5f38 bytes
    //
    _n42(sdk::unknown_ptr) mc_template_k0uuuuq_etw_write_transfer;
    
    // [McTemplateK0xpuup_EtwWriteTransfer]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13290, 0x5f38 bytes
    // ataport.sys .text:0x12c30, 0x5f38 bytes
    //
    _n43(sdk::unknown_ptr) mc_template_k0xpuup_etw_write_transfer;
    
    // [PdoCompletePowerIrp]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf82c, 0x5f38 bytes
    // ataport.sys .text:0xf08c, 0x5f38 bytes
    //
    _n44(sdk::unknown_ptr) pdo_complete_power_irp;
    
    // [PdoCompleteSystemPowerIrp]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf88c, 0x5f38 bytes
    // ataport.sys .text:0xf0ec, 0x5f38 bytes
    //
    _n45(sdk::unknown_ptr) pdo_complete_system_power_irp;
    
    // [PdoSetSystemPowerState]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xfa2c, 0x5f38 bytes
    // ataport.sys .text:0xf28c, 0x5f38 bytes
    //
    _n46(sdk::unknown_ptr) pdo_set_system_power_state;
    
    // [PioOnly]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x118e4, 0x5f38 bytes
    // ataport.sys .text:0x11154, 0x5f38 bytes
    //
    _n47(sdk::unknown_ptr) pio_only;
    
    // [PortAvioAdmitStream]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x18e1c, 0x5f38 bytes
    // ataport.sys .text:0x1878c, 0x5f38 bytes
    //
    _n48(sdk::unknown_ptr) port_avio_admit_stream;
    
    // [PortAvioGetAvioPriorityFromSrb]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x18ce4, 0x5f38 bytes
    // ataport.sys .text:0x18654, 0x5f38 bytes
    //
    _n49(sdk::unknown_ptr) port_avio_get_avio_priority_from_srb;
    
    // [PortAvioSchedulerRemoveStream]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13858, 0x5f38 bytes
    // ataport.sys .text:0x131f8, 0x5f38 bytes
    //
    _n50(sdk::unknown_ptr) port_avio_scheduler_remove_stream;
    
    // [PortListRemoveNextRequest]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x43d8, 0x5f38 bytes
    // ataport.sys .text:0x4b34, 0x5f38 bytes
    //
    _n51(sdk::unknown_ptr) port_list_remove_next_request;
    
    // [PortListSearchAndRemoveRequest]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x186c8, 0x5f38 bytes
    // ataport.sys .text:0x18024, 0x5f38 bytes
    //
    _n52(sdk::unknown_ptr) port_list_search_and_remove_request;
    
    // [PortRegistryDeleteDeviceSubKey]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2e788, 0x5f38 bytes
    // ataport.sys PAGE:0x2e7a4, 0x5f38 bytes
    //
    _n53(sdk::unknown_ptr) port_registry_delete_device_sub_key;
    
    // [PortSliceBufferToSlist]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa28c, 0x5f38 bytes
    // ataport.sys .text:0x9aec, 0x5f38 bytes
    //
    _n54(sdk::unknown_ptr) port_slice_buffer_to_slist;
    
    // [PortUtilByteSwap]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1002c, 0x5f38 bytes
    // ataport.sys .text:0xf888, 0x5f38 bytes
    //
    _n55(sdk::unknown_ptr) port_util_byte_swap;
    
    // [PortUtilCharStringToUnicodeString]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10068, 0x5f38 bytes
    // ataport.sys .text:0xf8c4, 0x5f38 bytes
    //
    _n56(sdk::function<int32_t(nt::unicode_view*, char*, uint8_t)>*) port_util_char_string_to_unicode_string;
    
    // [PortUtilIsNodeInList]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x138a0, 0x5f38 bytes
    // ataport.sys .text:0x13240, 0x5f38 bytes
    //
    _n57(sdk::unknown_ptr) port_util_is_node_in_list;
    
    // [PortUtilRemoveTrailingBlanks]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x100b0, 0x5f38 bytes
    // ataport.sys .text:0xf90c, 0x5f38 bytes
    //
    _n58(sdk::unknown_ptr) port_util_remove_trailing_blanks;
    
    // [PortWdmCreateDirectory]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2ee90, 0x5f38 bytes
    // ataport.sys PAGE:0x2eeac, 0x5f38 bytes
    //
    _n59(sdk::unknown_ptr) port_wdm_create_directory;
    
    // [PrepareCrbForRetry]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc7c0, 0x5f38 bytes
    // ataport.sys .text:0xc014, 0x5f38 bytes
    //
    _n60(sdk::unknown_ptr) prepare_crb_for_retry;
    
    // [ProcessNoMemoryError]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xca10, 0x5f38 bytes
    // ataport.sys .text:0xc264, 0x5f38 bytes
    //
    _n61(sdk::unknown_ptr) process_no_memory_error;
    
    // [ProxyPowerStateChange]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15938, 0x5f38 bytes
    // ataport.sys .text:0x152e8, 0x5f38 bytes
    //
    _n62(sdk::unknown_ptr) proxy_power_state_change;
    
    // [ProxyQueueTagInitialize]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x159ac, 0x5f38 bytes
    // ataport.sys .text:0x1535c, 0x5f38 bytes
    //
    _n63(sdk::unknown_ptr) proxy_queue_tag_initialize;
    
    // [ProxyRegistryRead]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15aec, 0x5f38 bytes
    // ataport.sys .text:0x1544c, 0x5f38 bytes
    //
    _n64(sdk::unknown_ptr) proxy_registry_read;
    
    // [ProxyRegistryWrite]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x15b5c, 0x5f38 bytes
    // ataport.sys .text:0x154a4, 0x5f38 bytes
    //
    _n65(sdk::unknown_ptr) proxy_registry_write;
    
    // [ProxyReleaseRequestSense]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5160, 0x5f38 bytes
    // ataport.sys .text:0x50a0, 0x5f38 bytes
    //
    _n66(sdk::unknown_ptr) proxy_release_request_sense;
    
    // [TransferStarvedRequests]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4288, 0x5f38 bytes
    // ataport.sys .text:0x49e4, 0x5f38 bytes
    //
    _n67(sdk::unknown_ptr) transfer_starved_requests;
    
    // [WPP_256a4584ee4438b757ec1546b7dd7507_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a4c0, 0x5f38 bytes
    // ataport.sys .rdata:0x1a490, 0x5f38 bytes
    //
    _n68(sdk::unknown_ptr) wpp_256a4584ee4438b757ec1546b7dd7507_traceguids;
    
    // [WPP_35cbd9529bc73615627b07ae059d13db_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a3c8, 0x5f38 bytes
    // ataport.sys .rdata:0x1a398, 0x5f38 bytes
    //
    _n69(sdk::unknown_ptr) wpp_35cbd9529bc73615627b07ae059d13db_traceguids;
    
    // [WPP_42ca263b84b93a50b0f5418a47847e25_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a420, 0x5f38 bytes
    // ataport.sys .rdata:0x1a3f0, 0x5f38 bytes
    //
    _n70(sdk::unknown_ptr) wpp_42ca263b84b93a50b0f5418a47847e25_traceguids;
    
    // [WPP_43ebc72a98023b1b5ba0ce12652c7ce7_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a3f0, 0x5f38 bytes
    // ataport.sys .rdata:0x1a3c0, 0x5f38 bytes
    //
    _n71(sdk::unknown_ptr) wpp_43ebc72a98023b1b5ba0ce12652c7ce7_traceguids;
    
    // [WPP_55f6d14c88313b196a1d6de8819a01fe_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b4d8, 0x5f38 bytes
    // ataport.sys .rdata:0x1b498, 0x5f38 bytes
    //
    _n72(sdk::unknown_ptr) wpp_55f6d14c88313b196a1d6de8819a01fe_traceguids;
    
    // [WPP_624b4cbc0aeb3d78d80b4c326da9701f_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b788, 0x5f38 bytes
    // ataport.sys .rdata:0x1b748, 0x5f38 bytes
    //
    _n73(sdk::unknown_ptr) wpp_624b4cbc0aeb3d78d80b4c326da9701f_traceguids;
    
    // [WPP_6cede04a88e3309adea69a82c672a1f1_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b590, 0x5f38 bytes
    // ataport.sys .rdata:0x1b550, 0x5f38 bytes
    //
    _n74(sdk::unknown_ptr) wpp_6cede04a88e3309adea69a82c672a1f1_traceguids;
    
    // [WPP_706f106f73ff3ca7952fb79a2fc7d526_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a410, 0x5f38 bytes
    // ataport.sys .rdata:0x1a3e0, 0x5f38 bytes
    //
    _n75(sdk::unknown_ptr) wpp_706f106f73ff3ca7952fb79a2fc7d526_traceguids;
    
    // [WPP_78983c94931d35703ea98f5f86877065_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b998, 0x5f38 bytes
    // ataport.sys .rdata:0x1b958, 0x5f38 bytes
    //
    _n76(sdk::unknown_ptr) wpp_78983c94931d35703ea98f5f86877065_traceguids;
    
    // [WPP_8d2be71d4a7e3b4d1b1c0d2f07edd568_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b8b8, 0x5f38 bytes
    // ataport.sys .rdata:0x1b878, 0x5f38 bytes
    //
    _n77(sdk::unknown_ptr) wpp_8d2be71d4a7e3b4d1b1c0d2f07edd568_traceguids;
    
    // [WPP_8f9b71b36ad03aee6398cda30f93960b_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b580, 0x5f38 bytes
    // ataport.sys .rdata:0x1b540, 0x5f38 bytes
    //
    _n78(sdk::unknown_ptr) wpp_8f9b71b36ad03aee6398cda30f93960b_traceguids;
    
    // [WPP_bd161d43c39a3ee8f597a4eee2674f50_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b328, 0x5f38 bytes
    // ataport.sys .rdata:0x1b2e8, 0x5f38 bytes
    //
    _n79(sdk::unknown_ptr) wpp_bd161d43c39a3ee8f597a4eee2674f50_traceguids;
    
    // [WPP_c00031442d893717ff985c5ac870e8f4_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1af30, 0x5f38 bytes
    // ataport.sys .rdata:0x1aef0, 0x5f38 bytes
    //
    _n80(sdk::unknown_ptr) wpp_c00031442d893717ff985c5ac870e8f4_traceguids;
    
    // [WPP_cea14c48e634393b8df15406ad190a19_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b508, 0x5f38 bytes
    // ataport.sys .rdata:0x1b4c8, 0x5f38 bytes
    //
    _n81(sdk::unknown_ptr) wpp_cea14c48e634393b8df15406ad190a19_traceguids;
    
    // [WPP_d8772916b67738668d2bca963a77238c_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1b4c8, 0x5f38 bytes
    // ataport.sys .rdata:0x1b488, 0x5f38 bytes
    //
    _n82(sdk::unknown_ptr) wpp_d8772916b67738668d2bca963a77238c_traceguids;
    
    // [WPP_ea3d9ddcce833571753467e7bf572b65_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1af20, 0x5f38 bytes
    // ataport.sys .rdata:0x1aee0, 0x5f38 bytes
    //
    _n83(sdk::unknown_ptr) wpp_ea3d9ddcce833571753467e7bf572b65_traceguids;
    
    // [WPP_eb6a61ab1c2f3f7ab37b61d2fb3deb97_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a288, 0x5f38 bytes
    // ataport.sys .rdata:0x1a258, 0x5f38 bytes
    //
    _n84(sdk::unknown_ptr) wpp_eb6a61ab1c2f3f7ab37b61d2fb3deb97_traceguids;
    
    // [WPP_fa24d6f988ad3aaf5f601c761e172689_Traceguids]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x1a400, 0x5f38 bytes
    // ataport.sys .rdata:0x1a3d0, 0x5f38 bytes
    //
    _n85(sdk::unknown_ptr) wpp_fa24d6f988ad3aaf5f601c761e172689_traceguids;
    
    // [WPP_SF_DDDDDqDDDDiDdd]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13330, 0x5f38 bytes
    // ataport.sys .text:0x12cd0, 0x5f38 bytes
    //
    _n86(sdk::unknown_ptr) wpp_sf_dddd_dq_ddd_di_ddd;
    
    // [WPP_SF_DDDDDDDDDDDDDDDDDDDDDiDD]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd228, 0x5f38 bytes
    // ataport.sys .text:0xca7c, 0x5f38 bytes
    //
    _n87(sdk::unknown_ptr) wpp_sf_dddddddddddddddddddd_di_dd;
    
    // [ASyncScsiPassThroughCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe1a0, 0x5f10 bytes
    // ataport.sys .text:0x13440, 0x5f38 bytes
    // ataport.sys .text:0x12de0, 0x5f38 bytes
    //
    _n88(sdk::unknown_ptr) a_sync_scsi_pass_through_completion;
    
    // [AllocateTokenCallBack]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf280, 0x5f10 bytes
    // ataport.sys .text:0x145d0, 0x5f38 bytes
    // ataport.sys .text:0x13f70, 0x5f38 bytes
    //
    _n89(sdk::unknown_ptr) allocate_token_call_back;
    
    // [AtaConstructReadWriteTaskFile]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa308, 0x5f10 bytes
    // ataport.sys .text:0x1025c, 0x5f38 bytes
    // ataport.sys .text:0xfabc, 0x5f38 bytes
    //
    _n90(sdk::unknown_ptr) ata_construct_read_write_task_file;
    
    // [AtaEtwEnabled]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x1909c, 0x5f10 bytes
    // ataport.sys .data:0x1e69c, 0x5f38 bytes
    // ataport.sys .data:0x1e61c, 0x5f38 bytes
    //
    _n91(sdk::unknown_ptr) ata_etw_enabled;
    
    // [AtaEtwHandle]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x190a0, 0x5f10 bytes
    // ataport.sys .data:0x1e6a0, 0x5f38 bytes
    // ataport.sys .data:0x1e620, 0x5f38 bytes
    //
    _n92(sdk::unknown_ptr) ata_etw_handle;
    
    // [AtaFlushCommandCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8764, 0x5f10 bytes
    // ataport.sys .text:0x1840, 0x5f38 bytes
    // ataport.sys .text:0x1a20, 0x5f38 bytes
    //
    _n93(sdk::unknown_ptr) ata_flush_command_crb;
    
    // [AtaInquiryCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8f98, 0x5f10 bytes
    // ataport.sys .text:0x102f0, 0x5f38 bytes
    // ataport.sys .text:0xfb44, 0x5f38 bytes
    //
    _n94(sdk::unknown_ptr) ata_inquiry_crb;
    
    // [AtaMatchAnyKeyword]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x190a8, 0x5f10 bytes
    // ataport.sys .data:0x1e6a8, 0x5f38 bytes
    // ataport.sys .data:0x1e628, 0x5f38 bytes
    //
    _n95(sdk::unknown_ptr) ata_match_any_keyword;
    
    // [AtaModeSelectCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9474, 0x5f10 bytes
    // ataport.sys .text:0x1040c, 0x5f38 bytes
    // ataport.sys .text:0xfc64, 0x5f38 bytes
    //
    _n96(sdk::unknown_ptr) ata_mode_select_crb;
    
    // [AtaModeSelectCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9420, 0x5f10 bytes
    // ataport.sys .text:0x10570, 0x5f38 bytes
    // ataport.sys .text:0xfdd0, 0x5f38 bytes
    //
    _n97(sdk::unknown_ptr) ata_mode_select_crb_completion;
    
    // [AtaModeSenseCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x91e0, 0x5f10 bytes
    // ataport.sys .text:0x11e4, 0x5f38 bytes
    // ataport.sys .text:0x11f4, 0x5f38 bytes
    //
    _n98(sdk::unknown_ptr) ata_mode_sense_crb;
    
    // [AtaModeSenseCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9190, 0x5f10 bytes
    // ataport.sys .text:0x105d0, 0x5f38 bytes
    // ataport.sys .text:0xfe30, 0x5f38 bytes
    //
    _n99(sdk::unknown_ptr) ata_mode_sense_crb_completion;
    
    // [AtaModeSenseCrbCompletionWriteCache]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9060, 0x5f10 bytes
    // ataport.sys .text:0x1360, 0x5f38 bytes
    // ataport.sys .text:0x1380, 0x5f38 bytes
    //
    _o00(sdk::unknown_ptr) ata_mode_sense_crb_completion_write_cache;
    
    // [AtaNoDataCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8844, 0x5f10 bytes
    // ataport.sys .text:0x10628, 0x5f38 bytes
    // ataport.sys .text:0xfe88, 0x5f38 bytes
    //
    _o01(sdk::unknown_ptr) ata_no_data_crb;
    
    // [AtaPortAllocateQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6fd0, 0x5f10 bytes
    // ataport.sys .text:0xdf40, 0x5f38 bytes
    // ataport.sys .text:0xd790, 0x5f38 bytes
    //
    _o02(sdk::unknown_ptr) ata_port_allocate_queue_tag;
    
    // [AtaPortBuildRequestSenseIrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6d00, 0x5f10 bytes
    // ataport.sys .text:0x5750, 0x5f38 bytes
    // ataport.sys .text:0x5690, 0x5f38 bytes
    //
    _o03(sdk::unknown_ptr) ata_port_build_request_sense_irb;
    
    // [AtaPortCompleteAllActiveRequests]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6cc0, 0x5f10 bytes
    // ataport.sys .text:0xdfa0, 0x5f38 bytes
    // ataport.sys .text:0xd7f0, 0x5f38 bytes
    //
    _o04(sdk::unknown_ptr) ata_port_complete_all_active_requests;
    
    // [AtaPortCompleteRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6c20, 0x5f10 bytes
    // ataport.sys .text:0x5430, 0x5f38 bytes
    // ataport.sys .text:0x5350, 0x5f38 bytes
    //
    _o05(sdk::unknown_ptr) ata_port_complete_request;
    
    // [AtaPortConvertPhysicalAddressToUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a60, 0x5f10 bytes
    // ataport.sys .text:0x5520, 0x5f38 bytes
    // ataport.sys .text:0x5460, 0x5f38 bytes
    //
    _o06(sdk::unknown_ptr) ata_port_convert_physical_address_to_ulong;
    
    // [AtaPortConvertUlongToPhysicalAddress]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a50, 0x5f10 bytes
    // ataport.sys .text:0xe000, 0x5f38 bytes
    // ataport.sys .text:0xd850, 0x5f38 bytes
    //
    _o07(sdk::unknown_ptr) ata_port_convert_ulong_to_physical_address;
    
    // [AtaPortCopyMemory]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x67d0, 0x5f10 bytes
    // ataport.sys .text:0xe010, 0x5f38 bytes
    // ataport.sys .text:0xd860, 0x5f38 bytes
    //
    _o08(sdk::unknown_ptr) ata_port_copy_memory;
    
    // [AtaPortDebugBreak]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6ab0, 0x5f10 bytes
    // ataport.sys .text:0xe030, 0x5f38 bytes
    // ataport.sys .text:0xd880, 0x5f38 bytes
    //
    _o09(sdk::unknown_ptr) ata_port_debug_break;
    
    // [AtaPortDebugPrint]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6ac0, 0x5f10 bytes
    // ataport.sys .text:0xe040, 0x5f38 bytes
    // ataport.sys .text:0xd890, 0x5f38 bytes
    //
    _o10(sdk::unknown_ptr) ata_port_debug_print;
    
    // [AtaPortDeviceStateChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6d80, 0x5f10 bytes
    // ataport.sys .text:0xe0b0, 0x5f38 bytes
    // ataport.sys .text:0xd900, 0x5f38 bytes
    //
    _o11(sdk::unknown_ptr) ata_port_device_state_change;
    
    // [AtaPortEtwTraceLog]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7240, 0x5f10 bytes
    // ataport.sys .text:0xe110, 0x5f38 bytes
    // ataport.sys .text:0xd960, 0x5f38 bytes
    //
    _o12(sdk::unknown_ptr) ata_port_etw_trace_log;
    
    // [AtaPortGetDeviceBase]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6aa0, 0x5f10 bytes
    // ataport.sys .text:0xe220, 0x5f38 bytes
    // ataport.sys .text:0xda70, 0x5f38 bytes
    //
    _o13(sdk::unknown_ptr) ata_port_get_device_base;
    
    // [AtaPortGetParentBusType]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10b70, 0x5f10 bytes
    // ataport.sys .text:0x154f0, 0x5f38 bytes
    // ataport.sys .text:0x14ea0, 0x5f38 bytes
    //
    _o14(sdk::unknown_ptr) ata_port_get_parent_bus_type;
    
    // [AtaPortGetPhysicalAddress]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6b20, 0x5f10 bytes
    // ataport.sys .text:0x5480, 0x5f38 bytes
    // ataport.sys .text:0x5300, 0x5f38 bytes
    //
    _o15(sdk::unknown_ptr) ata_port_get_physical_address;
    
    // [AtaPortGetScatterGatherList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a90, 0x5f10 bytes
    // ataport.sys .text:0x5540, 0x5f38 bytes
    // ataport.sys .text:0x5480, 0x5f38 bytes
    //
    _o16(sdk::unknown_ptr) ata_port_get_scatter_gather_list;
    
    // [AtaPortGetUnCachedExtension]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6c50, 0x5f10 bytes
    // ataport.sys .text:0xe230, 0x5f38 bytes
    // ataport.sys .text:0xda80, 0x5f38 bytes
    //
    _o17(sdk::unknown_ptr) ata_port_get_un_cached_extension;
    
    // [AtaPortInitialize]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7fc0, 0x5f10 bytes
    // ataport.sys .text:0x10170, 0x5f38 bytes
    // ataport.sys .text:0xf9d0, 0x5f38 bytes
    //
    _o18(sdk::unknown_ptr) ata_port_initialize;
    
    // [AtaPortInitializeQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6f90, 0x5f10 bytes
    // ataport.sys .text:0xe290, 0x5f38 bytes
    // ataport.sys .text:0xdae0, 0x5f38 bytes
    //
    _o19(sdk::unknown_ptr) ata_port_initialize_queue_tag;
    
    // [AtaPortLogError]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6c90, 0x5f10 bytes
    // ataport.sys .text:0xe2f0, 0x5f38 bytes
    // ataport.sys .text:0xdb40, 0x5f38 bytes
    //
    _o20(sdk::unknown_ptr) ata_port_log_error;
    
    // [AtaPortMoveMemory]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x67d0, 0x5f10 bytes
    // ataport.sys .text:0xe010, 0x5f38 bytes
    // ataport.sys .text:0xd860, 0x5f38 bytes
    //
    _o21(sdk::unknown_ptr) ata_port_move_memory;
    
    // [AtaPortNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6ba0, 0x5f10 bytes
    // ataport.sys .text:0xe340, 0x5f38 bytes
    // ataport.sys .text:0xdb90, 0x5f38 bytes
    //
    _o22(sdk::unknown_ptr) ata_port_notification;
    
    // [AtaPortQuerySystemTime]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a80, 0x5f10 bytes
    // ataport.sys .text:0xe3e0, 0x5f38 bytes
    // ataport.sys .text:0xdc30, 0x5f38 bytes
    //
    _o23(sdk::unknown_ptr) ata_port_query_system_time;
    
    // [AtaPortReadPortBufferUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6810, 0x5f10 bytes
    // ataport.sys .text:0xe400, 0x5f38 bytes
    // ataport.sys .text:0xdc50, 0x5f38 bytes
    //
    _o24(sdk::unknown_ptr) ata_port_read_port_buffer_uchar;
    
    // [AtaPortReadPortBufferUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6850, 0x5f10 bytes
    // ataport.sys .text:0xe420, 0x5f38 bytes
    // ataport.sys .text:0xdc70, 0x5f38 bytes
    //
    _o25(sdk::unknown_ptr) ata_port_read_port_buffer_ulong;
    
    // [AtaPortReadPortBufferUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6830, 0x5f10 bytes
    // ataport.sys .text:0x5570, 0x5f38 bytes
    // ataport.sys .text:0x54b0, 0x5f38 bytes
    //
    _o26(sdk::unknown_ptr) ata_port_read_port_buffer_ushort;
    
    // [AtaPortReadPortUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x67e0, 0x5f10 bytes
    // ataport.sys .text:0x5510, 0x5f38 bytes
    // ataport.sys .text:0x5450, 0x5f38 bytes
    //
    _o27(sdk::unknown_ptr) ata_port_read_port_uchar;
    
    // [AtaPortReadPortUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6800, 0x5f10 bytes
    // ataport.sys .text:0xe440, 0x5f38 bytes
    // ataport.sys .text:0xdc90, 0x5f38 bytes
    //
    _o28(sdk::unknown_ptr) ata_port_read_port_ulong;
    
    // [AtaPortReadPortUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x67f0, 0x5f10 bytes
    // ataport.sys .text:0xe450, 0x5f38 bytes
    // ataport.sys .text:0xdca0, 0x5f38 bytes
    //
    _o29(sdk::unknown_ptr) ata_port_read_port_ushort;
    
    // [AtaPortReadRegisterBufferUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x68a0, 0x5f10 bytes
    // ataport.sys .text:0xe460, 0x5f38 bytes
    // ataport.sys .text:0xdcb0, 0x5f38 bytes
    //
    _o30(sdk::unknown_ptr) ata_port_read_register_buffer_uchar;
    
    // [AtaPortReadRegisterBufferUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x68e0, 0x5f10 bytes
    // ataport.sys .text:0xe490, 0x5f38 bytes
    // ataport.sys .text:0xdce0, 0x5f38 bytes
    //
    _o31(sdk::unknown_ptr) ata_port_read_register_buffer_ulong;
    
    // [AtaPortReadRegisterBufferUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x68c0, 0x5f10 bytes
    // ataport.sys .text:0xe4c0, 0x5f38 bytes
    // ataport.sys .text:0xdd10, 0x5f38 bytes
    //
    _o32(sdk::unknown_ptr) ata_port_read_register_buffer_ushort;
    
    // [AtaPortReadRegisterUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6870, 0x5f10 bytes
    // ataport.sys .text:0xe4f0, 0x5f38 bytes
    // ataport.sys .text:0xdd40, 0x5f38 bytes
    //
    _o33(sdk::unknown_ptr) ata_port_read_register_uchar;
    
    // [AtaPortReadRegisterUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6890, 0x5f10 bytes
    // ataport.sys .text:0xe500, 0x5f38 bytes
    // ataport.sys .text:0xdd50, 0x5f38 bytes
    //
    _o34(sdk::unknown_ptr) ata_port_read_register_ulong;
    
    // [AtaPortReadRegisterUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6880, 0x5f10 bytes
    // ataport.sys .text:0xe510, 0x5f38 bytes
    // ataport.sys .text:0xdd60, 0x5f38 bytes
    //
    _o35(sdk::unknown_ptr) ata_port_read_register_ushort;
    
    // [AtaPortRegistryAllocateBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6dc0, 0x5f10 bytes
    // ataport.sys .text:0xe520, 0x5f38 bytes
    // ataport.sys .text:0xdd70, 0x5f38 bytes
    //
    _o36(sdk::unknown_ptr) ata_port_registry_allocate_buffer;
    
    // [AtaPortRegistryFreeBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6e00, 0x5f10 bytes
    // ataport.sys .text:0xe580, 0x5f38 bytes
    // ataport.sys .text:0xddd0, 0x5f38 bytes
    //
    _o37(sdk::unknown_ptr) ata_port_registry_free_buffer;
    
    // [AtaPortRegistryRead]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6e40, 0x5f10 bytes
    // ataport.sys .text:0xe5e0, 0x5f38 bytes
    // ataport.sys .text:0xde30, 0x5f38 bytes
    //
    _o38(sdk::unknown_ptr) ata_port_registry_read;
    
    // [AtaPortRegistryWrite]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6eb0, 0x5f10 bytes
    // ataport.sys .text:0xe650, 0x5f38 bytes
    // ataport.sys .text:0xdea0, 0x5f38 bytes
    //
    _o39(sdk::unknown_ptr) ata_port_registry_write;
    
    // [AtaPortRegistryWriteDeferred]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6f20, 0x5f10 bytes
    // ataport.sys .text:0xe6c0, 0x5f38 bytes
    // ataport.sys .text:0xdf10, 0x5f38 bytes
    //
    _o40(sdk::unknown_ptr) ata_port_registry_write_deferred;
    
    // [AtaPortReleaseQueueTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7010, 0x5f10 bytes
    // ataport.sys .text:0xe730, 0x5f38 bytes
    // ataport.sys .text:0xdf80, 0x5f38 bytes
    //
    _o41(sdk::unknown_ptr) ata_port_release_queue_tag;
    
    // [AtaPortReleaseRequestSenseIrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6d40, 0x5f10 bytes
    // ataport.sys .text:0x57b0, 0x5f38 bytes
    // ataport.sys .text:0x56f0, 0x5f38 bytes
    //
    _o42(sdk::unknown_ptr) ata_port_release_request_sense_irb;
    
    // [AtaPortRequestCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6b60, 0x5f10 bytes
    // ataport.sys .text:0xe790, 0x5f38 bytes
    // ataport.sys .text:0xdfe0, 0x5f38 bytes
    //
    _o43(sdk::unknown_ptr) ata_port_request_callback;
    
    // [AtaPortStallExecution]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a70, 0x5f10 bytes
    // ataport.sys .text:0x5590, 0x5f38 bytes
    // ataport.sys .text:0x54d0, 0x5f38 bytes
    //
    _o44(sdk::unknown_ptr) ata_port_stall_execution;
    
    // [AtaPortTraceNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7050, 0x5f10 bytes
    // ataport.sys .text:0xe7e0, 0x5f38 bytes
    // ataport.sys .text:0xe040, 0x5f38 bytes
    //
    _o45(sdk::unknown_ptr) ata_port_trace_notification;
    
    // [AtaPortWritePortBufferUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6930, 0x5f10 bytes
    // ataport.sys .text:0xe9a0, 0x5f38 bytes
    // ataport.sys .text:0xe200, 0x5f38 bytes
    //
    _o46(sdk::unknown_ptr) ata_port_write_port_buffer_uchar;
    
    // [AtaPortWritePortBufferUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6970, 0x5f10 bytes
    // ataport.sys .text:0xe9c0, 0x5f38 bytes
    // ataport.sys .text:0xe220, 0x5f38 bytes
    //
    _o47(sdk::unknown_ptr) ata_port_write_port_buffer_ulong;
    
    // [AtaPortWritePortBufferUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6950, 0x5f10 bytes
    // ataport.sys .text:0x5550, 0x5f38 bytes
    // ataport.sys .text:0x5490, 0x5f38 bytes
    //
    _o48(sdk::unknown_ptr) ata_port_write_port_buffer_ushort;
    
    // [AtaPortWritePortUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6900, 0x5f10 bytes
    // ataport.sys .text:0x52b0, 0x5f38 bytes
    // ataport.sys .text:0x51f0, 0x5f38 bytes
    //
    _o49(sdk::unknown_ptr) ata_port_write_port_uchar;
    
    // [AtaPortWritePortUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6920, 0x5f10 bytes
    // ataport.sys .text:0x5530, 0x5f38 bytes
    // ataport.sys .text:0x5470, 0x5f38 bytes
    //
    _o50(sdk::unknown_ptr) ata_port_write_port_ulong;
    
    // [AtaPortWritePortUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6910, 0x5f10 bytes
    // ataport.sys .text:0xe9e0, 0x5f38 bytes
    // ataport.sys .text:0xe240, 0x5f38 bytes
    //
    _o51(sdk::unknown_ptr) ata_port_write_port_ushort;
    
    // [AtaPortWriteRegisterBufferUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x69b0, 0x5f10 bytes
    // ataport.sys .text:0xe9f0, 0x5f38 bytes
    // ataport.sys .text:0xe250, 0x5f38 bytes
    //
    _o52(sdk::unknown_ptr) ata_port_write_register_buffer_uchar;
    
    // [AtaPortWriteRegisterBufferUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a10, 0x5f10 bytes
    // ataport.sys .text:0xea20, 0x5f38 bytes
    // ataport.sys .text:0xe280, 0x5f38 bytes
    //
    _o53(sdk::unknown_ptr) ata_port_write_register_buffer_ulong;
    
    // [AtaPortWriteRegisterBufferUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x69e0, 0x5f10 bytes
    // ataport.sys .text:0xea50, 0x5f38 bytes
    // ataport.sys .text:0xe2b0, 0x5f38 bytes
    //
    _o54(sdk::unknown_ptr) ata_port_write_register_buffer_ushort;
    
    // [AtaPortWriteRegisterUchar]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6990, 0x5f10 bytes
    // ataport.sys .text:0xea80, 0x5f38 bytes
    // ataport.sys .text:0xe2e0, 0x5f38 bytes
    //
    _o55(sdk::unknown_ptr) ata_port_write_register_uchar;
    
    // [AtaPortWriteRegisterUlong]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6a40, 0x5f10 bytes
    // ataport.sys .text:0xea90, 0x5f38 bytes
    // ataport.sys .text:0xe2f0, 0x5f38 bytes
    //
    _o56(sdk::unknown_ptr) ata_port_write_register_ulong;
    
    // [AtaPortWriteRegisterUshort]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x69a0, 0x5f10 bytes
    // ataport.sys .text:0xeaa0, 0x5f38 bytes
    // ataport.sys .text:0xe300, 0x5f38 bytes
    //
    _o57(sdk::unknown_ptr) ata_port_write_register_ushort;
    
    // [AtaReadCapacityCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8a20, 0x5f10 bytes
    // ataport.sys .text:0x1008, 0x5f38 bytes
    // ataport.sys .text:0x1008, 0x5f38 bytes
    //
    _o58(sdk::unknown_ptr) ata_read_capacity_crb;
    
    // [AtaReadCapacityCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x88e0, 0x5f10 bytes
    // ataport.sys .text:0x106d0, 0x5f38 bytes
    // ataport.sys .text:0xff30, 0x5f38 bytes
    //
    _o59(sdk::unknown_ptr) ata_read_capacity_crb_completion;
    
    // [AtaReadCapacitySrbComplete]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8b24, 0x5f10 bytes
    // ataport.sys .text:0x1078, 0x5f38 bytes
    // ataport.sys .text:0x1078, 0x5f38 bytes
    //
    _o60(sdk::unknown_ptr) ata_read_capacity_srb_complete;
    
    // [AtaSecurityProtocolCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa3c8, 0x5f10 bytes
    // ataport.sys .text:0x10840, 0x5f38 bytes
    // ataport.sys .text:0x100a4, 0x5f38 bytes
    //
    _o61(sdk::unknown_ptr) ata_security_protocol_crb;
    
    // [AtaSetWriteCommand]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa254, 0x5f10 bytes
    // ataport.sys .text:0x10cb4, 0x5f38 bytes
    // ataport.sys .text:0x104f4, 0x5f38 bytes
    //
    _o62(sdk::unknown_ptr) ata_set_write_command;
    
    // [AtaVerifyCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8da4, 0x5f10 bytes
    // ataport.sys .text:0x10d5c, 0x5f38 bytes
    // ataport.sys .text:0x1059c, 0x5f38 bytes
    //
    _o63(sdk::unknown_ptr) ata_verify_crb;
    
    // [AtapTelemetryRegQueryRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12200, 0x5f10 bytes
    // ataport.sys .text:0x17280, 0x5f38 bytes
    // ataport.sys .text:0x16bd0, 0x5f38 bytes
    //
    _o64(sdk::unknown_ptr) atap_telemetry_reg_query_routine;
    
    // [AtapiCommonCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x95cc, 0x5f10 bytes
    // ataport.sys .text:0x10ea4, 0x5f38 bytes
    // ataport.sys .text:0x106e0, 0x5f38 bytes
    //
    _o65(sdk::unknown_ptr) atapi_common_crb;
    
    // [AtapiFormatUnitCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9764, 0x5f10 bytes
    // ataport.sys .text:0x11018, 0x5f38 bytes
    // ataport.sys .text:0x1084c, 0x5f38 bytes
    //
    _o66(sdk::unknown_ptr) atapi_format_unit_crb;
    
    // [AtapiModeCommandCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x98a0, 0x5f10 bytes
    // ataport.sys .text:0x11150, 0x5f38 bytes
    // ataport.sys .text:0x10990, 0x5f38 bytes
    //
    _o67(sdk::unknown_ptr) atapi_mode_command_crb_completion;
    
    // [AtapiModeSelectCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9b20, 0x5f10 bytes
    // ataport.sys .text:0x11218, 0x5f38 bytes
    // ataport.sys .text:0x10a58, 0x5f38 bytes
    //
    _o68(sdk::unknown_ptr) atapi_mode_select_crb;
    
    // [AtapiModeSenseCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9968, 0x5f10 bytes
    // ataport.sys .text:0x113fc, 0x5f38 bytes
    // ataport.sys .text:0x10c6c, 0x5f38 bytes
    //
    _o69(sdk::unknown_ptr) atapi_mode_sense_crb;
    
    // [ATAPORT_EVENT_CHANNEL_RESET_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16270, 0x5f10 bytes
    // ataport.sys .rdata:0x1abe8, 0x5f38 bytes
    // ataport.sys .rdata:0x1aba8, 0x5f38 bytes
    //
    _o70(sdk::unknown_ptr) ataport_event_channel_reset_complete;
    
    // [ATAPORT_EVENT_CHANNEL_RESET_INIT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x163f8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad38, 0x5f38 bytes
    // ataport.sys .rdata:0x1acf8, 0x5f38 bytes
    //
    _o71(sdk::unknown_ptr) ataport_event_channel_reset_init;
    
    // [ATAPORT_EVENT_CHANNEL_START_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x161e0, 0x5f10 bytes
    // ataport.sys .rdata:0x1ab58, 0x5f38 bytes
    // ataport.sys .rdata:0x1ab18, 0x5f38 bytes
    //
    _o72(sdk::unknown_ptr) ataport_event_channel_start_complete;
    
    // [ATAPORT_EVENT_CHANNEL_START_INIT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16358, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac98, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac58, 0x5f38 bytes
    //
    _o73(sdk::unknown_ptr) ataport_event_channel_start_init;
    
    // [ATAPORT_EVENT_DEV_ENUM_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16290, 0x5f10 bytes
    // ataport.sys .rdata:0x1abf8, 0x5f38 bytes
    // ataport.sys .rdata:0x1abb8, 0x5f38 bytes
    //
    _o74(sdk::unknown_ptr) ataport_event_dev_enum_complete;
    
    // [ATAPORT_EVENT_DEV_ENUM_INIT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16200, 0x5f10 bytes
    // ataport.sys .rdata:0x1ab78, 0x5f38 bytes
    // ataport.sys .rdata:0x1ab38, 0x5f38 bytes
    //
    _o75(sdk::unknown_ptr) ataport_event_dev_enum_init;
    
    // [ATAPORT_EVENT_DEVICE_MISSING]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162c8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac18, 0x5f38 bytes
    // ataport.sys .rdata:0x1abd8, 0x5f38 bytes
    //
    _o76(sdk::unknown_ptr) ataport_event_device_missing;
    
    // [ATAPORT_EVENT_DEVICE_RESET_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162e8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac38, 0x5f38 bytes
    // ataport.sys .rdata:0x1abf8, 0x5f38 bytes
    //
    _o77(sdk::unknown_ptr) ataport_event_device_reset_complete;
    
    // [ATAPORT_EVENT_DEVICE_RESET_INIT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16368, 0x5f10 bytes
    // ataport.sys .rdata:0x1aca8, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac68, 0x5f38 bytes
    //
    _o78(sdk::unknown_ptr) ataport_event_device_reset_init;
    
    // [ATAPORT_EVENT_GET_TELEMETRY_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162d8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac28, 0x5f38 bytes
    // ataport.sys .rdata:0x1abe8, 0x5f38 bytes
    //
    _o79(sdk::unknown_ptr) ataport_event_get_telemetry_complete;
    
    // [ATAPORT_EVENT_GET_TELEMETRY_INIT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16348, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac88, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac48, 0x5f38 bytes
    //
    _o80(sdk::unknown_ptr) ataport_event_get_telemetry_init;
    
    // [ATAPORT_EVENT_IO_REQUEST_COMPLETE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x163e8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad28, 0x5f38 bytes
    // ataport.sys .rdata:0x1ace8, 0x5f38 bytes
    //
    _o81(sdk::unknown_ptr) ataport_event_io_request_complete;
    
    // [ATAPORT_EVENT_IO_REQUEST_TIMEOUT]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162f8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac48, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac08, 0x5f38 bytes
    //
    _o82(sdk::unknown_ptr) ataport_event_io_request_timeout;
    
    // [ATAPORT_EVENT_IO_REQUEST_TRANSPORT_ERROR]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x163d8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad18, 0x5f38 bytes
    // ataport.sys .rdata:0x1acd8, 0x5f38 bytes
    //
    _o83(sdk::unknown_ptr) ataport_event_io_request_transport_error;
    
    // [ATAPORT_EVENT_LPM_POWERSTATE_PARTIAL]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x163b8, 0x5f10 bytes
    // ataport.sys .rdata:0x1acf8, 0x5f38 bytes
    // ataport.sys .rdata:0x1acb8, 0x5f38 bytes
    //
    _o84(sdk::unknown_ptr) ataport_event_lpm_powerstate_partial;
    
    // [ATAPORT_EVENT_LPM_POWERSTATE_SLUMBER]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162b8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac08, 0x5f38 bytes
    // ataport.sys .rdata:0x1abc8, 0x5f38 bytes
    //
    _o85(sdk::unknown_ptr) ataport_event_lpm_powerstate_slumber;
    
    // [ATAPORT_EVENT_XFER_MODE_CHANGE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16250, 0x5f10 bytes
    // ataport.sys .rdata:0x1abc8, 0x5f38 bytes
    // ataport.sys .rdata:0x1ab88, 0x5f38 bytes
    //
    _o86(sdk::unknown_ptr) ataport_event_xfer_mode_change;
    
    // [CallMiniIdeUdmaModesSupported]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf298, 0x5f10 bytes
    // ataport.sys .text:0x145f0, 0x5f38 bytes
    // ataport.sys .text:0x13f90, 0x5f38 bytes
    //
    _o87(sdk::unknown_ptr) call_mini_ide_udma_modes_supported;
    
    // [CallMiniPortChannelControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x62a0, 0x5f10 bytes
    // ataport.sys .text:0xd7c4, 0x5f38 bytes
    // ataport.sys .text:0xd018, 0x5f38 bytes
    //
    _o88(sdk::unknown_ptr) call_mini_port_channel_control;
    
    // [CallObsoleteTransferModeSelect]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf358, 0x5f10 bytes
    // ataport.sys .text:0x146b4, 0x5f38 bytes
    // ataport.sys .text:0x14054, 0x5f38 bytes
    //
    _o89(sdk::unknown_ptr) call_obsolete_transfer_mode_select;
    
    // [ChannelAcpiTransferModeSelect]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12dec, 0x5f10 bytes
    // ataport.sys .text:0x17efc, 0x5f38 bytes
    // ataport.sys .text:0x1785c, 0x5f38 bytes
    //
    _o90(sdk::unknown_ptr) channel_acpi_transfer_mode_select;
    
    // [ChannelAddDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23e90, 0x5f10 bytes
    // ataport.sys PAGE:0x2ae80, 0x5f38 bytes
    // ataport.sys PAGE:0x2aea0, 0x5f38 bytes
    //
    _o91(sdk::unknown_ptr) channel_add_device;
    
    // [ChannelAllocateProxyPdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x256a0, 0x5f10 bytes
    // ataport.sys PAGE:0x2c1c0, 0x5f38 bytes
    // ataport.sys PAGE:0x2c1f0, 0x5f38 bytes
    //
    _o92(sdk::unknown_ptr) channel_allocate_proxy_pdo;
    
    // [ChannelAtaMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x233a8, 0x5f10 bytes
    // ataport.sys PAGE:0x29200, 0x5f38 bytes
    // ataport.sys PAGE:0x29210, 0x5f38 bytes
    //
    _o93(sdk::unknown_ptr) channel_ata_miniport_ioctl;
    
    // [ChannelConnectInterrupt]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f244, 0x5f10 bytes
    // ataport.sys PAGE:0x26028, 0x5f38 bytes
    // ataport.sys PAGE:0x26028, 0x5f38 bytes
    //
    _o94(sdk::unknown_ptr) channel_connect_interrupt;
    
    // [ChannelCreateSymblicLinks]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f49c, 0x5f10 bytes
    // ataport.sys PAGE:0x261a8, 0x5f38 bytes
    // ataport.sys PAGE:0x261a8, 0x5f38 bytes
    //
    _o95(sdk::unknown_ptr) channel_create_symblic_links;
    
    // [ChannelDeviceIoControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe3cc, 0x5f10 bytes
    // ataport.sys .text:0x55ac, 0x5f38 bytes
    // ataport.sys .text:0x54ec, 0x5f38 bytes
    //
    _o96(sdk::unknown_ptr) channel_device_io_control;
    
    // [ChannelDisableDeviceInterface]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11710, 0x5f10 bytes
    // ataport.sys .text:0x167c4, 0x5f38 bytes
    // ataport.sys .text:0x16104, 0x5f38 bytes
    //
    _o97(sdk::unknown_ptr) channel_disable_device_interface;
    
    // [ChannelFilterResourceRequirements]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x244f0, 0x5f10 bytes
    // ataport.sys PAGE:0x2b180, 0x5f38 bytes
    // ataport.sys PAGE:0x2b1b0, 0x5f38 bytes
    //
    _o98(sdk::unknown_ptr) channel_filter_resource_requirements;
    
    // [ChannelFreeDeviceInterface]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11700, 0x5f10 bytes
    // ataport.sys .text:0x167f4, 0x5f38 bytes
    // ataport.sys .text:0x16134, 0x5f38 bytes
    //
    _o99(sdk::unknown_ptr) channel_free_device_interface;
    
    // [ChannelFreePreAllocedMemory]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f42c, 0x5f10 bytes
    // ataport.sys PAGE:0x26410, 0x5f38 bytes
    // ataport.sys PAGE:0x26414, 0x5f38 bytes
    //
    _p00(sdk::unknown_ptr) channel_free_pre_alloced_memory;
    
    // [ChannelFreeProxyPdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25810, 0x5f10 bytes
    // ataport.sys PAGE:0x2c368, 0x5f38 bytes
    // ataport.sys PAGE:0x2c398, 0x5f38 bytes
    //
    _p01(sdk::unknown_ptr) channel_free_proxy_pdo;
    
    // [ChannelGetControllerResources]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x605c, 0x5f10 bytes
    // ataport.sys .text:0xd858, 0x5f38 bytes
    // ataport.sys .text:0xd0ac, 0x5f38 bytes
    //
    _p02(sdk::unknown_ptr) channel_get_controller_resources;
    
    // [ChannelInitFdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f5c8, 0x5f10 bytes
    // ataport.sys PAGE:0x26490, 0x5f38 bytes
    // ataport.sys PAGE:0x26494, 0x5f38 bytes
    //
    _p03(sdk::unknown_ptr) channel_init_fdo;
    
    // [ChannelInitializeAcpiTiming]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1e000, 0x5f10 bytes
    // ataport.sys PAGE:0x24f30, 0x5f38 bytes
    // ataport.sys PAGE:0x24f20, 0x5f38 bytes
    //
    _p04(sdk::unknown_ptr) channel_initialize_acpi_timing;
    
    // [ChannelInitializeMiniport]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f724, 0x5f10 bytes
    // ataport.sys PAGE:0x26578, 0x5f38 bytes
    // ataport.sys PAGE:0x2657c, 0x5f38 bytes
    //
    _p05(sdk::unknown_ptr) channel_initialize_miniport;
    
    // [ChannelInterruptNotify]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5d64, 0x5f10 bytes
    // ataport.sys .text:0xd884, 0x5f38 bytes
    // ataport.sys .text:0xd0d8, 0x5f38 bytes
    //
    _p06(sdk::unknown_ptr) channel_interrupt_notify;
    
    // [ChannelInvokeAcpiGetMethods]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1208, 0x5f10 bytes
    // ataport.sys .text:0x9330, 0x5f38 bytes
    // ataport.sys .text:0x8b94, 0x5f38 bytes
    //
    _p07(sdk::unknown_ptr) channel_invoke_acpi_get_methods;
    
    // [ChannelInvokeGtm]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1354, 0x5f10 bytes
    // ataport.sys .text:0x94ac, 0x5f38 bytes
    // ataport.sys .text:0x8d14, 0x5f38 bytes
    //
    _p08(sdk::unknown_ptr) channel_invoke_gtm;
    
    // [ChannelInvokeStm]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1494, 0x5f10 bytes
    // ataport.sys .text:0x9510, 0x5f38 bytes
    // ataport.sys .text:0x8d78, 0x5f38 bytes
    //
    _p09(sdk::unknown_ptr) channel_invoke_stm;
    
    // [ChannelProcessResourceLists]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f808, 0x5f10 bytes
    // ataport.sys PAGE:0x2670c, 0x5f38 bytes
    // ataport.sys PAGE:0x2670c, 0x5f38 bytes
    //
    _p10(sdk::unknown_ptr) channel_process_resource_lists;
    
    // [ChannelProxySendMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11734, 0x5f10 bytes
    // ataport.sys .text:0x16818, 0x5f38 bytes
    // ataport.sys .text:0x16158, 0x5f38 bytes
    //
    _p11(sdk::unknown_ptr) channel_proxy_send_miniport_ioctl;
    
    // [ChannelQueryBusRelation]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24b10, 0x5f10 bytes
    // ataport.sys PAGE:0x2b4d0, 0x5f38 bytes
    // ataport.sys PAGE:0x2b500, 0x5f38 bytes
    //
    _p12(sdk::unknown_ptr) channel_query_bus_relation;
    
    // [ChannelQueryDeviceRelations]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x243c0, 0x5f10 bytes
    // ataport.sys PAGE:0x2b690, 0x5f38 bytes
    // ataport.sys PAGE:0x2b6c0, 0x5f38 bytes
    //
    _p13(sdk::unknown_ptr) channel_query_device_relations;
    
    // [ChannelQueryId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24830, 0x5f10 bytes
    // ataport.sys PAGE:0x2b7d0, 0x5f38 bytes
    // ataport.sys PAGE:0x2b800, 0x5f38 bytes
    //
    _p14(sdk::unknown_ptr) channel_query_id;
    
    // [ChannelQueryInterfaces]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21ab0, 0x5f10 bytes
    // ataport.sys PAGE:0x28e3c, 0x5f38 bytes
    // ataport.sys PAGE:0x28e4c, 0x5f38 bytes
    //
    _p15(sdk::unknown_ptr) channel_query_interfaces;
    
    // [ChannelQueryPcmciaParent]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f148, 0x5f10 bytes
    // ataport.sys PAGE:0x26810, 0x5f38 bytes
    // ataport.sys PAGE:0x26810, 0x5f38 bytes
    //
    _p16(sdk::unknown_ptr) channel_query_pcmcia_parent;
    
    // [ChannelReleaseResources]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1fa1c, 0x5f10 bytes
    // ataport.sys PAGE:0x26944, 0x5f38 bytes
    // ataport.sys PAGE:0x26944, 0x5f38 bytes
    //
    _p17(sdk::unknown_ptr) channel_release_resources;
    
    // [ChannelRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2497c, 0x5f10 bytes
    // ataport.sys PAGE:0x2b8c0, 0x5f38 bytes
    // ataport.sys PAGE:0x2b8f0, 0x5f38 bytes
    //
    _p18(sdk::unknown_ptr) channel_remove_device;
    
    // [ChannelScsiGetCapabilitiesIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23210, 0x5f10 bytes
    // ataport.sys PAGE:0x292d8, 0x5f38 bytes
    // ataport.sys PAGE:0x292e8, 0x5f38 bytes
    //
    _p19(sdk::unknown_ptr) channel_scsi_get_capabilities_ioctl;
    
    // [ChannelScsiPassThroughIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23280, 0x5f10 bytes
    // ataport.sys PAGE:0x29354, 0x5f38 bytes
    // ataport.sys PAGE:0x29364, 0x5f38 bytes
    //
    _p20(sdk::unknown_ptr) channel_scsi_pass_through_ioctl;
    
    // [ChannelStartDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24234, 0x5f10 bytes
    // ataport.sys PAGE:0x2b938, 0x5f38 bytes
    // ataport.sys PAGE:0x2b968, 0x5f38 bytes
    //
    _p21(sdk::unknown_ptr) channel_start_device;
    
    // [ChannelStartMiniport]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5d98, 0x5f10 bytes
    // ataport.sys .text:0xd8c0, 0x5f38 bytes
    // ataport.sys .text:0xd114, 0x5f38 bytes
    //
    _p22(sdk::unknown_ptr) channel_start_miniport;
    
    // [ChannelStartTimer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6084, 0x5f10 bytes
    // ataport.sys .text:0xda8c, 0x5f38 bytes
    // ataport.sys .text:0xd2e0, 0x5f38 bytes
    //
    _p23(sdk::unknown_ptr) channel_start_timer;
    
    // [ChannelStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24918, 0x5f10 bytes
    // ataport.sys PAGE:0x2b9f4, 0x5f38 bytes
    // ataport.sys PAGE:0x2ba24, 0x5f38 bytes
    //
    _p24(sdk::unknown_ptr) channel_stop_device;
    
    // [ChannelStopMiniport]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5f80, 0x5f10 bytes
    // ataport.sys .text:0xdb28, 0x5f38 bytes
    // ataport.sys .text:0xd37c, 0x5f38 bytes
    //
    _p25(sdk::unknown_ptr) channel_stop_miniport;
    
    // [ChannelStopTimer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6108, 0x5f10 bytes
    // ataport.sys .text:0xdbe0, 0x5f38 bytes
    // ataport.sys .text:0xd434, 0x5f38 bytes
    //
    _p26(sdk::unknown_ptr) channel_stop_timer;
    
    // [ChannelStorageQueryProperty]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe4b4, 0x5f10 bytes
    // ataport.sys .text:0x563c, 0x5f38 bytes
    // ataport.sys .text:0x557c, 0x5f38 bytes
    //
    _p27(sdk::unknown_ptr) channel_storage_query_property;
    
    // [ChannelSyncAcpiEvalCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11e0, 0x5f10 bytes
    // ataport.sys .text:0x9750, 0x5f38 bytes
    // ataport.sys .text:0x8fb0, 0x5f38 bytes
    //
    _p28(sdk::unknown_ptr) channel_sync_acpi_eval_completion;
    
    // [ChannelSyncAcpiEvalMethod]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1000, 0x5f10 bytes
    // ataport.sys .text:0x9784, 0x5f38 bytes
    // ataport.sys .text:0x8fe4, 0x5f38 bytes
    //
    _p29(sdk::unknown_ptr) channel_sync_acpi_eval_method;
    
    // [ChannelValidateAtaMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x258a8, 0x5f10 bytes
    // ataport.sys PAGE:0x2c43c, 0x5f38 bytes
    // ataport.sys PAGE:0x2c46c, 0x5f38 bytes
    //
    _p30(sdk::unknown_ptr) channel_validate_ata_miniport_ioctl;
    
    // [CheckForQuiescence]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf1d8, 0x5f10 bytes
    // ataport.sys .text:0x13ee0, 0x5f38 bytes
    // ataport.sys .text:0x13880, 0x5f38 bytes
    //
    _p31(sdk::unknown_ptr) check_for_quiescence;
    
    // [CopyField]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7c9c, 0x5f10 bytes
    // ataport.sys .text:0xfc40, 0x5f38 bytes
    // ataport.sys .text:0xf49c, 0x5f38 bytes
    //
    _p32(sdk::unknown_ptr) copy_field;
    
    // [CrbAddNonPagedDataBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1de0, 0x5f10 bytes
    // ataport.sys .text:0x31a4, 0x5f38 bytes
    // ataport.sys .text:0x3908, 0x5f38 bytes
    //
    _p33(sdk::unknown_ptr) crb_add_non_paged_data_buffer;
    
    // [CrbAllocDataBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1c70, 0x5f10 bytes
    // ataport.sys .text:0xa130, 0x5f38 bytes
    // ataport.sys .text:0x9990, 0x5f38 bytes
    //
    _p34(sdk::unknown_ptr) crb_alloc_data_buffer;
    
    // [CrbGetLocalMdl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1d6c, 0x5f10 bytes
    // ataport.sys .text:0x3230, 0x5f38 bytes
    // ataport.sys .text:0x3998, 0x5f38 bytes
    //
    _p35(sdk::unknown_ptr) crb_get_local_mdl;
    
    // [CrbInitWithSrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1c00, 0x5f10 bytes
    // ataport.sys .text:0x2d40, 0x5f38 bytes
    // ataport.sys .text:0x3160, 0x5f38 bytes
    //
    _p36(sdk::unknown_ptr) crb_init_with_srb;
    
    // [CrbReleaseDataBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1ce8, 0x5f10 bytes
    // ataport.sys .text:0x301c, 0x5f38 bytes
    // ataport.sys .text:0x377c, 0x5f38 bytes
    //
    _p37(sdk::unknown_ptr) crb_release_data_buffer;
    
    // [CycleTimeToTransferMode]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1317c, 0x5f10 bytes
    // ataport.sys .text:0x181b8, 0x5f38 bytes
    // ataport.sys .text:0x17b0c, 0x5f38 bytes
    //
    _p38(sdk::unknown_ptr) cycle_time_to_transfer_mode;
    
    // [DeviceAllocateBcStream]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xdf88, 0x5f10 bytes
    // ataport.sys .text:0x13494, 0x5f38 bytes
    // ataport.sys .text:0x12e34, 0x5f38 bytes
    //
    _p39(sdk::unknown_ptr) device_allocate_bc_stream;
    
    // [DeviceAllocatePdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24cb8, 0x5f10 bytes
    // ataport.sys PAGE:0x2ba64, 0x5f38 bytes
    // ataport.sys PAGE:0x2ba94, 0x5f38 bytes
    //
    _p40(sdk::unknown_ptr) device_allocate_pdo;
    
    // [DeviceAllocatePdoCallBack]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24d70, 0x5f10 bytes
    // ataport.sys PAGE:0x2bb24, 0x5f38 bytes
    // ataport.sys PAGE:0x2bb54, 0x5f38 bytes
    //
    _p41(sdk::unknown_ptr) device_allocate_pdo_call_back;
    
    // [DeviceAllocateQuiesceDeviceWorkItem]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xff04, 0x5f10 bytes
    // ataport.sys .text:0x14a40, 0x5f38 bytes
    // ataport.sys .text:0x143e0, 0x5f38 bytes
    //
    _p42(sdk::unknown_ptr) device_allocate_quiesce_device_work_item;
    
    // [DeviceAtaPassThroughIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23718, 0x5f10 bytes
    // ataport.sys PAGE:0x2a4b0, 0x5f38 bytes
    // ataport.sys PAGE:0x2a4d8, 0x5f38 bytes
    //
    _p43(sdk::unknown_ptr) device_ata_pass_through_ioctl;
    
    // [DeviceBuildBusId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20c1c, 0x5f10 bytes
    // ataport.sys PAGE:0x27bd4, 0x5f38 bytes
    // ataport.sys PAGE:0x27bcc, 0x5f38 bytes
    //
    _p44(sdk::unknown_ptr) device_build_bus_id;
    
    // [DeviceBuildCompatibleId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20eb4, 0x5f10 bytes
    // ataport.sys PAGE:0x27e00, 0x5f38 bytes
    // ataport.sys PAGE:0x27df8, 0x5f38 bytes
    //
    _p45(sdk::unknown_ptr) device_build_compatible_id;
    
    // [DeviceBuildDumpData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2358, 0x5f10 bytes
    // ataport.sys .text:0xa3c4, 0x5f38 bytes
    // ataport.sys .text:0x9c24, 0x5f38 bytes
    //
    _p46(sdk::unknown_ptr) device_build_dump_data;
    
    // [DeviceBuildDumpDriverList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x20fc, 0x5f10 bytes
    // ataport.sys .text:0xa564, 0x5f38 bytes
    // ataport.sys .text:0x9dc4, 0x5f38 bytes
    //
    _p47(sdk::unknown_ptr) device_build_dump_driver_list;
    
    // [DeviceBuildHardwareId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21164, 0x5f10 bytes
    // ataport.sys PAGE:0x28034, 0x5f38 bytes
    // ataport.sys PAGE:0x2803c, 0x5f38 bytes
    //
    _p48(sdk::unknown_ptr) device_build_hardware_id;
    
    // [DeviceBuildInstanceId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20e00, 0x5f10 bytes
    // ataport.sys PAGE:0x283cc, 0x5f38 bytes
    // ataport.sys PAGE:0x283d8, 0x5f38 bytes
    //
    _p49(sdk::unknown_ptr) device_build_instance_id;
    
    // [DeviceBuildStorageDeviceDescriptor]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe1e0, 0x5f10 bytes
    // ataport.sys .text:0x4d0c, 0x5f38 bytes
    // ataport.sys .text:0x3254, 0x5f38 bytes
    //
    _p50(sdk::unknown_ptr) device_build_storage_device_descriptor;
    
    // [DeviceClearTimerHold]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf7f8, 0x5f10 bytes
    // ataport.sys .text:0x14a7c, 0x5f38 bytes
    // ataport.sys .text:0x1441c, 0x5f38 bytes
    //
    _p51(sdk::unknown_ptr) device_clear_timer_hold;
    
    // [DeviceDeviceIoControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xdcb4, 0x5f10 bytes
    // ataport.sys .text:0x480c, 0x5f38 bytes
    // ataport.sys .text:0x188c, 0x5f38 bytes
    //
    _p52(sdk::unknown_ptr) device_device_io_control;
    
    // [DeviceFreeBcStream]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe0d8, 0x5f10 bytes
    // ataport.sys .text:0x135a8, 0x5f38 bytes
    // ataport.sys .text:0x12f48, 0x5f38 bytes
    //
    _p53(sdk::unknown_ptr) device_free_bc_stream;
    
    // [DeviceFreePdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24f88, 0x5f10 bytes
    // ataport.sys PAGE:0x2bcfc, 0x5f38 bytes
    // ataport.sys PAGE:0x2bd2c, 0x5f38 bytes
    //
    _p54(sdk::unknown_ptr) device_free_pdo;
    
    // [DeviceFreePdoCallBack]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x24fac, 0x5f10 bytes
    // ataport.sys PAGE:0x2bd28, 0x5f38 bytes
    // ataport.sys PAGE:0x2bd58, 0x5f38 bytes
    //
    _p55(sdk::unknown_ptr) device_free_pdo_call_back;
    
    // [DeviceFreeQuiesceDeviceWorkItem]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xff30, 0x5f10 bytes
    // ataport.sys .text:0x14ad4, 0x5f38 bytes
    // ataport.sys .text:0x14474, 0x5f38 bytes
    //
    _p56(sdk::unknown_ptr) device_free_quiesce_device_work_item;
    
    // [DeviceGetBcProperties]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21d94, 0x5f10 bytes
    // ataport.sys PAGE:0x29484, 0x5f38 bytes
    // ataport.sys PAGE:0x29490, 0x5f38 bytes
    //
    _p57(sdk::unknown_ptr) device_get_bc_properties;
    
    // [DeviceGetDumpPointersEx]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2224, 0x5f10 bytes
    // ataport.sys .text:0xa7a0, 0x5f38 bytes
    // ataport.sys .text:0xa000, 0x5f38 bytes
    //
    _p58(sdk::unknown_ptr) device_get_dump_pointers_ex;
    
    // [DeviceHandleDeviceTelemetryIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2349c, 0x5f10 bytes
    // ataport.sys PAGE:0x294d8, 0x5f38 bytes
    // ataport.sys PAGE:0x294e4, 0x5f38 bytes
    //
    _p59(sdk::unknown_ptr) device_handle_device_telemetry_ioctl;
    
    // [DeviceHandleNVCacheScsiMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21f0c, 0x5f10 bytes
    // ataport.sys PAGE:0x296f4, 0x5f38 bytes
    // ataport.sys PAGE:0x29700, 0x5f38 bytes
    //
    _p60(sdk::unknown_ptr) device_handle_nv_cache_scsi_miniport_ioctl;
    
    // [DeviceHandleSmartScsiMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x22480, 0x5f10 bytes
    // ataport.sys PAGE:0x24638, 0x5f38 bytes
    // ataport.sys PAGE:0x24568, 0x5f38 bytes
    //
    _p61(sdk::unknown_ptr) device_handle_smart_scsi_miniport_ioctl;
    
    // [DeviceInitDeviceFinal]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xfb04, 0x5f10 bytes
    // ataport.sys .text:0x14b0c, 0x5f38 bytes
    // ataport.sys .text:0x144ac, 0x5f38 bytes
    //
    _p62(sdk::unknown_ptr) device_init_device_final;
    
    // [DeviceInitDeviceWithGtf]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf840, 0x5f10 bytes
    // ataport.sys .text:0x14c64, 0x5f38 bytes
    // ataport.sys .text:0x14604, 0x5f38 bytes
    //
    _p63(sdk::unknown_ptr) device_init_device_with_gtf;
    
    // [DeviceInitWithGtfSyncCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf830, 0x5f10 bytes
    // ataport.sys .text:0x14d90, 0x5f38 bytes
    // ataport.sys .text:0x14730, 0x5f38 bytes
    //
    _p64(sdk::unknown_ptr) device_init_with_gtf_sync_completion;
    
    // [DeviceInvokeGtf]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13ac, 0x5f10 bytes
    // ataport.sys .text:0x99a0, 0x5f38 bytes
    // ataport.sys .text:0x9200, 0x5f38 bytes
    //
    _p65(sdk::unknown_ptr) device_invoke_gtf;
    
    // [DeviceIoPriorityHintSupport]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21dd8, 0x5f10 bytes
    // ataport.sys PAGE:0x299b8, 0x5f38 bytes
    // ataport.sys PAGE:0x299e0, 0x5f38 bytes
    //
    _p66(sdk::unknown_ptr) device_io_priority_hint_support;
    
    // [DeviceIssueFinalInit]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xfc50, 0x5f10 bytes
    // ataport.sys .text:0x14dc0, 0x5f38 bytes
    // ataport.sys .text:0x14760, 0x5f38 bytes
    //
    _p67(sdk::unknown_ptr) device_issue_final_init;
    
    // [DeviceIssueGtfData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf950, 0x5f10 bytes
    // ataport.sys .text:0x15080, 0x5f38 bytes
    // ataport.sys .text:0x14a20, 0x5f38 bytes
    //
    _p68(sdk::unknown_ptr) device_issue_gtf_data;
    
    // [DevicePowerSettingCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf720, 0x5f10 bytes
    // ataport.sys .text:0x15240, 0x5f38 bytes
    // ataport.sys .text:0x14be0, 0x5f38 bytes
    //
    _p69(sdk::unknown_ptr) device_power_setting_callback;
    
    // [DeviceQueryId]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20af0, 0x5f10 bytes
    // ataport.sys PAGE:0x28540, 0x5f38 bytes
    // ataport.sys PAGE:0x28550, 0x5f38 bytes
    //
    _p70(sdk::unknown_ptr) device_query_id;
    
    // [DeviceQueryTelemetrySupportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x233d8, 0x5f10 bytes
    // ataport.sys PAGE:0x29e04, 0x5f38 bytes
    // ataport.sys PAGE:0x29e2c, 0x5f38 bytes
    //
    _p71(sdk::unknown_ptr) device_query_telemetry_support_ioctl;
    
    // [DeviceQueryText]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7cf0, 0x5f10 bytes
    // ataport.sys .text:0xfd80, 0x5f38 bytes
    // ataport.sys .text:0xf5e0, 0x5f38 bytes
    //
    _p72(sdk::unknown_ptr) device_query_text;
    
    // [DeviceQueryWmiDataBlock]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27300, 0x5f10 bytes
    // ataport.sys PAGE:0x2db20, 0x5f38 bytes
    // ataport.sys PAGE:0x2db30, 0x5f38 bytes
    //
    _p73(sdk::unknown_ptr) device_query_wmi_data_block;
    
    // [DeviceQueryWmiRegInfo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x273c0, 0x5f10 bytes
    // ataport.sys PAGE:0x2dc00, 0x5f38 bytes
    // ataport.sys PAGE:0x2dc10, 0x5f38 bytes
    //
    _p74(sdk::unknown_ptr) device_query_wmi_reg_info;
    
    // [DeviceRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25554, 0x5f10 bytes
    // ataport.sys PAGE:0x2be00, 0x5f38 bytes
    // ataport.sys PAGE:0x2be30, 0x5f38 bytes
    //
    _p75(sdk::unknown_ptr) device_remove_device;
    
    // [DeviceScsiGetAddressIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2266c, 0x5f10 bytes
    // ataport.sys PAGE:0x24a3c, 0x5f38 bytes
    // ataport.sys PAGE:0x24a3c, 0x5f38 bytes
    //
    _p76(sdk::unknown_ptr) device_scsi_get_address_ioctl;
    
    // [DeviceScsiPassThroughIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21e1c, 0x5f10 bytes
    // ataport.sys PAGE:0x29eb4, 0x5f38 bytes
    // ataport.sys PAGE:0x29edc, 0x5f38 bytes
    //
    _p77(sdk::unknown_ptr) device_scsi_pass_through_ioctl;
    
    // [DeviceSetWmiDataBlock]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27400, 0x5f10 bytes
    // ataport.sys PAGE:0x2dc40, 0x5f38 bytes
    // ataport.sys PAGE:0x2dc50, 0x5f38 bytes
    //
    _p78(sdk::unknown_ptr) device_set_wmi_data_block;
    
    // [DeviceSetWmiDataItem]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27400, 0x5f10 bytes
    // ataport.sys PAGE:0x2dc40, 0x5f38 bytes
    // ataport.sys PAGE:0x2dc50, 0x5f38 bytes
    //
    _p79(sdk::unknown_ptr) device_set_wmi_data_item;
    
    // [DeviceStartDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x250a4, 0x5f10 bytes
    // ataport.sys PAGE:0x2bf60, 0x5f38 bytes
    // ataport.sys PAGE:0x2bf90, 0x5f38 bytes
    //
    _p80(sdk::unknown_ptr) device_start_device;
    
    // [DeviceStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25538, 0x5f10 bytes
    // ataport.sys PAGE:0x2c1a0, 0x5f38 bytes
    // ataport.sys PAGE:0x2c1d0, 0x5f38 bytes
    //
    _p81(sdk::unknown_ptr) device_stop_device;
    
    // [DeviceStorageManageDataSetAttributes]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x22b40, 0x5f10 bytes
    // ataport.sys PAGE:0x29f44, 0x5f38 bytes
    // ataport.sys PAGE:0x29f6c, 0x5f38 bytes
    //
    _p82(sdk::unknown_ptr) device_storage_manage_data_set_attributes;
    
    // [DeviceStorageQueryProperty]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x226e0, 0x5f10 bytes
    // ataport.sys PAGE:0x24408, 0x5f38 bytes
    // ataport.sys PAGE:0x242dc, 0x5f38 bytes
    //
    _p83(sdk::unknown_ptr) device_storage_query_property;
    
    // [DeviceUpdateRequestTimeoutCounter]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf798, 0x5f10 bytes
    // ataport.sys .text:0x4c2c, 0x5f38 bytes
    // ataport.sys .text:0x3078, 0x5f38 bytes
    //
    _p84(sdk::unknown_ptr) device_update_request_timeout_counter;
    
    // [DeviceValidateScsiMiniportIoctl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21e9c, 0x5f10 bytes
    // ataport.sys PAGE:0x24840, 0x5f38 bytes
    // ataport.sys PAGE:0x24770, 0x5f38 bytes
    //
    _p85(sdk::unknown_ptr) device_validate_scsi_miniport_ioctl;
    
    // [EventDeviceFailure]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x164d0, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad48, 0x5f38 bytes
    // ataport.sys .rdata:0x1ad08, 0x5f38 bytes
    //
    _p86(sdk::unknown_ptr) event_device_failure;
    
    // [EventIORequestRetry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x163c8, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad08, 0x5f38 bytes
    // ataport.sys .rdata:0x1acc8, 0x5f38 bytes
    //
    _p87(sdk::unknown_ptr) event_io_request_retry;
    
    // [EventLowMemoryReadRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x164e0, 0x5f10 bytes
    // ataport.sys .rdata:0x1ad58, 0x5f38 bytes
    // ataport.sys .rdata:0x1ad18, 0x5f38 bytes
    //
    _p88(sdk::unknown_ptr) event_low_memory_read_request;
    
    // [EventLowMemoryWriteRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16338, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac78, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac38, 0x5f38 bytes
    //
    _p89(sdk::unknown_ptr) event_low_memory_write_request;
    
    // [EventTransferModeChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16308, 0x5f10 bytes
    // ataport.sys .rdata:0x1a278, 0x5f38 bytes
    // ataport.sys .rdata:0x1a248, 0x5f38 bytes
    //
    _p90(sdk::unknown_ptr) event_transfer_mode_change;
    
    // [FdoChildRequestPowerUpCompletionRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7730, 0x5f10 bytes
    // ataport.sys .text:0xec50, 0x5f38 bytes
    // ataport.sys .text:0xe4b0, 0x5f38 bytes
    //
    _p91(sdk::unknown_ptr) fdo_child_request_power_up_completion_routine;
    
    // [FdoDevicePowerCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x76b0, 0x5f10 bytes
    // ataport.sys .text:0xec80, 0x5f38 bytes
    // ataport.sys .text:0xe4e0, 0x5f38 bytes
    //
    _p92(sdk::unknown_ptr) fdo_device_power_completion;
    
    // [FdoIssueSetPowerCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x77d0, 0x5f10 bytes
    // ataport.sys .text:0xed50, 0x5f38 bytes
    // ataport.sys .text:0xe5b0, 0x5f38 bytes
    //
    _p93(sdk::unknown_ptr) fdo_issue_set_power_completion;
    
    // [FdoPnpDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19120, 0x5f10 bytes
    // ataport.sys .data:0x1e140, 0x5f38 bytes
    // ataport.sys .data:0x1e0c0, 0x5f38 bytes
    //
    _p94(sdk::unknown_ptr) fdo_pnp_dispatch_table;
    
    // [FdoPowerDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x192e0, 0x5f10 bytes
    // ataport.sys .data:0x1e300, 0x5f38 bytes
    // ataport.sys .data:0x1e280, 0x5f38 bytes
    //
    _p95(sdk::unknown_ptr) fdo_power_dispatch_table;
    
    // [FdoPowerUpDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x77f4, 0x5f10 bytes
    // ataport.sys .text:0xed84, 0x5f38 bytes
    // ataport.sys .text:0xe5e4, 0x5f38 bytes
    //
    _p96(sdk::unknown_ptr) fdo_power_up_device;
    
    // [FdoProcessDevicePowerChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10d64, 0x5f10 bytes
    // ataport.sys .text:0x15bf0, 0x5f38 bytes
    // ataport.sys .text:0x15520, 0x5f38 bytes
    //
    _p97(sdk::unknown_ptr) fdo_process_device_power_change;
    
    // [FdoProcessSystemPowerChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10cdc, 0x5f10 bytes
    // ataport.sys .text:0x15cc8, 0x5f38 bytes
    // ataport.sys .text:0x155f8, 0x5f38 bytes
    //
    _p98(sdk::unknown_ptr) fdo_process_system_power_change;
    
    // [FdoQueryPowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7760, 0x5f10 bytes
    // ataport.sys .text:0xee00, 0x5f38 bytes
    // ataport.sys .text:0xe660, 0x5f38 bytes
    //
    _p99(sdk::unknown_ptr) fdo_query_power_state;
    
    // [FdoSetDevicePowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x73a4, 0x5f10 bytes
    // ataport.sys .text:0xee74, 0x5f38 bytes
    // ataport.sys .text:0xe6d4, 0x5f38 bytes
    //
    _q00(sdk::unknown_ptr) fdo_set_device_power_state;
    
    // [FdoSetPowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7340, 0x5f10 bytes
    // ataport.sys .text:0xef60, 0x5f38 bytes
    // ataport.sys .text:0xe7c0, 0x5f38 bytes
    //
    _q01(sdk::unknown_ptr) fdo_set_power_state;
    
    // [FdoSetSystemPowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7474, 0x5f10 bytes
    // ataport.sys .text:0xefd8, 0x5f38 bytes
    // ataport.sys .text:0xe838, 0x5f38 bytes
    //
    _q02(sdk::unknown_ptr) fdo_set_system_power_state;
    
    // [FdoSystemPowerCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7620, 0x5f10 bytes
    // ataport.sys .text:0xf110, 0x5f38 bytes
    // ataport.sys .text:0xe970, 0x5f38 bytes
    //
    _q03(sdk::unknown_ptr) fdo_system_power_completion;
    
    // [FdoSystemPowerDownCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7590, 0x5f10 bytes
    // ataport.sys .text:0xf1b0, 0x5f38 bytes
    // ataport.sys .text:0xea10, 0x5f38 bytes
    //
    _q04(sdk::unknown_ptr) fdo_system_power_down_completion;
    
    // [FdoSystemPowerRebootCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11550, 0x5f10 bytes
    // ataport.sys .text:0x15d60, 0x5f38 bytes
    // ataport.sys .text:0x15690, 0x5f38 bytes
    //
    _q05(sdk::unknown_ptr) fdo_system_power_reboot_crb_completion;
    
    // [FdoSystemPowerRebootProcess]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1159c, 0x5f10 bytes
    // ataport.sys .text:0x15dbc, 0x5f38 bytes
    // ataport.sys .text:0x156ec, 0x5f38 bytes
    //
    _q06(sdk::unknown_ptr) fdo_system_power_reboot_process;
    
    // [FdoWmiDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19320, 0x5f10 bytes
    // ataport.sys .data:0x1e340, 0x5f38 bytes
    // ataport.sys .data:0x1e2c0, 0x5f38 bytes
    //
    _q07(sdk::unknown_ptr) fdo_wmi_dispatch_table;
    
    // [FillBufferWithDeviceTelemetryDump]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x266a4, 0x5f10 bytes
    // ataport.sys PAGE:0x2cff8, 0x5f38 bytes
    // ataport.sys PAGE:0x2cff8, 0x5f38 bytes
    //
    _q08(sdk::unknown_ptr) fill_buffer_with_device_telemetry_dump;
    
    // [FindPagingPdoExtension]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x27c4, 0x5f10 bytes
    // ataport.sys .text:0xa9e8, 0x5f38 bytes
    // ataport.sys .text:0xa24c, 0x5f38 bytes
    //
    _q09(sdk::unknown_ptr) find_paging_pdo_extension;
    
    // [FormatAtaSerialNumber]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7c34, 0x5f10 bytes
    // ataport.sys .text:0xff4c, 0x5f38 bytes
    // ataport.sys .text:0xf7a8, 0x5f38 bytes
    //
    _q10(sdk::unknown_ptr) format_ata_serial_number;
    
    // [GenPnpAddDeviceToGlobalList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x63b4, 0x5f10 bytes
    // ataport.sys .text:0xf258, 0x5f38 bytes
    // ataport.sys .text:0xeab8, 0x5f38 bytes
    //
    _q11(sdk::unknown_ptr) gen_pnp_add_device_to_global_list;
    
    // [GenPnpAllocateFdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1faa8, 0x5f10 bytes
    // ataport.sys PAGE:0x26a90, 0x5f38 bytes
    // ataport.sys PAGE:0x26a90, 0x5f38 bytes
    //
    _q12(sdk::unknown_ptr) gen_pnp_allocate_fdo;
    
    // [GenPnpAllocatePdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20218, 0x5f10 bytes
    // ataport.sys PAGE:0x26c00, 0x5f38 bytes
    // ataport.sys PAGE:0x26c00, 0x5f38 bytes
    //
    _q13(sdk::unknown_ptr) gen_pnp_allocate_pdo;
    
    // [GenPnpBuildDeviceRelations]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1fe40, 0x5f10 bytes
    // ataport.sys PAGE:0x26d70, 0x5f38 bytes
    // ataport.sys PAGE:0x26d70, 0x5f38 bytes
    //
    _q14(sdk::unknown_ptr) gen_pnp_build_device_relations;
    
    // [GenPnpFdoQueryPnPDeviceState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ff70, 0x5f10 bytes
    // ataport.sys PAGE:0x26ed0, 0x5f38 bytes
    // ataport.sys PAGE:0x26ed0, 0x5f38 bytes
    //
    _q15(sdk::unknown_ptr) gen_pnp_fdo_query_pn_p_device_state;
    
    // [GenPnpFdoRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20110, 0x5f10 bytes
    // ataport.sys PAGE:0x26f10, 0x5f38 bytes
    // ataport.sys PAGE:0x26f10, 0x5f38 bytes
    //
    _q16(sdk::unknown_ptr) gen_pnp_fdo_remove_device;
    
    // [GenPnpFdoStartDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1fc70, 0x5f10 bytes
    // ataport.sys PAGE:0x27000, 0x5f38 bytes
    // ataport.sys PAGE:0x27000, 0x5f38 bytes
    //
    _q17(sdk::unknown_ptr) gen_pnp_fdo_start_device;
    
    // [GenPnpFdoStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ffa0, 0x5f10 bytes
    // ataport.sys PAGE:0x270d0, 0x5f38 bytes
    // ataport.sys PAGE:0x270d0, 0x5f38 bytes
    //
    _q18(sdk::unknown_ptr) gen_pnp_fdo_stop_device;
    
    // [GenPnpFdoSurpriseRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20020, 0x5f10 bytes
    // ataport.sys PAGE:0x27140, 0x5f38 bytes
    // ataport.sys PAGE:0x27140, 0x5f38 bytes
    //
    _q19(sdk::unknown_ptr) gen_pnp_fdo_surprise_remove_device;
    
    // [GenPnpFdoUsageNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1fd50, 0x5f10 bytes
    // ataport.sys PAGE:0x271f0, 0x5f38 bytes
    // ataport.sys PAGE:0x271f0, 0x5f38 bytes
    //
    _q20(sdk::unknown_ptr) gen_pnp_fdo_usage_notification;
    
    // [GenPnpFreeFdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1fc00, 0x5f10 bytes
    // ataport.sys PAGE:0x272a8, 0x5f38 bytes
    // ataport.sys PAGE:0x272a8, 0x5f38 bytes
    //
    _q21(sdk::unknown_ptr) gen_pnp_free_fdo;
    
    // [GenPnpFreePdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20380, 0x5f10 bytes
    // ataport.sys PAGE:0x27300, 0x5f38 bytes
    // ataport.sys PAGE:0x27300, 0x5f38 bytes
    //
    _q22(sdk::unknown_ptr) gen_pnp_free_pdo;
    
    // [GenPnpGetPdoExtensionWithLockHeld]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6468, 0x5f10 bytes
    // ataport.sys .text:0x3160, 0x5f38 bytes
    // ataport.sys .text:0x38c4, 0x5f38 bytes
    //
    _q23(sdk::unknown_ptr) gen_pnp_get_pdo_extension_with_lock_held;
    
    // [GenPnpPassDownToNextDriver]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20a20, 0x5f10 bytes
    // ataport.sys PAGE:0x27370, 0x5f38 bytes
    // ataport.sys PAGE:0x27370, 0x5f38 bytes
    //
    _q24(sdk::unknown_ptr) gen_pnp_pass_down_to_next_driver;
    
    // [GenPnpPdoQueryCapabilities]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x206a0, 0x5f10 bytes
    // ataport.sys PAGE:0x27390, 0x5f38 bytes
    // ataport.sys PAGE:0x27390, 0x5f38 bytes
    //
    _q25(sdk::unknown_ptr) gen_pnp_pdo_query_capabilities;
    
    // [GenPnpPdoQueryDeviceRelations]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20600, 0x5f10 bytes
    // ataport.sys PAGE:0x248f0, 0x5f38 bytes
    // ataport.sys PAGE:0x248f0, 0x5f38 bytes
    //
    _q26(sdk::unknown_ptr) gen_pnp_pdo_query_device_relations;
    
    // [GenPnpPdoQueryPnPDeviceState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x205d0, 0x5f10 bytes
    // ataport.sys PAGE:0x274d0, 0x5f38 bytes
    // ataport.sys PAGE:0x274d0, 0x5f38 bytes
    //
    _q27(sdk::unknown_ptr) gen_pnp_pdo_query_pn_p_device_state;
    
    // [GenPnpPdoQueryRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20810, 0x5f10 bytes
    // ataport.sys PAGE:0x27510, 0x5f38 bytes
    // ataport.sys PAGE:0x27510, 0x5f38 bytes
    //
    _q28(sdk::unknown_ptr) gen_pnp_pdo_query_remove_device;
    
    // [GenPnpPdoQueryStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x207d0, 0x5f10 bytes
    // ataport.sys PAGE:0x27560, 0x5f38 bytes
    // ataport.sys PAGE:0x27560, 0x5f38 bytes
    //
    _q29(sdk::unknown_ptr) gen_pnp_pdo_query_stop_device;
    
    // [GenPnpPdoRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20980, 0x5f10 bytes
    // ataport.sys PAGE:0x275b0, 0x5f38 bytes
    // ataport.sys PAGE:0x275b0, 0x5f38 bytes
    //
    _q30(sdk::unknown_ptr) gen_pnp_pdo_remove_device;
    
    // [GenPnpPdoStartDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20400, 0x5f10 bytes
    // ataport.sys PAGE:0x27650, 0x5f38 bytes
    // ataport.sys PAGE:0x27650, 0x5f38 bytes
    //
    _q31(sdk::unknown_ptr) gen_pnp_pdo_start_device;
    
    // [GenPnpPdoStopDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20850, 0x5f10 bytes
    // ataport.sys PAGE:0x27700, 0x5f38 bytes
    // ataport.sys PAGE:0x27700, 0x5f38 bytes
    //
    _q32(sdk::unknown_ptr) gen_pnp_pdo_stop_device;
    
    // [GenPnpPdoSurpriseRemoveDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x208d0, 0x5f10 bytes
    // ataport.sys PAGE:0x27770, 0x5f38 bytes
    // ataport.sys PAGE:0x27770, 0x5f38 bytes
    //
    _q33(sdk::unknown_ptr) gen_pnp_pdo_surprise_remove_device;
    
    // [GenPnpPdoUsageNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x204b0, 0x5f10 bytes
    // ataport.sys PAGE:0x277f0, 0x5f38 bytes
    // ataport.sys PAGE:0x277f0, 0x5f38 bytes
    //
    _q34(sdk::unknown_ptr) gen_pnp_pdo_usage_notification;
    
    // [GenPnpRefNextPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6548, 0x5f10 bytes
    // ataport.sys .text:0xf2f8, 0x5f38 bytes
    // ataport.sys .text:0xeb58, 0x5f38 bytes
    //
    _q35(sdk::unknown_ptr) gen_pnp_ref_next_pdo_extension_with_tag;
    
    // [GenPnpRefPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6490, 0x5f10 bytes
    // ataport.sys .text:0xf3f0, 0x5f38 bytes
    // ataport.sys .text:0xec50, 0x5f38 bytes
    //
    _q36(sdk::unknown_ptr) gen_pnp_ref_pdo_extension_with_tag;
    
    // [GenPnpRemoveDeviceFromGlobalList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6414, 0x5f10 bytes
    // ataport.sys .text:0xf4c0, 0x5f38 bytes
    // ataport.sys .text:0xed20, 0x5f38 bytes
    //
    _q37(sdk::unknown_ptr) gen_pnp_remove_device_from_global_list;
    
    // [GenPnpSuccessAndPassDown]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20a30, 0x5f10 bytes
    // ataport.sys PAGE:0x27900, 0x5f38 bytes
    // ataport.sys PAGE:0x27900, 0x5f38 bytes
    //
    _q38(sdk::unknown_ptr) gen_pnp_success_and_pass_down;
    
    // [GenPnpUnRefPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6624, 0x5f10 bytes
    // ataport.sys .text:0xf528, 0x5f38 bytes
    // ataport.sys .text:0xed88, 0x5f38 bytes
    //
    _q39(sdk::unknown_ptr) gen_pnp_un_ref_pdo_extension_with_tag;
    
    // [GenPowerRequestSetPowerIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7850, 0x5f10 bytes
    // ataport.sys .text:0xf554, 0x5f38 bytes
    // ataport.sys .text:0xedb4, 0x5f38 bytes
    //
    _q40(sdk::unknown_ptr) gen_power_request_set_power_irp;
    
    // [GlobalDeviceList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x195a0, 0x5f10 bytes
    // ataport.sys .data:0x1e5c0, 0x5f38 bytes
    // ataport.sys .data:0x1e540, 0x5f38 bytes
    //
    _q41(sdk::unknown_ptr) global_device_list;
    
    // [GPLogPagesIntoPublicSection]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x167c0, 0x5f10 bytes
    // ataport.sys .rdata:0x1b348, 0x5f38 bytes
    // ataport.sys .rdata:0x1b308, 0x5f38 bytes
    //
    _q42(sdk::unknown_ptr) gp_log_pages_into_public_section;
    
    // [GUID_ATAPORT_IDENTIFY_DELAY_RULE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16580, 0x5f10 bytes
    // ataport.sys .rdata:0x1b020, 0x5f38 bytes
    // ataport.sys .rdata:0x1afe0, 0x5f38 bytes
    //
    _q43(sdk::unknown_ptr) guid_ataport_identify_delay_rule;
    
    // [GUID_DEVICEDUMP_STORAGE_DEVICE]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x167f0, 0x5f10 bytes
    // ataport.sys .rdata:0x1b378, 0x5f38 bytes
    // ataport.sys .rdata:0x1b338, 0x5f38 bytes
    //
    _q44(sdk::unknown_ptr) guid_devicedump_storage_device;
    
    // [IdeActiveListCancelRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1800, 0x5f10 bytes
    // ataport.sys .text:0x9c10, 0x5f38 bytes
    // ataport.sys .text:0x9470, 0x5f38 bytes
    //
    _q45(sdk::unknown_ptr) ide_active_list_cancel_routine;
    
    // [IdeAllocAtaCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xba2c, 0x5f10 bytes
    // ataport.sys .text:0x123fc, 0x5f38 bytes
    // ataport.sys .text:0x11c6c, 0x5f38 bytes
    //
    _q46(sdk::unknown_ptr) ide_alloc_ata_crb;
    
    // [IdeAllocateCommonBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xffdc, 0x5f10 bytes
    // ataport.sys .text:0x15548, 0x5f38 bytes
    // ataport.sys .text:0x14ef8, 0x5f38 bytes
    //
    _q47(sdk::unknown_ptr) ide_allocate_common_buffer;
    
    // [IdeAllocateDeviceParameters]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3770, 0x5f10 bytes
    // ataport.sys .text:0xaf64, 0x5f38 bytes
    // ataport.sys .text:0xa7d8, 0x5f38 bytes
    //
    _q48(sdk::unknown_ptr) ide_allocate_device_parameters;
    
    // [IdeAllocateMdl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb918, 0x5f10 bytes
    // ataport.sys .text:0x12480, 0x5f38 bytes
    // ataport.sys .text:0x11cf0, 0x5f38 bytes
    //
    _q49(sdk::unknown_ptr) ide_allocate_mdl;
    
    // [IdeAllocateTargetInfo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1eb54, 0x5f10 bytes
    // ataport.sys PAGE:0x25134, 0x5f38 bytes
    // ataport.sys PAGE:0x25124, 0x5f38 bytes
    //
    _q50(sdk::unknown_ptr) ide_allocate_target_info;
    
    // [IdeAlwaysSuccessCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9d30, 0x5f10 bytes
    // ataport.sys .text:0x2ef0, 0x5f38 bytes
    // ataport.sys .text:0x3650, 0x5f38 bytes
    //
    _q51(sdk::unknown_ptr) ide_always_success_crb_completion;
    
    // [IdeAtaPassThroughValidateInput]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23bb8, 0x5f10 bytes
    // ataport.sys PAGE:0x2a768, 0x5f38 bytes
    // ataport.sys PAGE:0x2a790, 0x5f38 bytes
    //
    _q52(sdk::unknown_ptr) ide_ata_pass_through_validate_input;
    
    // [IdeAtapiCdromDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13058, 0x5f10 bytes
    // ataport.sys .text:0x182b8, 0x5f38 bytes
    // ataport.sys .text:0x17c14, 0x5f38 bytes
    //
    _q53(sdk::unknown_ptr) ide_atapi_cdrom_device;
    
    // [IdeBuildPowerChangeCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x113a8, 0x5f10 bytes
    // ataport.sys .text:0x15f28, 0x5f38 bytes
    // ataport.sys .text:0x15860, 0x5f38 bytes
    //
    _q54(sdk::unknown_ptr) ide_build_power_change_crb;
    
    // [IdeChannelQueueInitialize]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1984, 0x5f10 bytes
    // ataport.sys .text:0x9e28, 0x5f38 bytes
    // ataport.sys .text:0x9688, 0x5f38 bytes
    //
    _q55(sdk::unknown_ptr) ide_channel_queue_initialize;
    
    // [IdeChannelQueueInsert]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x19d4, 0x5f10 bytes
    // ataport.sys .text:0x9e8c, 0x5f38 bytes
    // ataport.sys .text:0x96ec, 0x5f38 bytes
    //
    _q56(sdk::unknown_ptr) ide_channel_queue_insert;
    
    // [IdeChannelReset]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11c48, 0x5f10 bytes
    // ataport.sys .text:0x16d84, 0x5f38 bytes
    // ataport.sys .text:0x166c8, 0x5f38 bytes
    //
    _q57(sdk::unknown_ptr) ide_channel_reset;
    
    // [IdeClaimLogicalUnit]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23dec, 0x5f10 bytes
    // ataport.sys PAGE:0x2add4, 0x5f38 bytes
    // ataport.sys PAGE:0x2adfc, 0x5f38 bytes
    //
    _q58(sdk::unknown_ptr) ide_claim_logical_unit;
    
    // [IdeCommonCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9dc0, 0x5f10 bytes
    // ataport.sys .text:0x15d0, 0x5f38 bytes
    // ataport.sys .text:0x15f0, 0x5f38 bytes
    //
    _q59(sdk::unknown_ptr) ide_common_crb_completion;
    
    // [IdeCompareCheckSum]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f044, 0x5f10 bytes
    // ataport.sys PAGE:0x251c0, 0x5f38 bytes
    // ataport.sys PAGE:0x251b0, 0x5f38 bytes
    //
    _q60(sdk::unknown_ptr) ide_compare_check_sum;
    
    // [IdeCompleteCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa014, 0x5f10 bytes
    // ataport.sys .text:0x17fc, 0x5f38 bytes
    // ataport.sys .text:0x181c, 0x5f38 bytes
    //
    _q61(sdk::unknown_ptr) ide_complete_crb;
    
    // [IdeCompleteScsiIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9f5c, 0x5f10 bytes
    // ataport.sys .text:0x2e34, 0x5f38 bytes
    // ataport.sys .text:0x359c, 0x5f38 bytes
    //
    _q62(sdk::unknown_ptr) ide_complete_scsi_irp;
    
    // [IdeCopyDeviceParameters]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3c4c, 0x5f10 bytes
    // ataport.sys .text:0xafe0, 0x5f38 bytes
    // ataport.sys .text:0xa854, 0x5f38 bytes
    //
    _q63(sdk::unknown_ptr) ide_copy_device_parameters;
    
    // [IdeDebugBypassRegistry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x190b4, 0x5f10 bytes
    // ataport.sys .data:0x1e6b4, 0x5f38 bytes
    // ataport.sys .data:0x1e634, 0x5f38 bytes
    //
    _q64(sdk::unknown_ptr) ide_debug_bypass_registry;
    
    // [IdeDeviceResetCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11f90, 0x5f10 bytes
    // ataport.sys .text:0x16e20, 0x5f38 bytes
    // ataport.sys .text:0x16770, 0x5f38 bytes
    //
    _q65(sdk::unknown_ptr) ide_device_reset_completion;
    
    // [IdeDigestIdentifyData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ec40, 0x5f10 bytes
    // ataport.sys PAGE:0x2524c, 0x5f38 bytes
    // ataport.sys PAGE:0x2523c, 0x5f38 bytes
    //
    _q66(sdk::unknown_ptr) ide_digest_identify_data;
    
    // [IdeDiscoverDevice]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1e5cc, 0x5f10 bytes
    // ataport.sys PAGE:0x2538c, 0x5f38 bytes
    // ataport.sys PAGE:0x25398, 0x5f38 bytes
    //
    _q67(sdk::unknown_ptr) ide_discover_device;
    
    // [IdeDiscoverLuns]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3424, 0x5f10 bytes
    // ataport.sys .text:0xb064, 0x5f38 bytes
    // ataport.sys .text:0xa8d8, 0x5f38 bytes
    //
    _q68(sdk::unknown_ptr) ide_discover_luns;
    
    // [IdeDispatchChannelRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc580, 0x5f10 bytes
    // ataport.sys .text:0x5a50, 0x5f38 bytes
    // ataport.sys .text:0x5840, 0x5f38 bytes
    //
    _q69(sdk::unknown_ptr) ide_dispatch_channel_request;
    
    // [IdeDriverEntry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x215c8, 0x5f10 bytes
    // ataport.sys PAGE:0x286f8, 0x5f38 bytes
    // ataport.sys PAGE:0x28708, 0x5f38 bytes
    //
    _q70(sdk::unknown_ptr) ide_driver_entry;
    
    // [IdeDumpData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x193e0, 0x5f10 bytes
    // ataport.sys .data:0x1e400, 0x5f38 bytes
    // ataport.sys .data:0x1e380, 0x5f38 bytes
    //
    _q71(sdk::unknown_ptr) ide_dump_data;
    
    // [IdeEnableAtaTarget]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ed68, 0x5f10 bytes
    // ataport.sys PAGE:0x25848, 0x5f38 bytes
    // ataport.sys PAGE:0x25858, 0x5f38 bytes
    //
    _q72(sdk::unknown_ptr) ide_enable_ata_target;
    
    // [IdeEnableAtapiLun]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3cac, 0x5f10 bytes
    // ataport.sys .text:0xb3c4, 0x5f38 bytes
    // ataport.sys .text:0xac3c, 0x5f38 bytes
    //
    _q73(sdk::unknown_ptr) ide_enable_atapi_lun;
    
    // [IdeEnumerateDevices]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2e38, 0x5f10 bytes
    // ataport.sys .text:0xb450, 0x5f38 bytes
    // ataport.sys .text:0xacc8, 0x5f38 bytes
    //
    _q74(sdk::unknown_ptr) ide_enumerate_devices;
    
    // [IdeEnumerateLuns]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1e540, 0x5f10 bytes
    // ataport.sys PAGE:0x258d0, 0x5f38 bytes
    // ataport.sys PAGE:0x258e0, 0x5f38 bytes
    //
    _q75(sdk::unknown_ptr) ide_enumerate_luns;
    
    // [IdeEtwBuildIOCompleteEventData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12314, 0x5f10 bytes
    // ataport.sys .text:0x1753c, 0x5f38 bytes
    // ataport.sys .text:0x16e9c, 0x5f38 bytes
    //
    _q76(sdk::unknown_ptr) ide_etw_build_io_complete_event_data;
    
    // [IdeEtwEnableCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12300, 0x5f10 bytes
    // ataport.sys .text:0x17670, 0x5f38 bytes
    // ataport.sys .text:0x16fd0, 0x5f38 bytes
    //
    _q77(sdk::unknown_ptr) ide_etw_enable_callback;
    
    // [IdeEtwGetDurationIn100ns]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5b94, 0x5f10 bytes
    // ataport.sys .text:0xc2e8, 0x5f38 bytes
    // ataport.sys .text:0xbb3c, 0x5f38 bytes
    //
    _q78(sdk::unknown_ptr) ide_etw_get_duration_in100ns;
    
    // [IdeEtwIORequestDispatch]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x124ec, 0x5f10 bytes
    // ataport.sys .text:0x17688, 0x5f38 bytes
    // ataport.sys .text:0x16fe8, 0x5f38 bytes
    //
    _q79(sdk::unknown_ptr) ide_etw_io_request_dispatch;
    
    // [IdeEtwIORequestRetry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x126d8, 0x5f10 bytes
    // ataport.sys .text:0x1785c, 0x5f38 bytes
    // ataport.sys .text:0x171bc, 0x5f38 bytes
    //
    _q80(sdk::unknown_ptr) ide_etw_io_request_retry;
    
    // [IdeEtwIOResultEvent]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12758, 0x5f10 bytes
    // ataport.sys .text:0x178d8, 0x5f38 bytes
    // ataport.sys .text:0x17238, 0x5f38 bytes
    //
    _q81(sdk::unknown_ptr) ide_etw_io_result_event;
    
    // [IdeEtwTraceDeviceActivity]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12440, 0x5f10 bytes
    // ataport.sys .text:0x17994, 0x5f38 bytes
    // ataport.sys .text:0x172f4, 0x5f38 bytes
    //
    _q82(sdk::unknown_ptr) ide_etw_trace_device_activity;
    
    // [IdeFailFuaCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9e40, 0x5f10 bytes
    // ataport.sys .text:0x11640, 0x5f38 bytes
    // ataport.sys .text:0x10eb0, 0x5f38 bytes
    //
    _q83(sdk::unknown_ptr) ide_fail_fua_completion;
    
    // [IdeFillPrivateDeviceTelemetryBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x268d0, 0x5f10 bytes
    // ataport.sys PAGE:0x2d1a4, 0x5f38 bytes
    // ataport.sys PAGE:0x2d1ac, 0x5f38 bytes
    //
    _q84(sdk::unknown_ptr) ide_fill_private_device_telemetry_buffer;
    
    // [IdeFillPublicDeviceTelemetryBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26aac, 0x5f10 bytes
    // ataport.sys PAGE:0x2d374, 0x5f38 bytes
    // ataport.sys PAGE:0x2d384, 0x5f38 bytes
    //
    _q85(sdk::unknown_ptr) ide_fill_public_device_telemetry_buffer;
    
    // [IdeFlushDeviceQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa908, 0x5f10 bytes
    // ataport.sys .text:0x11aa0, 0x5f38 bytes
    // ataport.sys .text:0x11314, 0x5f38 bytes
    //
    _q86(sdk::unknown_ptr) ide_flush_device_queue;
    
    // [IdeFlushPendingIrpQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe8f8, 0x5f10 bytes
    // ataport.sys .text:0x13a00, 0x5f38 bytes
    // ataport.sys .text:0x133a0, 0x5f38 bytes
    //
    _q87(sdk::unknown_ptr) ide_flush_pending_irp_queue;
    
    // [IdeFreeEnumCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1bc8, 0x5f10 bytes
    // ataport.sys .text:0xa1bc, 0x5f38 bytes
    // ataport.sys .text:0x9a1c, 0x5f38 bytes
    //
    _q88(sdk::unknown_ptr) ide_free_enum_crb;
    
    // [IdeFreeMdl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb9f4, 0x5f10 bytes
    // ataport.sys .text:0x12578, 0x5f38 bytes
    // ataport.sys .text:0x11dec, 0x5f38 bytes
    //
    _q89(sdk::unknown_ptr) ide_free_mdl;
    
    // [IdeFreeTargetInfo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ebdc, 0x5f10 bytes
    // ataport.sys PAGE:0x259d4, 0x5f38 bytes
    // ataport.sys PAGE:0x259e4, 0x5f38 bytes
    //
    _q90(sdk::unknown_ptr) ide_free_target_info;
    
    // [IdeFreezeDeviceQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb588, 0x5f10 bytes
    // ataport.sys .text:0x11bc8, 0x5f38 bytes
    // ataport.sys .text:0x11440, 0x5f38 bytes
    //
    _q91(sdk::unknown_ptr) ide_freeze_device_queue;
    
    // [IdeGetDetectionTimeout]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1f0c4, 0x5f10 bytes
    // ataport.sys PAGE:0x25a48, 0x5f38 bytes
    // ataport.sys PAGE:0x25a58, 0x5f38 bytes
    //
    _q92(sdk::unknown_ptr) ide_get_detection_timeout;
    
    // [IdeGetInquiryData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe660, 0x5f10 bytes
    // ataport.sys .text:0x136a0, 0x5f38 bytes
    // ataport.sys .text:0x13040, 0x5f38 bytes
    //
    _q93(sdk::unknown_ptr) ide_get_inquiry_data;
    
    // [IdeGetInterruptState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd6f0, 0x5f10 bytes
    // ataport.sys .text:0x53c0, 0x5f38 bytes
    // ataport.sys .text:0x53a0, 0x5f38 bytes
    //
    _q94(sdk::unknown_ptr) ide_get_interrupt_state;
    
    // [IdeGetMappedBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa0d0, 0x5f10 bytes
    // ataport.sys .text:0x32c4, 0x5f38 bytes
    // ataport.sys .text:0x3a2c, 0x5f38 bytes
    //
    _q95(sdk::unknown_ptr) ide_get_mapped_buffer;
    
    // [IdeHwInitialize]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3210, 0x5f10 bytes
    // ataport.sys .text:0xb7c0, 0x5f38 bytes
    // ataport.sys .text:0xb040, 0x5f38 bytes
    //
    _q96(sdk::unknown_ptr) ide_hw_initialize;
    
    // [IdeInitAtaPassThroughIrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2399c, 0x5f10 bytes
    // ataport.sys PAGE:0x2a9bc, 0x5f38 bytes
    // ataport.sys PAGE:0x2a9e4, 0x5f38 bytes
    //
    _q97(sdk::unknown_ptr) ide_init_ata_pass_through_irb;
    
    // [IdeInitCrbWithTaskFileAndDataPayload]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbaa8, 0x5f10 bytes
    // ataport.sys .text:0x1434, 0x5f38 bytes
    // ataport.sys .text:0x1454, 0x5f38 bytes
    //
    _q98(sdk::unknown_ptr) ide_init_crb_with_task_file_and_data_payload;
    
    // [IdeInitNvcIrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x22258, 0x5f10 bytes
    // ataport.sys PAGE:0x2a0dc, 0x5f38 bytes
    // ataport.sys PAGE:0x2a104, 0x5f38 bytes
    //
    _q99(sdk::unknown_ptr) ide_init_nvc_irb;
    
    // [IdeInitializeAtaCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbd24, 0x5f10 bytes
    // ataport.sys .text:0x125c0, 0x5f38 bytes
    // ataport.sys .text:0x11e38, 0x5f38 bytes
    //
    _r00(sdk::unknown_ptr) ide_initialize_ata_crb;
    
    // [IdeInitializeAtapiCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbecc, 0x5f10 bytes
    // ataport.sys .text:0x12768, 0x5f38 bytes
    // ataport.sys .text:0x11fe0, 0x5f38 bytes
    //
    _r01(sdk::unknown_ptr) ide_initialize_atapi_crb;
    
    // [IdeInitializePendingIrpQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe838, 0x5f10 bytes
    // ataport.sys .text:0x13aa4, 0x5f38 bytes
    // ataport.sys .text:0x13444, 0x5f38 bytes
    //
    _r02(sdk::unknown_ptr) ide_initialize_pending_irp_queue;
    
    // [IdeIoctlIdentifyData]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2634c, 0x5f10 bytes
    // ataport.sys PAGE:0x24008, 0x5f38 bytes
    // ataport.sys PAGE:0x24008, 0x5f38 bytes
    //
    _r03(sdk::unknown_ptr) ide_ioctl_identify_data;
    
    // [IdeIoctlSmartVersion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26274, 0x5f10 bytes
    // ataport.sys PAGE:0x2433c, 0x5f38 bytes
    // ataport.sys PAGE:0x247ec, 0x5f38 bytes
    //
    _r04(sdk::unknown_ptr) ide_ioctl_smart_version;
    
    // [IdeIrbToSrbStatus]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa044, 0x5f10 bytes
    // ataport.sys .text:0x30f0, 0x5f38 bytes
    // ataport.sys .text:0x3854, 0x5f38 bytes
    //
    _r05(sdk::unknown_ptr) ide_irb_to_srb_status;
    
    // [IdeIsControlledWinPEEnvironment]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1188c, 0x5f10 bytes
    // ataport.sys .text:0x1697c, 0x5f38 bytes
    // ataport.sys .text:0x162bc, 0x5f38 bytes
    //
    _r06(sdk::unknown_ptr) ide_is_controlled_win_pe_environment;
    
    // [IdeIsFuaDisabled]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x258f0, 0x5f10 bytes
    // ataport.sys PAGE:0x2c5e0, 0x5f38 bytes
    // ataport.sys PAGE:0x2c610, 0x5f38 bytes
    //
    _r07(sdk::unknown_ptr) ide_is_fua_disabled;
    
    // [IdeIsProbablyInVirtualMachine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x37e0, 0x5f10 bytes
    // ataport.sys .text:0xb940, 0x5f38 bytes
    // ataport.sys .text:0xb1c0, 0x5f38 bytes
    //
    _r08(sdk::unknown_ptr) ide_is_probably_in_virtual_machine;
    
    // [IdeIssueCdbSync]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbff8, 0x5f10 bytes
    // ataport.sys .text:0x12818, 0x5f38 bytes
    // ataport.sys .text:0x12090, 0x5f38 bytes
    //
    _r09(sdk::unknown_ptr) ide_issue_cdb_sync;
    
    // [IdeIssueInquiry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc0b4, 0x5f10 bytes
    // ataport.sys .text:0x128d4, 0x5f38 bytes
    // ataport.sys .text:0x12154, 0x5f38 bytes
    //
    _r10(sdk::unknown_ptr) ide_issue_inquiry;
    
    // [IdeLogSyncEvent]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1f70, 0x5f10 bytes
    // ataport.sys .text:0xa2f4, 0x5f38 bytes
    // ataport.sys .text:0x9b54, 0x5f38 bytes
    //
    _r11(sdk::unknown_ptr) ide_log_sync_event;
    
    // [IdeLs120Device]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x20a40, 0x5f10 bytes
    // ataport.sys PAGE:0x27b24, 0x5f38 bytes
    // ataport.sys PAGE:0x27b24, 0x5f38 bytes
    //
    _r12(sdk::unknown_ptr) ide_ls120_device;
    
    // [IdeLunQueueCancelRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x17b0, 0x5f10 bytes
    // ataport.sys .text:0x9d40, 0x5f38 bytes
    // ataport.sys .text:0x95a0, 0x5f38 bytes
    //
    _r13(sdk::unknown_ptr) ide_lun_queue_cancel_routine;
    
    // [IdeLunQueueCreate]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x23678, 0x5f10 bytes
    // ataport.sys PAGE:0x2a3d4, 0x5f38 bytes
    // ataport.sys PAGE:0x2a3fc, 0x5f38 bytes
    //
    _r14(sdk::unknown_ptr) ide_lun_queue_create;
    
    // [IdeLunQueueRegisterQuiescenceCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf034, 0x5f10 bytes
    // ataport.sys .text:0x13f58, 0x5f38 bytes
    // ataport.sys .text:0x138f8, 0x5f38 bytes
    //
    _r15(sdk::unknown_ptr) ide_lun_queue_register_quiescence_callback;
    
    // [IdeLunQueueWaitForQuiescence]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf0e4, 0x5f10 bytes
    // ataport.sys .text:0x143b0, 0x5f38 bytes
    // ataport.sys .text:0x13d50, 0x5f38 bytes
    //
    _r16(sdk::unknown_ptr) ide_lun_queue_wait_for_quiescence;
    
    // [IdeMapError]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x48d4, 0x5f10 bytes
    // ataport.sys .text:0x3f30, 0x5f38 bytes
    // ataport.sys .text:0x4680, 0x5f38 bytes
    //
    _r17(sdk::unknown_ptr) ide_map_error;
    
    // [IdeMiniPortTimerDpc]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd750, 0x5f10 bytes
    // ataport.sys .text:0x12d50, 0x5f38 bytes
    // ataport.sys .text:0x125d0, 0x5f38 bytes
    //
    _r18(sdk::unknown_ptr) ide_mini_port_timer_dpc;
    
    // [IdeNoDataCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9d70, 0x5f10 bytes
    // ataport.sys .text:0x116d0, 0x5f38 bytes
    // ataport.sys .text:0x10f40, 0x5f38 bytes
    //
    _r19(sdk::unknown_ptr) ide_no_data_crb_completion;
    
    // [IdePAGESCANLockCount]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19098, 0x5f10 bytes
    // ataport.sys .data:0x1e698, 0x5f38 bytes
    // ataport.sys .data:0x1e618, 0x5f38 bytes
    //
    _r20(sdk::unknown_ptr) ide_pagescan_lock_count;
    
    // [IdePortAllocateAccessToken]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf240, 0x5f10 bytes
    // ataport.sys .text:0x14a00, 0x5f38 bytes
    // ataport.sys .text:0x143a0, 0x5f38 bytes
    //
    _r21(sdk::unknown_ptr) ide_port_allocate_access_token;
    
    // [IdePortCompletionDpc]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xca40, 0x5f10 bytes
    // ataport.sys .text:0x33c0, 0x5f38 bytes
    // ataport.sys .text:0x3b30, 0x5f38 bytes
    //
    _r22(sdk::unknown_ptr) ide_port_completion_dpc;
    
    // [IdePortDispatch]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x80f0, 0x5f10 bytes
    // ataport.sys .text:0x1950, 0x5f38 bytes
    // ataport.sys .text:0x1dd0, 0x5f38 bytes
    //
    _r23(sdk::unknown_ptr) ide_port_dispatch;
    
    // [IdePortDispatchDeviceControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8110, 0x5f10 bytes
    // ataport.sys .text:0x47e0, 0x5f38 bytes
    // ataport.sys .text:0x1860, 0x5f38 bytes
    //
    _r24(sdk::unknown_ptr) ide_port_dispatch_device_control;
    
    // [IdePortDispatchPnp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21640, 0x5f10 bytes
    // ataport.sys PAGE:0x249a0, 0x5f38 bytes
    // ataport.sys PAGE:0x249a0, 0x5f38 bytes
    //
    _r25(sdk::unknown_ptr) ide_port_dispatch_pnp;
    
    // [IdePortDispatchPower]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8130, 0x5f10 bytes
    // ataport.sys .text:0x10220, 0x5f38 bytes
    // ataport.sys .text:0xfa80, 0x5f38 bytes
    //
    _r26(sdk::unknown_ptr) ide_port_dispatch_power;
    
    // [IdePortDispatchSystemControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21750, 0x5f10 bytes
    // ataport.sys PAGE:0x28780, 0x5f38 bytes
    // ataport.sys PAGE:0x28790, 0x5f38 bytes
    //
    _r27(sdk::unknown_ptr) ide_port_dispatch_system_control;
    
    // [IdePortFdoDispatch]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc398, 0x5f10 bytes
    // ataport.sys .text:0x12de4, 0x5f38 bytes
    // ataport.sys .text:0x12664, 0x5f38 bytes
    //
    _r28(sdk::unknown_ptr) ide_port_fdo_dispatch;
    
    // [IdePortInSetup]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb768, 0x5f10 bytes
    // ataport.sys .text:0x12948, 0x5f38 bytes
    // ataport.sys .text:0x121c8, 0x5f38 bytes
    //
    _r29(sdk::unknown_ptr) ide_port_in_setup;
    
    // [IdePortInterrupt]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd7e0, 0x5f10 bytes
    // ataport.sys .text:0x54d0, 0x5f38 bytes
    // ataport.sys .text:0x5410, 0x5f38 bytes
    //
    _r30(sdk::unknown_ptr) ide_port_interrupt;
    
    // [IdePortPdoDispatch]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc450, 0x5f10 bytes
    // ataport.sys .text:0x5828, 0x5f38 bytes
    // ataport.sys .text:0x12734, 0x5f38 bytes
    //
    _r31(sdk::unknown_ptr) ide_port_pdo_dispatch;
    
    // [IdePortPopulateDispatchTables]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x217e4, 0x5f10 bytes
    // ataport.sys PAGE:0x287bc, 0x5f38 bytes
    // ataport.sys PAGE:0x287cc, 0x5f38 bytes
    //
    _r32(sdk::unknown_ptr) ide_port_populate_dispatch_tables;
    
    // [IdePortScanChannel]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1e20c, 0x5f10 bytes
    // ataport.sys PAGE:0x25ad4, 0x5f38 bytes
    // ataport.sys PAGE:0x25ae4, 0x5f38 bytes
    //
    _r33(sdk::unknown_ptr) ide_port_scan_channel;
    
    // [IdePortSimpleCheckSum]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb744, 0x5f10 bytes
    // ataport.sys .text:0x12b34, 0x5f38 bytes
    // ataport.sys .text:0x123b4, 0x5f38 bytes
    //
    _r34(sdk::unknown_ptr) ide_port_simple_check_sum;
    
    // [IdePortTickHandler]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd4b0, 0x5f10 bytes
    // ataport.sys .text:0x49a0, 0x5f38 bytes
    // ataport.sys .text:0x1b40, 0x5f38 bytes
    //
    _r35(sdk::unknown_ptr) ide_port_tick_handler;
    
    // [IdePortTranslateSrbToCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8160, 0x5f10 bytes
    // ataport.sys .text:0x1b20, 0x5f38 bytes
    // ataport.sys .text:0x1f30, 0x5f38 bytes
    //
    _r36(sdk::unknown_ptr) ide_port_translate_srb_to_crb;
    
    // [IdePortUnload]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21780, 0x5f10 bytes
    // ataport.sys PAGE:0x289f0, 0x5f38 bytes
    // ataport.sys PAGE:0x28a00, 0x5f38 bytes
    //
    _r37(sdk::unknown_ptr) ide_port_unload;
    
    // [IdePortWmiGuidList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x190c0, 0x5f10 bytes
    // ataport.sys .data:0x1e0f0, 0x5f38 bytes
    // ataport.sys .data:0x1e070, 0x5f38 bytes
    //
    _r38(sdk::unknown_ptr) ide_port_wmi_guid_list;
    
    // [IdePortWmiInit]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12af8, 0x5f10 bytes
    // ataport.sys .text:0x17ed4, 0x5f38 bytes
    // ataport.sys .text:0x17834, 0x5f38 bytes
    //
    _r39(sdk::unknown_ptr) ide_port_wmi_init;
    
    // [IdePortWmiRegistrationControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x271d4, 0x5f10 bytes
    // ataport.sys PAGE:0x2dcbc, 0x5f38 bytes
    // ataport.sys PAGE:0x2dccc, 0x5f38 bytes
    //
    _r40(sdk::unknown_ptr) ide_port_wmi_registration_control;
    
    // [IdePortWmiSystemControl]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27250, 0x5f10 bytes
    // ataport.sys PAGE:0x2dd50, 0x5f38 bytes
    // ataport.sys PAGE:0x2dd60, 0x5f38 bytes
    //
    _r41(sdk::unknown_ptr) ide_port_wmi_system_control;
    
    // [IdeProcessCompletedRequests]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xce04, 0x5f10 bytes
    // ataport.sys .text:0x36b0, 0x5f38 bytes
    // ataport.sys .text:0x3e20, 0x5f38 bytes
    //
    _r42(sdk::unknown_ptr) ide_process_completed_requests;
    
    // [IdeProcessMiniportDpcRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd9ac, 0x5f10 bytes
    // ataport.sys .text:0x12fdc, 0x5f38 bytes
    // ataport.sys .text:0x12984, 0x5f38 bytes
    //
    _r43(sdk::unknown_ptr) ide_process_miniport_dpc_request;
    
    // [IdeProcessPortNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x107f0, 0x5f10 bytes
    // ataport.sys .text:0x5000, 0x5f38 bytes
    // ataport.sys .text:0x4f40, 0x5f38 bytes
    //
    _r44(sdk::unknown_ptr) ide_process_port_notification;
    
    // [IdeProcessStateChangeNotification]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xd810, 0x5f10 bytes
    // ataport.sys .text:0x13110, 0x5f38 bytes
    // ataport.sys .text:0x12ab0, 0x5f38 bytes
    //
    _r45(sdk::unknown_ptr) ide_process_state_change_notification;
    
    // [IdeQueryLastLun]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc124, 0x5f10 bytes
    // ataport.sys .text:0x12b60, 0x5f38 bytes
    // ataport.sys .text:0x123e0, 0x5f38 bytes
    //
    _r46(sdk::unknown_ptr) ide_query_last_lun;
    
    // [IdeQuiesceChannel]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xaed0, 0x5f10 bytes
    // ataport.sys .text:0x11c70, 0x5f38 bytes
    // ataport.sys .text:0x114e0, 0x5f38 bytes
    //
    _r47(sdk::unknown_ptr) ide_quiesce_channel;
    
    // [IdeQuiesceDeviceWorkRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x8530, 0x5f10 bytes
    // ataport.sys .text:0x117a0, 0x5f38 bytes
    // ataport.sys .text:0x11010, 0x5f38 bytes
    //
    _r48(sdk::unknown_ptr) ide_quiesce_device_work_routine;
    
    // [IdeQuiescePdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xada4, 0x5f10 bytes
    // ataport.sys .text:0x11d38, 0x5f38 bytes
    // ataport.sys .text:0x115a8, 0x5f38 bytes
    //
    _r49(sdk::unknown_ptr) ide_quiesce_pdo;
    
    // [IdeQuiescenceCallBack]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x111d0, 0x5f10 bytes
    // ataport.sys .text:0x16010, 0x5f38 bytes
    // ataport.sys .text:0x15950, 0x5f38 bytes
    //
    _r50(sdk::unknown_ptr) ide_quiescence_call_back;
    
    // [IdeReadGeneralPurposeLog]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26c60, 0x5f10 bytes
    // ataport.sys PAGE:0x2d528, 0x5f38 bytes
    // ataport.sys PAGE:0x2d538, 0x5f38 bytes
    //
    _r51(sdk::unknown_ptr) ide_read_general_purpose_log;
    
    // [IdeRegDeleteDeviceSubKey]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25998, 0x5f10 bytes
    // ataport.sys PAGE:0x2c724, 0x5f38 bytes
    // ataport.sys PAGE:0x2c754, 0x5f38 bytes
    //
    _r52(sdk::unknown_ptr) ide_reg_delete_device_sub_key;
    
    // [IdeRegMiniportAllocateBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25ccc, 0x5f10 bytes
    // ataport.sys PAGE:0x2c7a0, 0x5f38 bytes
    // ataport.sys PAGE:0x2c7d0, 0x5f38 bytes
    //
    _r53(sdk::unknown_ptr) ide_reg_miniport_allocate_buffer;
    
    // [IdeRegMiniportBuildKeyName]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25d5c, 0x5f10 bytes
    // ataport.sys PAGE:0x2c84c, 0x5f38 bytes
    // ataport.sys PAGE:0x2c87c, 0x5f38 bytes
    //
    _r54(sdk::unknown_ptr) ide_reg_miniport_build_key_name;
    
    // [IdeRegMiniportFreeBuffer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25d28, 0x5f10 bytes
    // ataport.sys PAGE:0x2c910, 0x5f38 bytes
    // ataport.sys PAGE:0x2c940, 0x5f38 bytes
    //
    _r55(sdk::unknown_ptr) ide_reg_miniport_free_buffer;
    
    // [IdeRegMiniportRegistryRead]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25e34, 0x5f10 bytes
    // ataport.sys PAGE:0x2c950, 0x5f38 bytes
    // ataport.sys PAGE:0x2c980, 0x5f38 bytes
    //
    _r56(sdk::unknown_ptr) ide_reg_miniport_registry_read;
    
    // [IdeRegMiniportRegistryWrite]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26024, 0x5f10 bytes
    // ataport.sys PAGE:0x2cb4c, 0x5f38 bytes
    // ataport.sys PAGE:0x2cb68, 0x5f38 bytes
    //
    _r57(sdk::unknown_ptr) ide_reg_miniport_registry_write;
    
    // [IdeRegReadControlSubKey]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25c54, 0x5f10 bytes
    // ataport.sys PAGE:0x2cd08, 0x5f38 bytes
    // ataport.sys PAGE:0x2cd08, 0x5f38 bytes
    //
    _r58(sdk::unknown_ptr) ide_reg_read_control_sub_key;
    
    // [IdeRegReadDwordDeviceKey]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25a84, 0x5f10 bytes
    // ataport.sys PAGE:0x2cda0, 0x5f38 bytes
    // ataport.sys PAGE:0x2cda0, 0x5f38 bytes
    //
    _r59(sdk::unknown_ptr) ide_reg_read_dword_device_key;
    
    // [IdeRegWriteDwordDeviceKey]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x25b68, 0x5f10 bytes
    // ataport.sys PAGE:0x2cea4, 0x5f38 bytes
    // ataport.sys PAGE:0x2cea4, 0x5f38 bytes
    //
    _r60(sdk::unknown_ptr) ide_reg_write_dword_device_key;
    
    // [IdeReleaseDeviceQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb634, 0x5f10 bytes
    // ataport.sys .text:0x11dd4, 0x5f38 bytes
    // ataport.sys .text:0x11644, 0x5f38 bytes
    //
    _r61(sdk::unknown_ptr) ide_release_device_queue;
    
    // [IdeReleasePowerChangeCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x114a8, 0x5f10 bytes
    // ataport.sys .text:0x16138, 0x5f38 bytes
    // ataport.sys .text:0x15a78, 0x5f38 bytes
    //
    _r62(sdk::unknown_ptr) ide_release_power_change_crb;
    
    // [IdeRemovePendingIrpQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe854, 0x5f10 bytes
    // ataport.sys .text:0x13c10, 0x5f38 bytes
    // ataport.sys .text:0x135b0, 0x5f38 bytes
    //
    _r63(sdk::unknown_ptr) ide_remove_pending_irp_queue;
    
    // [IdeResetSynchronized]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11ce0, 0x5f10 bytes
    // ataport.sys .text:0x17000, 0x5f38 bytes
    // ataport.sys .text:0x16950, 0x5f38 bytes
    //
    _r64(sdk::unknown_ptr) ide_reset_synchronized;
    
    // [IdeRestartPdo]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xae38, 0x5f10 bytes
    // ataport.sys .text:0x11fcc, 0x5f38 bytes
    // ataport.sys .text:0x1183c, 0x5f38 bytes
    //
    _r65(sdk::unknown_ptr) ide_restart_pdo;
    
    // [IdeResumeChannelQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xac9c, 0x5f10 bytes
    // ataport.sys .text:0x12060, 0x5f38 bytes
    // ataport.sys .text:0x118d0, 0x5f38 bytes
    //
    _r66(sdk::unknown_ptr) ide_resume_channel_queue;
    
    // [IdeResumeDeviceQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xab10, 0x5f10 bytes
    // ataport.sys .text:0x120f4, 0x5f38 bytes
    // ataport.sys .text:0x11964, 0x5f38 bytes
    //
    _r67(sdk::unknown_ptr) ide_resume_device_queue;
    
    // [IdeReuseAtaCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbca4, 0x5f10 bytes
    // ataport.sys .text:0x12cc0, 0x5f38 bytes
    // ataport.sys .text:0x12540, 0x5f38 bytes
    //
    _r68(sdk::unknown_ptr) ide_reuse_ata_crb;
    
    // [IdeSaveDefaultInterface]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x21a64, 0x5f10 bytes
    // ataport.sys PAGE:0x28a70, 0x5f38 bytes
    // ataport.sys PAGE:0x28a80, 0x5f38 bytes
    //
    _r69(sdk::unknown_ptr) ide_save_default_interface;
    
    // [IdeSaveDeviceParameters]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3be4, 0x5f10 bytes
    // ataport.sys .text:0xba3c, 0x5f38 bytes
    // ataport.sys .text:0xb2d0, 0x5f38 bytes
    //
    _r70(sdk::unknown_ptr) ide_save_device_parameters;
    
    // [IdeSaveRegistryPath]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x219fc, 0x5f10 bytes
    // ataport.sys PAGE:0x28ac8, 0x5f38 bytes
    // ataport.sys PAGE:0x28ad8, 0x5f38 bytes
    //
    _r71(sdk::unknown_ptr) ide_save_registry_path;
    
    // [IdeSecondaryCallbackRecord]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19520, 0x5f10 bytes
    // ataport.sys .data:0x1e540, 0x5f38 bytes
    // ataport.sys .data:0x1e4c0, 0x5f38 bytes
    //
    _r72(sdk::unknown_ptr) ide_secondary_callback_record;
    
    // [IdeSecondaryDumpCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2740, 0x5f10 bytes
    // ataport.sys .text:0xab80, 0x5f38 bytes
    // ataport.sys .text:0xa3e0, 0x5f38 bytes
    //
    _r73(sdk::unknown_ptr) ide_secondary_dump_callback;
    
    // [IdeSecondaryDumpDeregister]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x26a0, 0x5f10 bytes
    // ataport.sys .text:0xabec, 0x5f38 bytes
    // ataport.sys .text:0xa44c, 0x5f38 bytes
    //
    _r74(sdk::unknown_ptr) ide_secondary_dump_deregister;
    
    // [IdeSecondaryDumpRegister]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2630, 0x5f10 bytes
    // ataport.sys .text:0xac9c, 0x5f38 bytes
    // ataport.sys .text:0xa4fc, 0x5f38 bytes
    //
    _r75(sdk::unknown_ptr) ide_secondary_dump_register;
    
    // [IdeSelectDeviceDumpCollectionMode]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1e024, 0x5f10 bytes
    // ataport.sys PAGE:0x24ff4, 0x5f38 bytes
    // ataport.sys PAGE:0x24fe4, 0x5f38 bytes
    //
    _r76(sdk::unknown_ptr) ide_select_device_dump_collection_mode;
    
    // [IdeSelectDeviceGeometry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x3838, 0x5f10 bytes
    // ataport.sys .text:0xbac4, 0x5f38 bytes
    // ataport.sys .text:0xb358, 0x5f38 bytes
    //
    _r77(sdk::unknown_ptr) ide_select_device_geometry;
    
    // [IdeSelectDeviceTransferMode]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2746c, 0x5f10 bytes
    // ataport.sys PAGE:0x2de14, 0x5f38 bytes
    // ataport.sys PAGE:0x2de20, 0x5f38 bytes
    //
    _r78(sdk::unknown_ptr) ide_select_device_transfer_mode;
    
    // [IdeServicePendingIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xea98, 0x5f10 bytes
    // ataport.sys .text:0x13cb4, 0x5f38 bytes
    // ataport.sys .text:0x13654, 0x5f38 bytes
    //
    _r79(sdk::unknown_ptr) ide_service_pending_irp;
    
    // [IdeSetChannelTransferMode]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12bac, 0x5f10 bytes
    // ataport.sys .text:0x183fc, 0x5f38 bytes
    // ataport.sys .text:0x17d58, 0x5f38 bytes
    //
    _r80(sdk::unknown_ptr) ide_set_channel_transfer_mode;
    
    // [IdeSetupSmartCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26450, 0x5f10 bytes
    // ataport.sys PAGE:0x240f0, 0x5f38 bytes
    // ataport.sys PAGE:0x240f0, 0x5f38 bytes
    //
    _r81(sdk::unknown_ptr) ide_setup_smart_crb;
    
    // [IdeSmartCommandCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12150, 0x5f10 bytes
    // ataport.sys .text:0x1140, 0x5f38 bytes
    // ataport.sys .text:0x1150, 0x5f38 bytes
    //
    _r82(sdk::unknown_ptr) ide_smart_command_completion;
    
    // [IdeSrbControlCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x26228, 0x5f10 bytes
    // ataport.sys PAGE:0x242e0, 0x5f38 bytes
    // ataport.sys PAGE:0x2450c, 0x5f38 bytes
    //
    _r83(sdk::unknown_ptr) ide_srb_control_crb;
    
    // [IdeStandardSecondaryCallbackRecord]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19560, 0x5f10 bytes
    // ataport.sys .data:0x1e580, 0x5f38 bytes
    // ataport.sys .data:0x1e500, 0x5f38 bytes
    //
    _r84(sdk::unknown_ptr) ide_standard_secondary_callback_record;
    
    // [IdeStandardSecondaryDumpCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2840, 0x5f10 bytes
    // ataport.sys .text:0xad20, 0x5f38 bytes
    // ataport.sys .text:0xa580, 0x5f38 bytes
    //
    _r85(sdk::unknown_ptr) ide_standard_secondary_dump_callback;
    
    // [IdeStartChannelRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xb350, 0x5f10 bytes
    // ataport.sys .text:0x59f0, 0x5f38 bytes
    // ataport.sys .text:0x57e0, 0x5f38 bytes
    //
    _r86(sdk::unknown_ptr) ide_start_channel_request;
    
    // [IdeStartCrbSynchronized]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc9c0, 0x5f10 bytes
    // ataport.sys .text:0x52c0, 0x5f38 bytes
    // ataport.sys .text:0x5200, 0x5f38 bytes
    //
    _r87(sdk::unknown_ptr) ide_start_crb_synchronized;
    
    // [IdeStartDeviceRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xaf8c, 0x5f10 bytes
    // ataport.sys .text:0x2630, 0x5f38 bytes
    // ataport.sys .text:0x2a50, 0x5f38 bytes
    //
    _r88(sdk::unknown_ptr) ide_start_device_request;
    
    // [IdeStartIoCallBack]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xc710, 0x5f10 bytes
    // ataport.sys .text:0x4460, 0x5f38 bytes
    // ataport.sys .text:0x4bc0, 0x5f38 bytes
    //
    _r89(sdk::unknown_ptr) ide_start_io_call_back;
    
    // [IdeTargetReset]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11d50, 0x5f10 bytes
    // ataport.sys .text:0x17080, 0x5f38 bytes
    // ataport.sys .text:0x169d0, 0x5f38 bytes
    //
    _r90(sdk::unknown_ptr) ide_target_reset;
    
    // [IdeTraceStop]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x122d0, 0x5f10 bytes
    // ataport.sys .text:0x17af4, 0x5f38 bytes
    // ataport.sys .text:0x17454, 0x5f38 bytes
    //
    _r91(sdk::unknown_ptr) ide_trace_stop;
    
    // [IdeUpdateDeviceParameters]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ea90, 0x5f10 bytes
    // ataport.sys PAGE:0x25dbc, 0x5f38 bytes
    // ataport.sys PAGE:0x25dc8, 0x5f38 bytes
    //
    _r92(sdk::unknown_ptr) ide_update_device_parameters;
    
    // [IdeUpdateMissingTarget]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1ef50, 0x5f10 bytes
    // ataport.sys PAGE:0x25e90, 0x5f38 bytes
    // ataport.sys PAGE:0x25e90, 0x5f38 bytes
    //
    _r93(sdk::unknown_ptr) ide_update_missing_target;
    
    // [IdeUpdateRegistry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x1eeb8, 0x5f10 bytes
    // ataport.sys PAGE:0x25f8c, 0x5f38 bytes
    // ataport.sys PAGE:0x25f8c, 0x5f38 bytes
    //
    _r94(sdk::unknown_ptr) ide_update_registry;
    
    // [IdeUpdateSrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x9ec4, 0x5f10 bytes
    // ataport.sys .text:0x1774, 0x5f38 bytes
    // ataport.sys .text:0x1794, 0x5f38 bytes
    //
    _r95(sdk::unknown_ptr) ide_update_srb;
    
    // [IdeWaitForResources]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xe984, 0x5f10 bytes
    // ataport.sys .text:0x13e34, 0x5f38 bytes
    // ataport.sys .text:0x137d4, 0x5f38 bytes
    //
    _r96(sdk::unknown_ptr) ide_wait_for_resources;
    
    // [IdeWaitOnRefCount]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x261c4, 0x5f10 bytes
    // ataport.sys PAGE:0x2cf80, 0x5f38 bytes
    // ataport.sys PAGE:0x2cf80, 0x5f38 bytes
    //
    _r97(sdk::unknown_ptr) ide_wait_on_ref_count;
    
    // [IdepAllocateCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1ad0, 0x5f10 bytes
    // ataport.sys .text:0x2cd0, 0x5f38 bytes
    // ataport.sys .text:0x30f4, 0x5f38 bytes
    //
    _r98(sdk::unknown_ptr) idep_allocate_crb;
    
    // [IdepFreeCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1b5c, 0x5f10 bytes
    // ataport.sys .text:0x2dcc, 0x5f38 bytes
    // ataport.sys .text:0x3534, 0x5f38 bytes
    //
    _r99(sdk::unknown_ptr) idep_free_crb;
    
    // [IdepLogErrorEntry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5900, 0x5f10 bytes
    // ataport.sys .text:0xc364, 0x5f38 bytes
    // ataport.sys .text:0xbbb8, 0x5f38 bytes
    //
    _s00(sdk::unknown_ptr) idep_log_error_entry;
    
    // [IdepMarkDeviceDeadmeat]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x59e4, 0x5f10 bytes
    // ataport.sys .text:0xc458, 0x5f38 bytes
    // ataport.sys .text:0xbcac, 0x5f38 bytes
    //
    _s01(sdk::unknown_ptr) idep_mark_device_deadmeat;
    
    // [IdepNoMemoryFailure]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4cd0, 0x5f10 bytes
    // ataport.sys .text:0xc478, 0x5f38 bytes
    // ataport.sys .text:0xbccc, 0x5f38 bytes
    //
    _s02(sdk::unknown_ptr) idep_no_memory_failure;
    
    // [IdepRetryCrb]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5814, 0x5f10 bytes
    // ataport.sys .text:0xc490, 0x5f38 bytes
    // ataport.sys .text:0xbce4, 0x5f38 bytes
    //
    _s03(sdk::unknown_ptr) idep_retry_crb;
    
    // [InsertPdoExtension]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x6638, 0x5f10 bytes
    // ataport.sys .text:0xf64c, 0x5f38 bytes
    // ataport.sys .text:0xeeac, 0x5f38 bytes
    //
    _s04(sdk::unknown_ptr) insert_pdo_extension;
    
    // [IssueCrbSync]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbf90, 0x5f10 bytes
    // ataport.sys .text:0x3334, 0x5f38 bytes
    // ataport.sys .text:0x3a9c, 0x5f38 bytes
    //
    _s05(sdk::unknown_ptr) issue_crb_sync;
    
    // [IssueCrbSyncCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xbf80, 0x5f10 bytes
    // ataport.sys .text:0x5800, 0x5f38 bytes
    // ataport.sys .text:0x5740, 0x5f38 bytes
    //
    _s06(sdk::unknown_ptr) issue_crb_sync_completion;
    
    // [Microsoft_Windows_ATAPortEnableBits]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x195b8, 0x5f10 bytes
    // ataport.sys .data:0x1e5d8, 0x5f38 bytes
    // ataport.sys .data:0x1e558, 0x5f38 bytes
    //
    _s07(sdk::unknown_ptr) microsoft_windows_ata_port_enable_bits;
    
    // [Microsoft_Windows_ATAPortKeywords]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16410, 0x5f10 bytes
    // ataport.sys .rdata:0x1aa80, 0x5f38 bytes
    // ataport.sys .rdata:0x1aa40, 0x5f38 bytes
    //
    _s08(sdk::unknown_ptr) microsoft_windows_ata_port_keywords;
    
    // [Microsoft_Windows_ATAPortLevels]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x162a0, 0x5f10 bytes
    // ataport.sys .rdata:0x1aa60, 0x5f38 bytes
    // ataport.sys .rdata:0x1aa20, 0x5f38 bytes
    //
    _s09(sdk::unknown_ptr) microsoft_windows_ata_port_levels;
    
    // [PathIdToKey]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11c38, 0x5f10 bytes
    // ataport.sys .text:0x3190, 0x5f38 bytes
    // ataport.sys .text:0x38f4, 0x5f38 bytes
    //
    _s10(sdk::unknown_ptr) path_id_to_key;
    
    // [PdoCompleteDevicePowerIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7b44, 0x5f10 bytes
    // ataport.sys .text:0xf708, 0x5f38 bytes
    // ataport.sys .text:0xef68, 0x5f38 bytes
    //
    _s11(sdk::unknown_ptr) pdo_complete_device_power_irp;
    
    // [PdoCompleteDevicePowerIrpCallback]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7ba0, 0x5f10 bytes
    // ataport.sys .text:0xf780, 0x5f38 bytes
    // ataport.sys .text:0xefe0, 0x5f38 bytes
    //
    _s12(sdk::unknown_ptr) pdo_complete_device_power_irp_callback;
    
    // [PdoFinalInitCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xff00, 0x5f10 bytes
    // ataport.sys .text:0x5980, 0x5f38 bytes
    // ataport.sys .text:0x5770, 0x5f38 bytes
    //
    _s13(sdk::unknown_ptr) pdo_final_init_completion;
    
    // [PdoGtfInitCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11360, 0x5f10 bytes
    // ataport.sys .text:0x161f0, 0x5f38 bytes
    // ataport.sys .text:0x15b30, 0x5f38 bytes
    //
    _s14(sdk::unknown_ptr) pdo_gtf_init_completion;
    
    // [PdoPnpDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19200, 0x5f10 bytes
    // ataport.sys .data:0x1e220, 0x5f38 bytes
    // ataport.sys .data:0x1e1a0, 0x5f38 bytes
    //
    _s15(sdk::unknown_ptr) pdo_pnp_dispatch_table;
    
    // [PdoPowerDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19300, 0x5f10 bytes
    // ataport.sys .data:0x1e320, 0x5f38 bytes
    // ataport.sys .data:0x1e2a0, 0x5f38 bytes
    //
    _s16(sdk::unknown_ptr) pdo_power_dispatch_table;
    
    // [PdoPowerDownCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x112e0, 0x5f10 bytes
    // ataport.sys .text:0x16240, 0x5f38 bytes
    // ataport.sys .text:0x15b80, 0x5f38 bytes
    //
    _s17(sdk::unknown_ptr) pdo_power_down_crb_completion;
    
    // [PdoPowerUpCrbCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11310, 0x5f10 bytes
    // ataport.sys .text:0x16270, 0x5f38 bytes
    // ataport.sys .text:0x15bb0, 0x5f38 bytes
    //
    _s18(sdk::unknown_ptr) pdo_power_up_crb_completion;
    
    // [PdoProcessDevicePowerChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10f5c, 0x5f10 bytes
    // ataport.sys .text:0x162c0, 0x5f38 bytes
    // ataport.sys .text:0x15c00, 0x5f38 bytes
    //
    _s19(sdk::unknown_ptr) pdo_process_device_power_change;
    
    // [PdoProcessSystemPowerChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10e40, 0x5f10 bytes
    // ataport.sys .text:0x16530, 0x5f38 bytes
    // ataport.sys .text:0x15e70, 0x5f38 bytes
    //
    _s20(sdk::unknown_ptr) pdo_process_system_power_change;
    
    // [PdoQueryPowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x78e0, 0x5f10 bytes
    // ataport.sys .text:0xf8f0, 0x5f38 bytes
    // ataport.sys .text:0xf150, 0x5f38 bytes
    //
    _s21(sdk::unknown_ptr) pdo_query_power_state;
    
    // [PdoSetDevicePowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7a3c, 0x5f10 bytes
    // ataport.sys .text:0xf92c, 0x5f38 bytes
    // ataport.sys .text:0xf18c, 0x5f38 bytes
    //
    _s22(sdk::unknown_ptr) pdo_set_device_power_state;
    
    // [PdoSetPowerState]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7910, 0x5f10 bytes
    // ataport.sys .text:0xf9c0, 0x5f38 bytes
    // ataport.sys .text:0xf220, 0x5f38 bytes
    //
    _s23(sdk::unknown_ptr) pdo_set_power_state;
    
    // [PdoSystemPowerCompletion]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x7af0, 0x5f10 bytes
    // ataport.sys .text:0xfac0, 0x5f38 bytes
    // ataport.sys .text:0xf320, 0x5f38 bytes
    //
    _s24(sdk::unknown_ptr) pdo_system_power_completion;
    
    // [PdoWmiDispatchTable]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19380, 0x5f10 bytes
    // ataport.sys .data:0x1e3a0, 0x5f38 bytes
    // ataport.sys .data:0x1e320, 0x5f38 bytes
    //
    _s25(sdk::unknown_ptr) pdo_wmi_dispatch_table;
    
    // [PortAvioAdmissionControllerInit]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13e88, 0x5f10 bytes
    // ataport.sys .text:0x18dfc, 0x5f38 bytes
    // ataport.sys .text:0x1876c, 0x5f38 bytes
    //
    _s26(sdk::unknown_ptr) port_avio_admission_controller_init;
    
    // [PortAvioAllocateBcStream]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13ea0, 0x5f10 bytes
    // ataport.sys .text:0x18e70, 0x5f38 bytes
    // ataport.sys .text:0x187e0, 0x5f38 bytes
    //
    _s27(sdk::unknown_ptr) port_avio_allocate_bc_stream;
    
    // [PortAvioDismissStream]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x14014, 0x5f10 bytes
    // ataport.sys .text:0x18fd8, 0x5f38 bytes
    // ataport.sys .text:0x18954, 0x5f38 bytes
    //
    _s28(sdk::unknown_ptr) port_avio_dismiss_stream;
    
    // [PortAvioGetBcProperties]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x287f8, 0x5f10 bytes
    // ataport.sys PAGE:0x2f554, 0x5f38 bytes
    // ataport.sys PAGE:0x2f598, 0x5f38 bytes
    //
    _s29(sdk::unknown_ptr) port_avio_get_bc_properties;
    
    // [PortAvioSchedulerTransferBatch]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13b14, 0x5f10 bytes
    // ataport.sys .text:0x4000, 0x5f38 bytes
    // ataport.sys .text:0x4750, 0x5f38 bytes
    //
    _s30(sdk::unknown_ptr) port_avio_scheduler_transfer_batch;
    
    // [PortListInitialize]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13288, 0x5f10 bytes
    // ataport.sys .text:0x186a0, 0x5f38 bytes
    // ataport.sys .text:0x17ffc, 0x5f38 bytes
    //
    _s31(sdk::unknown_ptr) port_list_initialize;
    
    // [PortListInsertRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x132c8, 0x5f10 bytes
    // ataport.sys .text:0x4368, 0x5f38 bytes
    // ataport.sys .text:0x4ac4, 0x5f38 bytes
    //
    _s32(sdk::unknown_ptr) port_list_insert_request;
    
    // [PortListRemoveRequest]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13400, 0x5f10 bytes
    // ataport.sys .text:0x4400, 0x5f38 bytes
    // ataport.sys .text:0x4b5c, 0x5f38 bytes
    //
    _s33(sdk::unknown_ptr) port_list_remove_request;
    
    // [PortListSeverPendingList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13458, 0x5f10 bytes
    // ataport.sys .text:0x186fc, 0x5f38 bytes
    // ataport.sys .text:0x18058, 0x5f38 bytes
    //
    _s34(sdk::unknown_ptr) port_list_sever_pending_list;
    
    // [PortWdmAlwaysStatusSuccessIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28260, 0x5f10 bytes
    // ataport.sys PAGE:0x248c0, 0x5f38 bytes
    // ataport.sys PAGE:0x248c0, 0x5f38 bytes
    //
    _s35(sdk::unknown_ptr) port_wdm_always_status_success_irp;
    
    // [PortWdmAppendCmResourceList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2849c, 0x5f10 bytes
    // ataport.sys PAGE:0x2edc4, 0x5f38 bytes
    // ataport.sys PAGE:0x2ede0, 0x5f38 bytes
    //
    _s36(sdk::unknown_ptr) port_wdm_append_cm_resource_list;
    
    // [PortWdmForwardIrpSynchronous]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x283f4, 0x5f10 bytes
    // ataport.sys PAGE:0x2ef58, 0x5f38 bytes
    // ataport.sys PAGE:0x2ef70, 0x5f38 bytes
    //
    _s37(sdk::unknown_ptr) port_wdm_forward_irp_synchronous;
    
    // [PortWdmNoSupportIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x28220, 0x5f10 bytes
    // ataport.sys PAGE:0x2f190, 0x5f38 bytes
    // ataport.sys PAGE:0x2f1b0, 0x5f38 bytes
    //
    _s38(sdk::unknown_ptr) port_wdm_no_support_irp;
    
    // [PortWdmPassDownToNextDriver]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2827c, 0x5f10 bytes
    // ataport.sys PAGE:0x2f1e0, 0x5f38 bytes
    // ataport.sys PAGE:0x2f200, 0x5f38 bytes
    //
    _s39(sdk::unknown_ptr) port_wdm_pass_down_to_next_driver;
    
    // [PortWdmSetEventCompletionRoutine]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11e0, 0x5f10 bytes
    // ataport.sys .text:0x9750, 0x5f38 bytes
    // ataport.sys .text:0x8fb0, 0x5f38 bytes
    //
    _s40(sdk::unknown_ptr) port_wdm_set_event_completion_routine;
    
    // [PortWdmSizeOfCmResourceList]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x2855c, 0x5f10 bytes
    // ataport.sys PAGE:0x2f258, 0x5f38 bytes
    // ataport.sys PAGE:0x2f274, 0x5f38 bytes
    //
    _s41(sdk::unknown_ptr) port_wdm_size_of_cm_resource_list;
    
    // [PortWdmSyncSendIrp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x282d8, 0x5f10 bytes
    // ataport.sys PAGE:0x2f2b0, 0x5f38 bytes
    // ataport.sys PAGE:0x2f2cc, 0x5f38 bytes
    //
    _s42(sdk::unknown_ptr) port_wdm_sync_send_irp;
    
    // [PrepareCrbForPioRetry]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5648, 0x5f10 bytes
    // ataport.sys .text:0xc5fc, 0x5f38 bytes
    // ataport.sys .text:0xbe50, 0x5f38 bytes
    //
    _s43(sdk::unknown_ptr) prepare_crb_for_pio_retry;
    
    // [ProcessDmaTimeout]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x514c, 0x5f10 bytes
    // ataport.sys .text:0xc804, 0x5f38 bytes
    // ataport.sys .text:0xc058, 0x5f38 bytes
    //
    _s44(sdk::unknown_ptr) process_dma_timeout;
    
    // [ProcessParityError]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x534c, 0x5f10 bytes
    // ataport.sys .text:0xcab4, 0x5f38 bytes
    // ataport.sys .text:0xc308, 0x5f38 bytes
    //
    _s45(sdk::unknown_ptr) process_parity_error;
    
    // [ProcessPioTimeout]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4f10, 0x5f10 bytes
    // ataport.sys .text:0xcd2c, 0x5f38 bytes
    // ataport.sys .text:0xc580, 0x5f38 bytes
    //
    _s46(sdk::unknown_ptr) process_pio_timeout;
    
    // [ProcessSelectionTimeout]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4ce4, 0x5f10 bytes
    // ataport.sys .text:0xcf78, 0x5f38 bytes
    // ataport.sys .text:0xc7cc, 0x5f38 bytes
    //
    _s47(sdk::unknown_ptr) process_selection_timeout;
    
    // [ProxyAllocateRequestSense]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x103a0, 0x5f10 bytes
    // ataport.sys .text:0x51d4, 0x5f38 bytes
    // ataport.sys .text:0x5114, 0x5f38 bytes
    //
    _s48(sdk::unknown_ptr) proxy_allocate_request_sense;
    
    // [ProxyAsyncEventHandler]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x102b0, 0x5f10 bytes
    // ataport.sys .text:0x15730, 0x5f38 bytes
    // ataport.sys .text:0x150e0, 0x5f38 bytes
    //
    _s49(sdk::unknown_ptr) proxy_async_event_handler;
    
    // [ProxyCompleteAllActiveRequests]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10470, 0x5f10 bytes
    // ataport.sys .text:0x157a8, 0x5f38 bytes
    // ataport.sys .text:0x15158, 0x5f38 bytes
    //
    _s50(sdk::unknown_ptr) proxy_complete_all_active_requests;
    
    // [ProxyDeviceStateChange]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x101e0, 0x5f10 bytes
    // ataport.sys .text:0x15884, 0x5f38 bytes
    // ataport.sys .text:0x15234, 0x5f38 bytes
    //
    _s51(sdk::unknown_ptr) proxy_device_state_change;
    
    // [ProxyRegistryOp]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1056c, 0x5f10 bytes
    // ataport.sys .text:0x15a68, 0x5f38 bytes
    // ataport.sys .text:0x153c8, 0x5f38 bytes
    //
    _s52(sdk::unknown_ptr) proxy_registry_op;
    
    // [RefEnumPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1197c, 0x5f10 bytes
    // ataport.sys .text:0x16a30, 0x5f38 bytes
    // ataport.sys .text:0x1636c, 0x5f38 bytes
    //
    _s53(sdk::unknown_ptr) ref_enum_pdo_extension_with_tag;
    
    // [RefNextPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11bd0, 0x5f10 bytes
    // ataport.sys .text:0x16b94, 0x5f38 bytes
    // ataport.sys .text:0x164d8, 0x5f38 bytes
    //
    _s54(sdk::unknown_ptr) ref_next_pdo_extension_with_tag;
    
    // [RefPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11900, 0x5f10 bytes
    // ataport.sys .text:0x16c00, 0x5f38 bytes
    // ataport.sys .text:0x16544, 0x5f38 bytes
    //
    _s55(sdk::unknown_ptr) ref_pdo_extension_with_tag;
    
    // [RefPdoWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11b28, 0x5f10 bytes
    // ataport.sys .text:0x492c, 0x5f38 bytes
    // ataport.sys .text:0x19ac, 0x5f38 bytes
    //
    _s56(sdk::unknown_ptr) ref_pdo_with_tag;
    
    // [RemovePdoExtension]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x66e0, 0x5f10 bytes
    // ataport.sys .text:0xfae4, 0x5f38 bytes
    // ataport.sys .text:0xf344, 0x5f38 bytes
    //
    _s57(sdk::unknown_ptr) remove_pdo_extension;
    
    // [SelectMwDmaModes]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27a24, 0x5f10 bytes
    // ataport.sys PAGE:0x2e12c, 0x5f38 bytes
    // ataport.sys PAGE:0x2e138, 0x5f38 bytes
    //
    _s58(sdk::unknown_ptr) select_mw_dma_modes;
    
    // [SelectPioModes]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27c50, 0x5f10 bytes
    // ataport.sys PAGE:0x2e358, 0x5f38 bytes
    // ataport.sys PAGE:0x2e370, 0x5f38 bytes
    //
    _s59(sdk::unknown_ptr) select_pio_modes;
    
    // [SelectUdmaModes]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys PAGE:0x27774, 0x5f10 bytes
    // ataport.sys PAGE:0x2e4dc, 0x5f38 bytes
    // ataport.sys PAGE:0x2e4f4, 0x5f38 bytes
    //
    _s60(sdk::unknown_ptr) select_udma_modes;
    
    // [STORAGE_ATAPORT_PROVIDER]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x16328, 0x5f10 bytes
    // ataport.sys .rdata:0x1ac68, 0x5f38 bytes
    // ataport.sys .rdata:0x1ac28, 0x5f38 bytes
    //
    _s61(sdk::unknown_ptr) storage_ataport_provider;
    
    // [STORAGE_ATAPORT_PROVIDER_Context]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .data:0x19000, 0x5f10 bytes
    // ataport.sys .data:0x1e000, 0x5f38 bytes
    // ataport.sys .data:0x1e000, 0x5f38 bytes
    //
    _s62(sdk::unknown_ptr) storage_ataport_provider_context;
    
    // [SuperFloppyCompatibleIdString]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x167d0, 0x5f10 bytes
    // ataport.sys .rdata:0x1b358, 0x5f38 bytes
    // ataport.sys .rdata:0x1b318, 0x5f38 bytes
    //
    _s63(sdk::unknown_ptr) super_floppy_compatible_id_string;
    
    // [TransferRequestsToQueue]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x13e1c, 0x5f10 bytes
    // ataport.sys .text:0x4308, 0x5f38 bytes
    // ataport.sys .text:0x4a64, 0x5f38 bytes
    //
    _s64(sdk::unknown_ptr) transfer_requests_to_queue;
    
    // [UdmaModeTransformer]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x55ec, 0x5f10 bytes
    // ataport.sys .text:0xd1b4, 0x5f38 bytes
    // ataport.sys .text:0xca08, 0x5f38 bytes
    //
    _s65(sdk::unknown_ptr) udma_mode_transformer;
    
    // [UnRefEnumPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11aec, 0x5f10 bytes
    // ataport.sys .text:0x16c5c, 0x5f38 bytes
    // ataport.sys .text:0x165a0, 0x5f38 bytes
    //
    _s66(sdk::unknown_ptr) un_ref_enum_pdo_extension_with_tag;
    
    // [UnRefPdoExtensionWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11960, 0x5f10 bytes
    // ataport.sys .text:0x16ca4, 0x5f38 bytes
    // ataport.sys .text:0x165e8, 0x5f38 bytes
    //
    _s67(sdk::unknown_ptr) un_ref_pdo_extension_with_tag;
    
    // [UnRefPdoWithTag]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x11bb0, 0x5f10 bytes
    // ataport.sys .text:0x16cd4, 0x5f38 bytes
    // ataport.sys .text:0x16618, 0x5f38 bytes
    //
    _s68(sdk::unknown_ptr) un_ref_pdo_with_tag;
    
    // [WPP_SF_DDdd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10c08, 0x5f10 bytes
    // ataport.sys .text:0x166e0, 0x5f38 bytes
    // ataport.sys .text:0x16020, 0x5f38 bytes
    //
    _s69(sdk::unknown_ptr) wpp_sf_d_ddd;
    
    // [WPP_SF_DDi]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2dd8, 0x5f10 bytes
    // ataport.sys .text:0xc280, 0x5f38 bytes
    // ataport.sys .text:0xbad4, 0x5f38 bytes
    //
    _s70(sdk::unknown_ptr) wpp_sf_d_di;
    
    // [WPP_SF_DDqD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10c70, 0x5f10 bytes
    // ataport.sys .text:0x16750, 0x5f38 bytes
    // ataport.sys .text:0x16090, 0x5f38 bytes
    //
    _s71(sdk::unknown_ptr) wpp_sf_d_dq_d;
    
    // [WPP_SF_DDDd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa890, 0x5f10 bytes
    // ataport.sys .text:0x12380, 0x5f38 bytes
    // ataport.sys .text:0x11bf0, 0x5f38 bytes
    //
    _s72(sdk::unknown_ptr) wpp_sf_dd_dd;
    
    // [WPP_SF_DDDdd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2cf0, 0x5f10 bytes
    // ataport.sys .text:0xc18c, 0x5f38 bytes
    // ataport.sys .text:0xb9e0, 0x5f38 bytes
    //
    _s73(sdk::unknown_ptr) wpp_sf_dd_ddd;
    
    // [WPP_SF_DDDi]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2d6c, 0x5f10 bytes
    // ataport.sys .text:0xc20c, 0x5f38 bytes
    // ataport.sys .text:0xba60, 0x5f38 bytes
    //
    _s74(sdk::unknown_ptr) wpp_sf_dd_di;
    
    // [WPP_SF_DDDDdd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x10b80, 0x5f10 bytes
    // ataport.sys .text:0x16650, 0x5f38 bytes
    // ataport.sys .text:0x15f90, 0x5f38 bytes
    //
    _s75(sdk::unknown_ptr) wpp_sf_ddd_ddd;
    
    // [WPP_SF_DDDDid]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2b44, 0x5f10 bytes
    // ataport.sys .text:0xbfcc, 0x5f38 bytes
    // ataport.sys .text:0xb820, 0x5f38 bytes
    //
    _s76(sdk::unknown_ptr) wpp_sf_ddd_did;
    
    // [WPP_SF_DDDDiqDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2bd0, 0x5f10 bytes
    // ataport.sys .text:0xc05c, 0x5f38 bytes
    // ataport.sys .text:0xb8b0, 0x5f38 bytes
    //
    _s77(sdk::unknown_ptr) wpp_sf_ddd_diq_dd;
    
    // [WPP_SF_DDDDq]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x2c78, 0x5f10 bytes
    // ataport.sys .text:0xc10c, 0x5f38 bytes
    // ataport.sys .text:0xb960, 0x5f38 bytes
    //
    _s78(sdk::unknown_ptr) wpp_sf_ddd_dq;
    
    // [WPP_SF_DDDDqD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xf69c, 0x5f10 bytes
    // ataport.sys .text:0x153e4, 0x5f38 bytes
    // ataport.sys .text:0x14d88, 0x5f38 bytes
    //
    _s79(sdk::unknown_ptr) wpp_sf_ddd_dq_d;
    
    // [WPP_SF_DDDDqDDs]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4318, 0x5f10 bytes
    // ataport.sys .text:0xd6b0, 0x5f38 bytes
    // ataport.sys .text:0xcf04, 0x5f38 bytes
    //
    _s80(sdk::unknown_ptr) wpp_sf_ddd_dq_d_ds;
    
    // [WPP_SF_DDDDqDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x41c0, 0x5f10 bytes
    // ataport.sys .text:0xd548, 0x5f38 bytes
    // ataport.sys .text:0xcd9c, 0x5f38 bytes
    //
    _s81(sdk::unknown_ptr) wpp_sf_ddd_dq_dd;
    
    // [WPP_SF_DDDDqDDDDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4258, 0x5f10 bytes
    // ataport.sys .text:0xd5e8, 0x5f38 bytes
    // ataport.sys .text:0xce3c, 0x5f38 bytes
    //
    _s82(sdk::unknown_ptr) wpp_sf_ddd_dq_ddddd;
    
    // [WPP_SF_DDDDDq]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x18f8, 0x5f10 bytes
    // ataport.sys .text:0xa0a0, 0x5f38 bytes
    // ataport.sys .text:0x9900, 0x5f38 bytes
    //
    _s83(sdk::unknown_ptr) wpp_sf_dddd_dq;
    
    // [WPP_SF_DDDDDqD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xebd4, 0x5f10 bytes
    // ataport.sys .text:0x144dc, 0x5f38 bytes
    // ataport.sys .text:0x13e7c, 0x5f38 bytes
    //
    _s84(sdk::unknown_ptr) wpp_sf_dddd_dq_d;
    
    // [WPP_SF_DDDDDqDDd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x5c5c, 0x5f10 bytes
    // ataport.sys .text:0xddcc, 0x5f38 bytes
    // ataport.sys .text:0xd620, 0x5f38 bytes
    //
    _s85(sdk::unknown_ptr) wpp_sf_dddd_dq_d_dd;
    
    // [WPP_SF_DDDDDqDDdDds]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xa744, 0x5f10 bytes
    // ataport.sys .text:0x12234, 0x5f38 bytes
    // ataport.sys .text:0x11aa4, 0x5f38 bytes
    //
    _s86(sdk::unknown_ptr) wpp_sf_dddd_dq_d_dd_dds;
    
    // [WPP_SF_DDDDDqDDDDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x4070, 0x5f10 bytes
    // ataport.sys .text:0xd3e8, 0x5f38 bytes
    // ataport.sys .text:0xcc3c, 0x5f38 bytes
    //
    _s87(sdk::unknown_ptr) wpp_sf_dddd_dq_ddddd;
    
    // [WPP_SF_DDDDDDD]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x12b18, 0x5f10 bytes
    // ataport.sys .text:0x18604, 0x5f38 bytes
    // ataport.sys .text:0x17f60, 0x5f38 bytes
    //
    _s88(sdk::unknown_ptr) wpp_sf_ddddddd;
    
    // [WPP_SF_qDDd]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .text:0xdb94, 0x5f10 bytes
    // ataport.sys .text:0x138c8, 0x5f38 bytes
    // ataport.sys .text:0x13268, 0x5f38 bytes
    //
    _s89(sdk::unknown_ptr) wpp_sf_q_d_dd;
};
#include "magic/api.end.hpp"
