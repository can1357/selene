#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw13_read_write_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW13_READ_WRITE]
    // => Windows 11
    //
    union nvme_cdw13_read_write_t                    
    {                                                
        struct u0_dsm_t                              
        {                                            
            // Windows 11                            
            //                                       
            _m00 uint4_t access_frequency;             //{ +0x0000@0  } | .AccessFrequency
            _m01 uint2_t access_latency;               //{ +0x0000@4  } | .AccessLatency
            _m02 uint1_t sequential_request;           //{ +0x0000@6  } | .SequentialRequest
            _m03 uint1_t incompressible;               //{ +0x0000@7  } | .Incompressible
                                                     
            SDK_MAGIC_PROPERTIES( "NVME_CDW13_READ_WRITE.DSM.$", 0x0, false, 0x784ab56888acdcb1 );                            
            SDK_FIXED_SIZE( u0_dsm_t, 0x1 );                            
        };                                           
                                                     
        // Windows 11                                
        //                                           
        _m04 u0_dsm_t                       dsm;       //{ +0x0000    } | .DSM
        _m05 uint16_t                       dspec;     //{ +0x0002    } | .DSPEC
        _m06 uint32_t                       as_ulong;  //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW13_READ_WRITE.$", 0x0, false, 0x72d112083617db11 );         
        SDK_FIXED_SIZE( nvme_cdw13_read_write_t, 0x4 );         
    };                                               
};
#include "magic/nvme_cdw13_read_write_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw13_read_write_t::u0_dsm_t, 0x1 );
SDK_VERIFY( union stor::port::nvme_cdw13_read_write_t, 0x4 );
