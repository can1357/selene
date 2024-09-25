#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_safearr_bstr_t.start.hpp"
namespace win
{
    struct flagged_word_blob_t;

    // [struct _wireSAFEARR_BSTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearr_bstr_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 uint32_t                          size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::flagged_word_blob_t** a_bstr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aBstr
                                                      
        SDK_MAGIC_PROPERTIES( "_wireSAFEARR_BSTR.$", 0x10, true, 0xeb4cda41a647c427 );       
        SDK_FIXED_SIZE( wire_safearr_bstr_t, 0x10 );       
    };                                                
};
#include "magic/wire_safearr_bstr_t.end.hpp"
SDK_VERIFY( struct win::wire_safearr_bstr_t, 0x10 );
