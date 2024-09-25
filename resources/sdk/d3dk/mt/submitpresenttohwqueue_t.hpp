#pragma once
#include <sdkgen/support_library.hpp>
#include "present_t.hpp"

#include "magic/submitpresenttohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITPRESENTTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitpresenttohwqueue_t                          
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t*                  h_hw_queues;           //{ +0x0000    } | .hHwQueues
        _m01 struct d3dk::mt::present_t private_present_data;  //{ +0x0008    } | .PrivatePresentData
                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITPRESENTTOHWQUEUE.$", 0x0, false, 0xe425019170204b42 );                     
        SDK_FIXED_SIZE( submitpresenttohwqueue_t, 0x5e0 );                     
    };                                                       
};
#include "magic/submitpresenttohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitpresenttohwqueue_t, 0x5e0 );
