#pragma once
#include <sdkgen/support_library.hpp>
#include "free_display_t.hpp"

#include "magic/dual_t.start.hpp"
namespace nt
{
    struct hmap_table_t;
    struct hmap_directory_t;

    // [struct _DUAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dual_t                                                   
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                          
        _m00 uint32_t                                  length;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 struct nt::hmap_directory_t*              map;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Map
        _m02 struct nt::hmap_table_t*                  small_dir;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SmallDir
        _m03 uint32_t                                  guard;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Guard
        _m04 sdk::array<struct nt::free_display_t, 24> free_display;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeDisplay
        _m05 nt::list_entry_t                          free_bins;     //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .FreeBins
        _m06 uint32_t                                  free_summary;  //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .FreeSummary
                                                                    
        SDK_MAGIC_PROPERTIES( "_DUAL.$", 0x278, true, 0xe398c77863d08ce4 );             
        SDK_FIXED_SIZE( dual_t, 0x278 );                            
    };                                                              
};
#include "magic/dual_t.end.hpp"
SDK_VERIFY( struct nt::dual_t, 0x278 );
