#pragma once
#include <sdkgen/support_library.hpp>
#include "lba_status_descriptor_t.hpp"

#include "magic/lba_status_list_header_t.start.hpp"
namespace nt
{
    // [struct _LBA_STATUS_LIST_HEADER]
    // => WDK 10 (NV)
    //
    struct lba_status_list_header_t                                          
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                                       parameter_length;  //{ +0x0000    } | .ParameterLength
        _m01 sdk::array<struct nt::lba_status_descriptor_t> descriptors;       //{ +0x0008    } | .Descriptors
                                                                             
        SDK_NONVOL_PROPERTIES( "_LBA_STATUS_LIST_HEADER.$", 0x0, false, 0x77e4dd8570a5e890 );                 
        SDK_FIXED_SIZE( lba_status_list_header_t, 0x8 );                     
    };                                                                       
};
#include "magic/lba_status_list_header_t.end.hpp"
SDK_VERIFY( struct nt::lba_status_list_header_t, 0x8 );
