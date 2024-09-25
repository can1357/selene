#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfirp_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFIRP_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfirp_triage_info_t   
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t fx_irp_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FxIrpSize
        _m01 uint32_t irp_ptr;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpPtr
                                  
        SDK_MAGIC_PROPERTIES( "_WDFIRP_TRIAGE_INFO.$", 0x8, true, 0xbacb3a5124c81657 );            
        SDK_FIXED_SIZE( wdfirp_triage_info_t, 0x8 );            
    };                            
};
#include "magic/wdfirp_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfirp_triage_info_t, 0x8 );
