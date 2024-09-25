#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sqm_stream_entry_t.start.hpp"
namespace win
{
    // [struct _SQM_STREAM_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sqm_stream_entry_t                    
    {                                            
        union u0_val_t                           
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                   
            _m01 const wchar_t* pwsz_val;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszVal
            _m02 uint32_t       dw_val;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVal
                                                 
            SDK_MAGIC_PROPERTIES( "_SQM_STREAM_ENTRY.val.$", 0x8, true, 0x281bbf63f14d57bb );                 
            SDK_FIXED_SIZE( u0_val_t, 0x8 );                 
        };                                       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                       
        _m00 uint32_t                    dw_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m03 u0_val_t                    val;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .val
                                                 
        SDK_MAGIC_PROPERTIES( "_SQM_STREAM_ENTRY.$", 0x10, true, 0x6aad105a8cc7e9b4 );        
        SDK_FIXED_SIZE( sqm_stream_entry_t, 0x10 );        
    };                                           
};
#include "magic/sqm_stream_entry_t.end.hpp"
SDK_VERIFY( union win::sqm_stream_entry_t::u0_val_t, 0x8 );
SDK_VERIFY( struct win::sqm_stream_entry_t, 0x10 );
