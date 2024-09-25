#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_request_codes_t.hpp"

#include "magic/coverage_module_request_t.start.hpp"
namespace win
{
    // [struct _COVERAGE_MODULE_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_module_request_t                              
    {                                                             
        union u0_search_info_t                                    
        {                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                    
            _m01 sdk::array<uint8_t, 16> md5_hash;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MD5Hash
            _m02 nt::unicode_view        module_name;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ModuleName
                                                                  
            SDK_MAGIC_PROPERTIES( "_COVERAGE_MODULE_REQUEST.SearchInfo.$", 0x10, true, 0x8fc214613dd84ccc );                         
            SDK_FIXED_SIZE( u0_search_info_t, 0x10 );                         
        };                                                        
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                        
        _m00 enum win::coverage_request_codes_t      request_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestType
        _m03 u0_search_info_t                        search_info;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SearchInfo
                                                                  
        SDK_MAGIC_PROPERTIES( "_COVERAGE_MODULE_REQUEST.$", 0x18, true, 0x4a183529ef68c5c3 );             
        SDK_FIXED_SIZE( coverage_module_request_t, 0x18 );             
    };                                                            
};
#include "magic/coverage_module_request_t.end.hpp"
SDK_VERIFY( union win::coverage_module_request_t::u0_search_info_t, 0x10 );
SDK_VERIFY( struct win::coverage_module_request_t, 0x18 );
