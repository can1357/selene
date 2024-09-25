#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stop_on_symlink_filter_ecp_v0_t.start.hpp"
namespace io
{
    // [struct _IO_STOP_ON_SYMLINK_FILTER_ECP_v0]
    // => WDK 10 (NV)
    //
    struct stop_on_symlink_filter_ecp_v0_t          
    {                                               
        struct u0_out_t                             
        {                                           
            // WDK 10                               
            //                                      
            _m00 uint32_t reparse_count;              //{ +0x0000    } | .ReparseCount
            _m01 uint32_t remaining_path_length;      //{ +0x0004    } | .RemainingPathLength
                                                    
            SDK_NONVOL_PROPERTIES( "_IO_STOP_ON_SYMLINK_FILTER_ECP_v0.Out.$", 0x0, false, 0xe2d9906e6f2ab00a );                          
            SDK_FIXED_SIZE( u0_out_t, 0x8 );                          
        };                                          
                                                    
        // WDK 10                                   
        //                                          
        _m02 u0_out_t                           out;  //{ +0x0000    } | .Out
                                                    
        SDK_NONVOL_PROPERTIES( "_IO_STOP_ON_SYMLINK_FILTER_ECP_v0.$", 0x0, false, 0xea2e24195c26076d );    
        SDK_FIXED_SIZE( stop_on_symlink_filter_ecp_v0_t, 0x8 );    
    };                                              
};
#include "magic/stop_on_symlink_filter_ecp_v0_t.end.hpp"
SDK_VERIFY( struct io::stop_on_symlink_filter_ecp_v0_t::u0_out_t, 0x8 );
SDK_VERIFY( struct io::stop_on_symlink_filter_ecp_v0_t, 0x8 );
