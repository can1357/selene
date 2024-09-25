#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/critical_section_t.hpp"

#include "magic/critical_section_t.start.hpp"
namespace asl
{
    // [struct _ASL_CRITICAL_SECTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critical_section_t                    
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                       
        _m00 struct rtl::critical_section_t lock;  //{ +0x0000    +0x0000    +0x0000    } | .Lock
                                                 
        SDK_MAGIC_PROPERTIES( "_ASL_CRITICAL_SECTION.$", 0x28, true, 0x8524c6a7527e48f8 );     
        SDK_FIXED_SIZE( critical_section_t, 0x28 );     
    };                                           
};
#include "magic/critical_section_t.end.hpp"
SDK_VERIFY( struct asl::critical_section_t, 0x28 );
