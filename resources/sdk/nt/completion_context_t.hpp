#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_request_block_t.hpp"
#include "../stor/port/storage_request_block_t.hpp"

#include "magic/completion_context_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _COMPLETION_CONTEXT]
    // => WDK 10 (NV)
    //
    struct completion_context_t                                                         
    {                                                                                   
        union u0_srb_t                                                                  
        {                                                                               
            // WDK 10                                                                   
            //                                                                          
            _m01 struct nt::scsi_request_block_t            srb;                          //{ +0x0000    } | .Srb
            _m02 struct stor::port::storage_request_block_t srb_ex;                       //{ +0x0000    } | .SrbEx
            _m03 sdk::array<uint8_t, 184>                   srb_ex_buffer;                //{ +0x0000    } | .SrbExBuffer
                                                                                        
            SDK_NONVOL_PROPERTIES( "_COMPLETION_CONTEXT.Srb.$", 0x0, false, 0x5d0f9ed806287fc2 );                            
            SDK_FIXED_SIZE( u0_srb_t, 0xb8 );                                           
        };                                                                              
                                                                                        
        // WDK 10                                                                       
        //                                                                              
        _m00 struct nt::device_object_t*                                  device_object;  //{ +0x0000    } | .DeviceObject
        _m04 u0_srb_t                                                     srb;            //{ +0x0008    } | .Srb
                                                                                        
        SDK_NONVOL_PROPERTIES( "_COMPLETION_CONTEXT.$", 0x0, false, 0x686658d1e325f525 );              
        SDK_FIXED_SIZE( completion_context_t, 0xc0 );                                   
    };                                                                                  
};
#include "magic/completion_context_t.end.hpp"
SDK_VERIFY( union nt::completion_context_t::u0_srb_t, 0xb8 );
SDK_VERIFY( struct nt::completion_context_t, 0xc0 );
