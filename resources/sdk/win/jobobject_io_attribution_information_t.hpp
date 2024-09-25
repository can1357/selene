#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_io_attribution_stats_t.hpp"

#include "magic/jobobject_io_attribution_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_IO_ATTRIBUTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_io_attribution_information_t                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                              
        _m00 uint32_t                                     control_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlFlags
        _m01 struct win::jobobject_io_attribution_stats_t read_stats;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadStats
        _m02 struct win::jobobject_io_attribution_stats_t write_stats;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .WriteStats
                                                                        
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_IO_ATTRIBUTION_INFORMATION.$", 0x48, true, 0x5acec50193493d96 );              
        SDK_FIXED_SIZE( jobobject_io_attribution_information_t, 0x48 );              
    };                                                                  
};
#include "magic/jobobject_io_attribution_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_io_attribution_information_t, 0x48 );
