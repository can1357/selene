#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfirp_triage_info_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDFIRP_TRIAGE_INFO_V1_11]
    // => Windows 10 v1607
    //
    struct wdfirp_triage_info_v1_11_t
    {                                
        // Windows 10 v1607            
        //                        
        _m00 uint32_t fx_irp_size;     //{ +0x0000    } | .FxIrpSize
        _m01 uint32_t irp_ptr;         //{ +0x0004    } | .IrpPtr
                                     
        SDK_MAGIC_PROPERTIES( "_WDFIRP_TRIAGE_INFO_V1_11.$", 0x0, false, 0x9b9f101f2fec60f3 );            
        SDK_FIXED_SIZE( wdfirp_triage_info_v1_11_t, 0x8 );            
    };                               
};
#include "magic/wdfirp_triage_info_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::wdfirp_triage_info_v1_11_t, 0x8 );
