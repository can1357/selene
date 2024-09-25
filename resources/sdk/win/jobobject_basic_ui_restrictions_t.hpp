#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_basic_ui_restrictions_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_BASIC_UI_RESTRICTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_basic_ui_restrictions_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t ui_restrictions_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UIRestrictionsClass
                                            
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_BASIC_UI_RESTRICTIONS.$", 0x4, true, 0x6fb40106237e5b05 );                      
        SDK_FIXED_SIZE( jobobject_basic_ui_restrictions_t, 0x4 );                      
    };                                      
};
#include "magic/jobobject_basic_ui_restrictions_t.end.hpp"
SDK_VERIFY( struct win::jobobject_basic_ui_restrictions_t, 0x4 );
