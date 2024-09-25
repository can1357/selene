#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64ec_metadata_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARM64EC_METADATA]
    // => Windows 11
    //
    struct arm64ec_metadata_t                                 
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 uint32_t version;                                  //{ +0x0000    } | .Version
        _m01 uint32_t code_map;                                 //{ +0x0004    } | .CodeMap
        _m02 uint32_t code_map_count;                           //{ +0x0008    } | .CodeMapCount
        _m03 uint32_t code_ranges_to_entry_points;              //{ +0x000c    } | .CodeRangesToEntryPoints
        _m04 uint32_t redirection_metadata;                     //{ +0x0010    } | .RedirectionMetadata
        _m05 uint32_t tbd_os_arm64x_dispatch_call_no_redirect;  //{ +0x0014    } | .tbd__os_arm64x_dispatch_call_no_redirect
        _m06 uint32_t tbd_os_arm64x_dispatch_ret;               //{ +0x0018    } | .tbd__os_arm64x_dispatch_ret
        _m07 uint32_t tbd_os_arm64x_dispatch_call;              //{ +0x001c    } | .tbd__os_arm64x_dispatch_call
        _m08 uint32_t tbd_os_arm64x_dispatch_icall;             //{ +0x0020    } | .tbd__os_arm64x_dispatch_icall
        _m09 uint32_t tbd_os_arm64x_dispatch_icall_cfg;         //{ +0x0024    } | .tbd__os_arm64x_dispatch_icall_cfg
        _m10 uint32_t alternate_entry_point;                    //{ +0x0028    } | .AlternateEntryPoint
        _m11 uint32_t auxiliary_iat;                            //{ +0x002c    } | .AuxiliaryIAT
        _m12 uint32_t code_ranges_to_entry_points_count;        //{ +0x0030    } | .CodeRangesToEntryPointsCount
        _m13 uint32_t redirection_metadata_count;               //{ +0x0034    } | .RedirectionMetadataCount
        _m14 uint32_t get_x64_information_function_pointer;     //{ +0x0038    } | .GetX64InformationFunctionPointer
        _m15 uint32_t set_x64_information_function_pointer;     //{ +0x003c    } | .SetX64InformationFunctionPointer
        _m16 uint32_t extra_rfe_table;                          //{ +0x0040    } | .ExtraRFETable
        _m17 uint32_t extra_rfe_table_size;                     //{ +0x0044    } | .ExtraRFETableSize
        _m18 uint32_t os_arm64x_dispatch_fptr;                  //{ +0x0048    } | .__os_arm64x_dispatch_fptr
        _m19 uint32_t auxiliary_iat_copy;                       //{ +0x004c    } | .AuxiliaryIATCopy
                                                              
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARM64EC_METADATA.$", 0x0, false, 0xbe2d30bc49af627a );                                        
        SDK_FIXED_SIZE( arm64ec_metadata_t, 0x50 );                                        
    };                                                        
};
#include "magic/arm64ec_metadata_t.end.hpp"
SDK_VERIFY( struct image::arm64ec_metadata_t, 0x50 );
