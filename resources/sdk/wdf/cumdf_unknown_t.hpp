#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cumdf_unknown_t.start.hpp"
namespace wdf
{
    // [class CUMDFUnknown]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cumdf_unknown_t         
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t m_ref_count;  //{ +0x0008    +0x0008    +0x0008    } | .m_RefCount
                                  
        SDK_MAGIC_PROPERTIES( "CUMDFUnknown.$", 0x10, true, 0x84a5be1b17bcb04d );            
        SDK_FIXED_SIZE( cumdf_unknown_t, 0x10 );            
    };                            
};
#include "magic/cumdf_unknown_t.end.hpp"
SDK_VERIFY( class wdf::cumdf_unknown_t, 0x10 );
