#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IThumbnailExtractor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_thumbnail_extractor_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IThumbnailExtractor.$", 0x8, true, 0x2e54b1399ec76702 );
        SDK_FIXED_SIZE( i_thumbnail_extractor_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_thumbnail_extractor_t, 0x8 );
