#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct IUMDFUnknown]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iumdf_unknown_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IUMDFUnknown.$", 0x8, true, 0xa1a34249ec72daff );
        SDK_FIXED_SIZE( iumdf_unknown_t, 0x8 );
    };                    
};
SDK_VERIFY( struct wdf::iumdf_unknown_t, 0x8 );
