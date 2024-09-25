#pragma once
#include <sdkgen/support_library.hpp>
#include "scheduling_log_entry_t.hpp"
#include "scheduling_log_header_t.hpp"

#include "magic/scheduling_log_buffer_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SCHEDULING_LOG_BUFFER]
    // => WDK 10 (NV)
    //
    struct scheduling_log_buffer_t                        
    {                                                     
        using entries_t = sdk::array<struct dxgk::scheduling_log_entry_t, 1>;        
                                                          
        // WDK 10                                         
        //                                                
        _m00 struct dxgk::scheduling_log_header_t header;   //{ +0x0000    } | .Header
        _m01 entries_t                            entries;  //{ +0x0020    } | .Entries
                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_SCHEDULING_LOG_BUFFER.$", 0x0, false, 0xd26aab1b74f4b621 );        
        SDK_FIXED_SIZE( scheduling_log_buffer_t, 0x40 );        
    };                                                    
};
#include "magic/scheduling_log_buffer_t.end.hpp"
SDK_VERIFY( struct dxgk::scheduling_log_buffer_t, 0x40 );
