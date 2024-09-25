#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/localeinfo_struct_t.hpp"

#include "magic/locale_update_t.start.hpp"
namespace wdf
{
    // [class _LocaleUpdate]
    // => Windows 10 v1607
    //
    class locale_update_t                               
    {                                                   
        // Windows 10 v1607                             
        //                                              
        _m00 struct win::localeinfo_struct_t localeinfo;  //{ +0x0000    } | .localeinfo
        _m01 bool                            updated;     //{ +0x0010    } | .updated
                                                        
        SDK_MAGIC_PROPERTIES( "_LocaleUpdate.$", 0x0, false, 0xc14a58353b452ad4 );           
        SDK_FIXED_SIZE( locale_update_t, 0x18 );           
    };                                                  
};
#include "magic/locale_update_t.end.hpp"
SDK_VERIFY( class wdf::locale_update_t, 0x18 );
