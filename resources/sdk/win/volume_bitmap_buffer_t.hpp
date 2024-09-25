#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/volume_bitmap_buffer_t.start.hpp"
namespace win
{
    // [struct VOLUME_BITMAP_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_bitmap_buffer_t                
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 int64_t                starting_lcn;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingLcn
        _m01 int64_t                bitmap_size;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BitmapSize
        _m02 sdk::array<uint8_t, 1> buffer;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                                 
        SDK_MAGIC_PROPERTIES( "VOLUME_BITMAP_BUFFER.$", 0x18, true, 0xcc7667946e47b95d );             
        SDK_FIXED_SIZE( volume_bitmap_buffer_t, 0x18 );             
    };                                           
};
#include "magic/volume_bitmap_buffer_t.end.hpp"
SDK_VERIFY( struct win::volume_bitmap_buffer_t, 0x18 );
