#pragma once
#include <sdkgen/support_library.hpp>
#include "format_descriptor_t.hpp"

#include "magic/format_list_header_t.start.hpp"
namespace nt
{
    // [struct _FORMAT_LIST_HEADER]
    // => WDK 10 (NV)
    //
    struct format_list_header_t                                                  
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint1_t                                    vendor_specific;           //{ +0x0001@0  } | .VendorSpecific
        _m01 uint1_t                                    immediate;                 //{ +0x0001@1  } | .Immediate
        _m02 uint1_t                                    try_out;                   //{ +0x0001@2  } | .TryOut
        _m03 uint1_t                                    ip;                        //{ +0x0001@3  } | .IP
        _m04 uint1_t                                    stpf;                      //{ +0x0001@4  } | .STPF
        _m05 uint1_t                                    dcrt;                      //{ +0x0001@5  } | .DCRT
        _m06 uint1_t                                    dpry;                      //{ +0x0001@6  } | .DPRY
        _m07 uint1_t                                    fov;                       //{ +0x0001@7  } | .FOV
        _m08 sdk::array<uint8_t, 2>                     format_descriptor_length;  //{ +0x0002    } | .FormatDescriptorLength
        _m09 sdk::array<struct nt::format_descriptor_t> descriptors;               //{ +0x0004    } | .Descriptors
                                                                                 
        SDK_NONVOL_PROPERTIES( "_FORMAT_LIST_HEADER.$", 0x0, false, 0xbeece9fb61a0a7c2 );                         
        SDK_FIXED_SIZE( format_list_header_t, 0x4 );                             
    };                                                                           
};
#include "magic/format_list_header_t.end.hpp"
SDK_VERIFY( struct nt::format_list_header_t, 0x4 );
