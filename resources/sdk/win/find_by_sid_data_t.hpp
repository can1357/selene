#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_t.hpp"

#include "magic/find_by_sid_data_t.start.hpp"
namespace win
{
    // [struct FIND_BY_SID_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct find_by_sid_data_t         
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                            
        _m00 uint32_t         restart;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Restart
        _m01 struct nt::sid_t sid;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Sid
                                      
        SDK_MAGIC_PROPERTIES( "FIND_BY_SID_DATA.$", 0x10, true, 0x969c3ca53cfc72e6 );        
        SDK_FIXED_SIZE( find_by_sid_data_t, 0x10 );        
    };                                
};
#include "magic/find_by_sid_data_t.end.hpp"
SDK_VERIFY( struct win::find_by_sid_data_t, 0x10 );
