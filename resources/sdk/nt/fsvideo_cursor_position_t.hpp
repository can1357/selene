#pragma once
#include <sdkgen/support_library.hpp>
#include "../video/cursor_position_t.hpp"

#include "magic/fsvideo_cursor_position_t.start.hpp"
namespace nt
{
    // [struct _FSVIDEO_CURSOR_POSITION]
    // => WDK 10 (NV)
    //
    struct fsvideo_cursor_position_t                 
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct video::cursor_position_t coord;    //{ +0x0000    } | .Coord
        _m01 uint32_t                        dw_type;  //{ +0x0004    } | .dwType
                                                     
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_CURSOR_POSITION.$", 0x0, false, 0xeb36100957669826 );        
        SDK_FIXED_SIZE( fsvideo_cursor_position_t, 0x8 );        
    };                                               
};
#include "magic/fsvideo_cursor_position_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_cursor_position_t, 0x8 );
