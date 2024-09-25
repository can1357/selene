#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createprotectedsession_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEPROTECTEDSESSION]
    // => WDK 10 (NV)
    //
    struct createprotectedsession_t            
    {                                          
        // WDK 10                              
        //                                     
        _m00 void*    h_protected_session;       //{ +0x0000    } | .hProtectedSession
        _m01 void*    p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
                                               
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEPROTECTEDSESSION.$", 0x0, false, 0xeccc60aafc9203ea );                         
        SDK_FIXED_SIZE( createprotectedsession_t, 0x18 );                         
    };                                         
};
#include "magic/createprotectedsession_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createprotectedsession_t, 0x18 );
