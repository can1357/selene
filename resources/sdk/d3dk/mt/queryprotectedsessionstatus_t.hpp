#pragma once
#include <sdkgen/support_library.hpp>
#include "protected_session_status_t.hpp"

#include "magic/queryprotectedsessionstatus_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYPROTECTEDSESSIONSTATUS]
    // => WDK 10 (NV)
    //
    struct queryprotectedsessionstatus_t                        
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint32_t                                  h_handle;  //{ +0x0000    } | .hHandle
        _m01 enum d3dk::mt::protected_session_status_t status;    //{ +0x0004    } | .Status
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYPROTECTEDSESSIONSTATUS.$", 0x0, false, 0xcd6f1a31c589a23d );         
        SDK_FIXED_SIZE( queryprotectedsessionstatus_t, 0x8 );         
    };                                                          
};
#include "magic/queryprotectedsessionstatus_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryprotectedsessionstatus_t, 0x8 );
