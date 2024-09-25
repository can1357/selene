#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sleepstudy_data_entry_t.start.hpp"
namespace wdf
{
    // [struct _SLEEPSTUDY_DATA_ENTRY]
    // => Windows 11
    //
    struct sleepstudy_data_entry_t                           
    {                                                        
        using psleepstudy_helper_value_formatter_t = sdk::function<int32_t(void*, nt::unicode_view*)>*;          
                                                             
        // Windows 11                                        
        //                                                   
        _m00 nt::unicode_view                      key;        //{ +0x0000    } | .Key
        _m01 void*                                 value;      //{ +0x0010    } | .Value
        _m02 psleepstudy_helper_value_formatter_t  formatter;  //{ +0x0018    } | .Formatter
                                                             
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_DATA_ENTRY.$", 0x0, false, 0x15e065d9c901ffd5 );          
        SDK_FIXED_SIZE( sleepstudy_data_entry_t, 0x20 );          
    };                                                       
};
#include "magic/sleepstudy_data_entry_t.end.hpp"
SDK_VERIFY( struct wdf::sleepstudy_data_entry_t, 0x20 );
