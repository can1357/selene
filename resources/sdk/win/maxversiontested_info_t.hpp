#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/maxversiontested_info_t.start.hpp"
namespace win
{
    // [struct _MAXVERSIONTESTED_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct maxversiontested_info_t       
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t max_version_tested;  //{ +0x0000    +0x0000    +0x0000    } | .MaxVersionTested
                                         
        SDK_MAGIC_PROPERTIES( "_MAXVERSIONTESTED_INFO.$", 0x8, true, 0x177fd9cb558a9007 );                   
        SDK_FIXED_SIZE( maxversiontested_info_t, 0x8 );                   
    };                                   
};
#include "magic/maxversiontested_info_t.end.hpp"
SDK_VERIFY( struct win::maxversiontested_info_t, 0x8 );
