#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diag_black_screen_packet_availability_t.start.hpp"
namespace dxgk
{
    // [struct DXGK_DIAG_BLACK_SCREEN_PACKET_AVAILABILITY]
    // => Windows 11
    //
    struct diag_black_screen_packet_availability_t                           
    {                                                                        
        // Windows 11                                                          
        //                                                                   
        _m000 bool is_before_display_reset_available;                          //{ +0x0000    } | .IsBeforeDisplayResetAvailable
        _m001 bool is_num_adapters_available;                                  //{ +0x0001    } | .IsNumAdaptersAvailable
        _m002 bool is_black_screen_instance_guid_available;                    //{ +0x0002    } | .IsBlackScreenInstanceGUIDAvailable
        _m003 bool is_adapter_luid_available;                                  //{ +0x0003    } | .IsAdapterLuidAvailable
        _m004 bool is_adapter_num_of_sources_available;                        //{ +0x0004    } | .IsAdapterNumOfSourcesAvailable
        _m005 bool is_adapter_num_of_targets_available;                        //{ +0x0005    } | .IsAdapterNumOfTargetsAvailable
        _m006 bool is_adapter_vendor_id_available;                             //{ +0x0006    } | .IsAdapterVendorIdAvailable
        _m007 bool is_adapter_bdd_fallback_driver_available;                   //{ +0x0007    } | .IsAdapterBddFallbackDriverAvailable
        _m008 bool is_adapter_dwm_crash_bdd_fallback_available;                //{ +0x0008    } | .IsAdapterDWMCrashBddFallbackAvailable
        _m009 bool is_adapter_running_tsdd_available;                          //{ +0x0009    } | .IsAdapterRunningTSDDAvailable
        _m010 bool is_adapter_driver_blackbox_info_valid_available;            //{ +0x000a    } | .IsAdapterDriverBlackboxInfoValidAvailable
        _m011 bool is_adapter_driver_whitebox_info_valid_available;            //{ +0x000b    } | .IsAdapterDriverWhiteboxInfoValidAvailable
        _m012 bool is_source_vid_pn_source_id_available;                       //{ +0x000c    } | .IsSourceVidPnSourceIdAvailable
        _m013 bool is_source_vid_pn_target_id_available;                       //{ +0x000d    } | .IsSourceVidPnTargetIdAvailable
        _m014 bool is_source_part_of_desktop_available;                        //{ +0x000e    } | .IsSourcePartOfDesktopAvailable
        _m015 bool is_source_powered_on_available;                             //{ +0x000f    } | .IsSourcePoweredOnAvailable
        _m016 bool is_source_visible_available;                                //{ +0x0010    } | .IsSourceVisibleAvailable
        _m017 bool is_source_primary_content_state_available;                  //{ +0x0011    } | .IsSourcePrimaryContentStateAvailable
        _m018 bool is_source_hw_cursor_available;                              //{ +0x0012    } | .IsSourceHWCursorAvailable
        _m019 bool is_source_high_color_available;                             //{ +0x0013    } | .IsSourceHighColorAvailable
        _m020 bool is_source_hwdrm_available;                                  //{ +0x0014    } | .IsSourceHWDRMAvailable
        _m021 bool is_source_dwm_available;                                    //{ +0x0015    } | .IsSourceDWMAvailable
        _m022 bool is_source_indirect_display_available;                       //{ +0x0016    } | .IsSourceIndirectDisplayAvailable
        _m023 bool is_source_lda_available;                                    //{ +0x0017    } | .IsSourceLDAAvailable
        _m024 bool is_source_mpo_active_available;                             //{ +0x0018    } | .IsSourceMPOActiveAvailable
        _m025 bool is_source_indpendent_flip_available;                        //{ +0x0019    } | .IsSourceIndpendentFlipAvailable
        _m026 bool is_source_direct_flip_available;                            //{ +0x001a    } | .IsSourceDirectFlipAvailable
        _m027 bool is_source_dwm_ownership_failed_as_already_owner_available;  //{ +0x001b    } | .IsSourceDWMOwnershipFailedAsAlreadyOwnerAvailable
        _m028 bool is_source_emulated_vid_pn_source_owner_available;           //{ +0x001c    } | .IsSourceEmulatedVidPnSourceOwnerAvailable
        _m029 bool is_owner_app_name_available;                                //{ +0x001d    } | .IsOwnerAppNameAvailable
        _m030 bool is_target_vid_pn_target_id_available;                       //{ +0x001e    } | .IsTargetVidPnTargetIdAvailable
        _m031 bool is_target_monitor_connected_available;                      //{ +0x001f    } | .IsTargetMonitorConnectedAvailable
        _m032 bool is_target_present_in_client_vid_pn_available;               //{ +0x0020    } | .IsTargetPresentInClientVidPnAvailable
        _m033 bool is_target_monitor_simulated_available;                      //{ +0x0021    } | .IsTargetMonitorSimulatedAvailable
        _m034 bool is_target_monitor_internal_available;                       //{ +0x0022    } | .IsTargetMonitorInternalAvailable
        _m035 bool is_target_sampled_gamma_available;                          //{ +0x0023    } | .IsTargetSampledGammaAvailable
                                                                             
        SDK_MAGIC_PROPERTIES( "DXGK_DIAG_BLACK_SCREEN_PACKET_AVAILABILITY.$", 0x0, false, 0x35b46b5ce400409f );                                                          
        SDK_FIXED_SIZE( diag_black_screen_packet_availability_t, 0x24 );                                                          
    };                                                                       
};
#include "magic/diag_black_screen_packet_availability_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_black_screen_packet_availability_t, 0x24 );
