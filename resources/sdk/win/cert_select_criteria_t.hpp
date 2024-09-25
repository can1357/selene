#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_select_criteria_t.start.hpp"
namespace win
{
    // [struct _CERT_SELECT_CRITERIA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_select_criteria_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t dw_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m01 uint32_t c_para;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cPara
        _m02 void**   pp_para;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppPara
                                 
        SDK_MAGIC_PROPERTIES( "_CERT_SELECT_CRITERIA.$", 0x10, true, 0x384cbe6a916d5324 );        
        SDK_FIXED_SIZE( cert_select_criteria_t, 0x10 );        
    };                           
};
#include "magic/cert_select_criteria_t.end.hpp"
SDK_VERIFY( struct win::cert_select_criteria_t, 0x10 );
