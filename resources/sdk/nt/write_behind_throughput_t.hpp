#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_behind_throughput_t.start.hpp"
namespace nt
{
    // [struct _WRITE_BEHIND_THROUGHPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_behind_throughput_t     
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t pages_yet_to_write;  //{ +0x0000    +0x0000    +0x0000    } | .PagesYetToWrite
        _m01 uint32_t throughput;          //{ +0x0004    +0x0004    +0x0004    } | .Throughput
                                         
        SDK_MAGIC_PROPERTIES( "_WRITE_BEHIND_THROUGHPUT.$", 0x8, true, 0x346223f630587ca9 );                   
        SDK_FIXED_SIZE( write_behind_throughput_t, 0x8 );                   
    };                                   
};
#include "magic/write_behind_throughput_t.end.hpp"
SDK_VERIFY( struct nt::write_behind_throughput_t, 0x8 );
