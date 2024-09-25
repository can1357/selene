#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/geh_hresult_t.start.hpp"
namespace win
{
    // [struct GEH_HRESULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct geh_hresult_t         
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                       
        _m00 sdk::hresult result;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .result
        _m01 int32_t      line;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .line
                                 
        SDK_MAGIC_PROPERTIES( "GEH_HRESULT.$", 0x8, true, 0x136df50d7f97046f );       
        SDK_FIXED_SIZE( geh_hresult_t, 0x8 );       
    };                           
};
#include "magic/geh_hresult_t.end.hpp"
SDK_VERIFY( struct win::geh_hresult_t, 0x8 );
