#pragma once
#include <sdkgen/support_library.hpp>
#include "error_source_type_t.hpp"
#include "error_source_state_t.hpp"
#include "ipf_cmc_descriptor_t.hpp"
#include "ipf_cpe_descriptor_t.hpp"
#include "ipf_mca_descriptor_t.hpp"
#include "xpf_cmc_descriptor_t.hpp"
#include "xpf_mce_descriptor_t.hpp"
#include "xpf_nmi_descriptor_t.hpp"
#include "aer_bridge_descriptor_t.hpp"
#include "aer_endpoint_descriptor_t.hpp"
#include "aer_rootport_descriptor_t.hpp"
#include "device_driver_descriptor_t.hpp"
#include "generic_error_descriptor_t.hpp"
#include "generic_error_descriptor_v2_t.hpp"

#include "magic/error_source_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_SOURCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_source_descriptor_t                                                                            
    {                                                                                                           
        union u0_info_t                                                                                         
        {                                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                  
            _m10 struct whea::xpf_mce_descriptor_t          xpf_mce_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .XpfMceDescriptor
            _m11 struct whea::xpf_cmc_descriptor_t          xpf_cmc_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .XpfCmcDescriptor
            _m12 struct whea::xpf_nmi_descriptor_t          xpf_nmi_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .XpfNmiDescriptor
            _m13 struct whea::ipf_mca_descriptor_t          ipf_mca_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IpfMcaDescriptor
            _m14 struct whea::ipf_cmc_descriptor_t          ipf_cmc_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IpfCmcDescriptor
            _m15 struct whea::ipf_cpe_descriptor_t          ipf_cpe_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IpfCpeDescriptor
            _m16 struct whea::aer_rootport_descriptor_t     aer_rootport_descriptor;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AerRootportDescriptor
            _m17 struct whea::aer_endpoint_descriptor_t     aer_endpoint_descriptor;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AerEndpointDescriptor
            _m18 struct whea::aer_bridge_descriptor_t       aer_bridge_descriptor;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AerBridgeDescriptor
            _m19 struct whea::generic_error_descriptor_t    gen_err_descriptor;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GenErrDescriptor
            _m20 struct whea::generic_error_descriptor_v2_t gen_err_descriptor_v2;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GenErrDescriptorV2
                                                                                                                
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                  
            _m21 struct whea::device_driver_descriptor_t    device_driver_descriptor;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceDriverDescriptor
                                                                                                                
            SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.$", 0x3a4, true, 0xbefdea93b0bcf6bc );                                                    
            SDK_FIXED_SIZE( u0_info_t, 0x3a4 );                                                                 
        };                                                                                                      
                                                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                                      
        _m00 uint32_t                                                                length;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                                                                version;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 enum whea::error_source_type_t                                          type;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m03 enum whea::error_source_state_t                                         state;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .State
        _m04 uint32_t                                                                max_raw_data_length;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxRawDataLength
        _m05 uint32_t                                                                num_records_to_preallocate;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .NumRecordsToPreallocate
        _m06 uint32_t                                                                max_sections_per_record;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxSectionsPerRecord
        _m07 uint32_t                                                                error_source_id;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ErrorSourceId
        _m08 uint32_t                                                                platform_error_source_id;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PlatformErrorSourceId
        _m09 uint32_t                                                                flags;                       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Flags
        _m22 u0_info_t                                                               info;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Info
                                                                                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_SOURCE_DESCRIPTOR.$", 0x3cc, true, 0x208aff462e20a80c );                           
        SDK_FIXED_SIZE( error_source_descriptor_t, 0x3cc );                                                     
    };                                                                                                          
};
#include "magic/error_source_descriptor_t.end.hpp"
SDK_VERIFY( union whea::error_source_descriptor_t::u0_info_t, 0x3a4 );
SDK_VERIFY( struct whea::error_source_descriptor_t, 0x3cc );
