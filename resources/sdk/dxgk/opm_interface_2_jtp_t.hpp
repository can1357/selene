#pragma once
#include <sdkgen/support_library.hpp>
#include "mdt/certificate_type_t.hpp"
#include "mdt/opm_video_output_semantics_t.hpp"

namespace dxgk::mdt { struct opm_actual_output_format_t;                }
namespace dxgk::mdt { struct opm_configure_parameters_t;                }
namespace dxgk::mdt { struct opm_copp_compatible_get_info_parameters_t; }
namespace dxgk::mdt { struct opm_encrypted_parameters_t;                }
namespace dxgk::mdt { struct opm_get_info_parameters_t;                 }
namespace dxgk::mdt { struct opm_random_number_t;                       }
namespace dxgk::mdt { struct opm_requested_information_t;               }

#include "magic/opm_interface_2_jtp_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_OPM_INTERFACE_2_JTP]
    // => WDK 10 (NV)
    //
    struct opm_interface_2_jtp_t                                                                                              
    {                                                                                                                         
        using dxgkddi_opm_get_certificate_size_t =                         sdk::function<int32_t(void*, enum dxgk::mdt::certificate_type_t, uint32_t*)>*;                                                       
        using dxgkddi_opm_get_certificate_t =                              sdk::function<int32_t(void*, enum dxgk::mdt::certificate_type_t, uint32_t, void*)>*;                                                       
        using dxgkddi_opm_create_protected_output_t =                      sdk::function<int32_t(void*, uint32_t, enum dxgk::mdt::opm_video_output_semantics_t, void**)>*;                                                       
        using dxgkddi_opm_get_random_number_t =                            sdk::function<int32_t(void*, void*, struct dxgk::mdt::opm_random_number_t*)>*;                                                       
        using dxgkddi_opm_set_signing_key_and_sequence_numbers_t =         sdk::function<int32_t(void*, void*, const struct dxgk::mdt::opm_encrypted_parameters_t*)>*;                                                       
        using dxgk_ddi_opm_set_signing_key_and_sequence_numbers_t =        dxgkddi_opm_set_signing_key_and_sequence_numbers_t ;                                                       
        using dxgkddi_opm_get_information_t =                              sdk::function<int32_t(void*, void*, const struct dxgk::mdt::opm_get_info_parameters_t*, struct dxgk::mdt::opm_requested_information_t*)>*;                                                       
        using dxgkddi_opm_get_copp_compatible_information_t =              sdk::function<int32_t(void*, void*, const struct dxgk::mdt::opm_copp_compatible_get_info_parameters_t*, struct dxgk::mdt::opm_requested_information_t*)>*;                                                       
        using dxgkddi_opm_configure_protected_output_t =                   sdk::function<int32_t(void*, void*, const struct dxgk::mdt::opm_configure_parameters_t*, uint32_t, const void*)>*;                                                       
        using dxgkddi_opm_create_protected_output_virtual_mode_jtp_t =     sdk::function<int32_t(void*, uint32_t, enum dxgk::mdt::opm_video_output_semantics_t, struct dxgk::mdt::opm_actual_output_format_t*, void**)>*;                                                       
        using dxgk_ddi_opm_create_protected_output_virtual_mode_t =        dxgkddi_opm_create_protected_output_virtual_mode_jtp_t ;                                                       
        using dxgkddi_opm_create_protected_output_nonlocal_display_jtp_t = sdk::function<int32_t(void*, enum dxgk::mdt::opm_video_output_semantics_t, uint64_t, struct dxgk::mdt::opm_actual_output_format_t*, uint32_t, void**)>*;                                                       
        using dxgk_ddi_opm_create_protected_output_non_local_display_t =   dxgkddi_opm_create_protected_output_nonlocal_display_jtp_t ;                                                       
                                                                                                                              
        // WDK 10                                                                                                             
        //                                                                                                                    
        _m00 uint16_t                                                  size;                                                    //{ +0x0000    } | .Size
        _m01 uint16_t                                                  version;                                                 //{ +0x0002    } | .Version
        _m02 void*                                                     context;                                                 //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*                               interface_reference;                                     //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*                               interface_dereference;                                   //{ +0x0018    } | .InterfaceDereference
        _m05 dxgkddi_opm_get_certificate_size_t                        dxgk_ddi_opm_get_certificate_size;                       //{ +0x0020    } | .DxgkDdiOPMGetCertificateSize
        _m06 dxgkddi_opm_get_certificate_t                             dxgk_ddi_opm_get_certificate;                            //{ +0x0028    } | .DxgkDdiOPMGetCertificate
        _m07 dxgkddi_opm_create_protected_output_t                     dxgk_ddi_opm_create_protected_output;                    //{ +0x0030    } | .DxgkDdiOPMCreateProtectedOutput
        _m08 dxgkddi_opm_get_random_number_t                           dxgk_ddi_opm_get_random_number;                          //{ +0x0038    } | .DxgkDdiOPMGetRandomNumber
        _m09 dxgk_ddi_opm_set_signing_key_and_sequence_numbers_t       dxgk_ddi_opm_set_signing_key_and_sequence_numbers;       //{ +0x0040    } | .DxgkDdiOPMSetSigningKeyAndSequenceNumbers
        _m10 dxgkddi_opm_get_information_t                             dxgk_ddi_opm_get_information;                            //{ +0x0048    } | .DxgkDdiOPMGetInformation
        _m11 dxgkddi_opm_get_copp_compatible_information_t             dxgk_ddi_opm_get_copp_compatible_information;            //{ +0x0050    } | .DxgkDdiOPMGetCOPPCompatibleInformation
        _m12 dxgkddi_opm_configure_protected_output_t                  dxgk_ddi_opm_configure_protected_output;                 //{ +0x0058    } | .DxgkDdiOPMConfigureProtectedOutput
        _m13 sdk::function<int32_t(void*, void*)>*                     dxgk_ddi_opm_destroy_protected_output;                   //{ +0x0060    } | .DxgkDdiOPMDestroyProtectedOutput
        _m14 dxgk_ddi_opm_create_protected_output_virtual_mode_t       dxgk_ddi_opm_create_protected_output_virtual_mode;       //{ +0x0068    } | .DxgkDdiOPMCreateProtectedOutputVirtualMode
        _m15 dxgk_ddi_opm_create_protected_output_non_local_display_t  dxgk_ddi_opm_create_protected_output_non_local_display;  //{ +0x0070    } | .DxgkDdiOPMCreateProtectedOutputNonLocalDisplay
                                                                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_OPM_INTERFACE_2_JTP.$", 0x0, false, 0x763a2dc777d59dcd );                                                       
        SDK_FIXED_SIZE( opm_interface_2_jtp_t, 0x78 );                                                                        
    };                                                                                                                        
};
#include "magic/opm_interface_2_jtp_t.end.hpp"
SDK_VERIFY( struct dxgk::opm_interface_2_jtp_t, 0x78 );
