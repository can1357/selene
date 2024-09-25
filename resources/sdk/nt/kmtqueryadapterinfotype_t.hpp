#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KMTQUERYADAPTERINFOTYPE]
    //  WDK 10
    //
    enum class kmtqueryadapterinfotype_t : int32_t                    
    {                                                                 
        kmtqaitype_umdriverprivate =                          0x0,      // WDK 10
        kmtqaitype_umdrivername =                             0x1,      // WDK 10
        kmtqaitype_umopenglinfo =                             0x2,      // WDK 10
        kmtqaitype_getsegmentsize =                           0x3,      // WDK 10
        kmtqaitype_adapterguid =                              0x4,      // WDK 10
        kmtqaitype_flipqueueinfo =                            0x5,      // WDK 10
        kmtqaitype_adapteraddress =                           0x6,      // WDK 10
        kmtqaitype_setworkingsetinfo =                        0x7,      // WDK 10
        kmtqaitype_adapterregistryinfo =                      0x8,      // WDK 10
        kmtqaitype_currentdisplaymode =                       0x9,      // WDK 10
        kmtqaitype_modelist =                                 0xa,      // WDK 10
        kmtqaitype_checkdriverupdatestatus =                  0xb,      // WDK 10
        kmtqaitype_virtualaddressinfo =                       0xc,      // WDK 10
        kmtqaitype_driverversion =                            0xd,      // WDK 10
        kmtqaitype_adaptertype =                              0xf,      // WDK 10
        kmtqaitype_outputduplcontextscount =                  0x10,     // WDK 10
        kmtqaitype_wddm_1_2_caps =                            0x11,     // WDK 10
        kmtqaitype_umd_driver_version =                       0x12,     // WDK 10
        kmtqaitype_directflip_support =                       0x13,     // WDK 10
        kmtqaitype_multiplaneoverlay_support =                0x14,     // WDK 10
        kmtqaitype_dlist_driver_name =                        0x15,     // WDK 10
        kmtqaitype_wddm_1_3_caps =                            0x16,     // WDK 10
        kmtqaitype_multiplaneoverlay_hud_support =            0x17,     // WDK 10
        kmtqaitype_wddm_2_0_caps =                            0x18,     // WDK 10
        kmtqaitype_nodemetadata =                             0x19,     // WDK 10
        kmtqaitype_cpdrivername =                             0x1a,     // WDK 10
        kmtqaitype_xbox =                                     0x1b,     // WDK 10
        kmtqaitype_independentflip_support =                  0x1c,     // WDK 10
        kmtqaitype_miracastcompaniondrivername =              0x1d,     // WDK 10
        kmtqaitype_physicaladaptercount =                     0x1e,     // WDK 10
        kmtqaitype_physicaladapterdeviceids =                 0x1f,     // WDK 10
        kmtqaitype_drivercaps_ext =                           0x20,     // WDK 10
        kmtqaitype_query_miracast_driver_type =               0x21,     // WDK 10
        kmtqaitype_query_gpummu_caps =                        0x22,     // WDK 10
        kmtqaitype_query_multiplaneoverlay_decode_support =   0x23,     // WDK 10
        kmtqaitype_query_hw_protection_teardown_count =       0x24,     // WDK 10
        kmtqaitype_query_isbaddriverforhwprotectiondisabled = 0x25,     // WDK 10
        kmtqaitype_multiplaneoverlay_secondary_support =      0x26,     // WDK 10
        kmtqaitype_independentflip_secondary_support =        0x27,     // WDK 10
        kmtqaitype_panelfitter_support =                      0x28,     // WDK 10
        kmtqaitype_physicaladapterpnpkey =                    0x29,     // WDK 10
        kmtqaitype_getsegmentgroupsize =                      0x2a,     // WDK 10
        kmtqaitype_mpo3ddi_support =                          0x2b,     // WDK 10
        kmtqaitype_hwdrm_support =                            0x2c,     // WDK 10
        kmtqaitype_mpokernelcaps_support =                    0x2d,     // WDK 10
        kmtqaitype_multiplaneoverlay_stretch_support =        0x2e,     // WDK 10
        kmtqaitype_get_device_vidpn_ownership_info =          0x2f,     // WDK 10
        kmtqaitype_queryregistry =                            0x30,     // WDK 10
        kmtqaitype_kmd_driver_version =                       0x31,     // WDK 10
        kmtqaitype_blocklist_kernel =                         0x32,     // WDK 10
        kmtqaitype_blocklist_runtime =                        0x33,     // WDK 10
        kmtqaitype_adapterguid_render =                       0x34,     // WDK 10
        kmtqaitype_adapteraddress_render =                    0x35,     // WDK 10
        kmtqaitype_adapterregistryinfo_render =               0x36,     // WDK 10
        kmtqaitype_checkdriverupdatestatus_render =           0x37,     // WDK 10
        kmtqaitype_driverversion_render =                     0x38,     // WDK 10
        kmtqaitype_adaptertype_render =                       0x39,     // WDK 10
        kmtqaitype_wddm_1_2_caps_render =                     0x3a,     // WDK 10
        kmtqaitype_wddm_1_3_caps_render =                     0x3b,     // WDK 10
        kmtqaitype_query_adapter_unique_guid =                0x3c,     // WDK 10
        kmtqaitype_nodeperfdata =                             0x3d,     // WDK 10
        kmtqaitype_adapterperfdata =                          0x3e,     // WDK 10
        kmtqaitype_adapterperfdata_caps =                     0x3f,     // WDK 10
        kmtquitype_gpuversion =                               0x40,     // WDK 10
        kmtqaitype_driver_description =                       0x41,     // WDK 10
        kmtqaitype_driver_description_render =                0x42,     // WDK 10
        kmtqaitype_scanout_caps =                             0x43,     // WDK 10
        kmtqaitype_paravirtualization_render =                0x44,     // WDK 10
        kmtqaitype_servicename =                              0x45,     // WDK 10
        kmtqaitype_wddm_2_7_caps =                            0x46,     // WDK 10
        kmtqaitype_display_umdrivername =                     0x47,     // WDK 10
        kmtqaitype_trackedworkload_support =                  0x48,     // WDK 10
    };                                                                
};
