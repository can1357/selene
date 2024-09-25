#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/four_part_version_t.start.hpp"
namespace win
{
    // [union _FOUR_PART_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union four_part_version_t                          
    {                                                  
        struct u0_version32_t                          
        {                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                         
            _m01 uint32_t build_and_revision;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BuildAndRevision
            _m02 uint32_t major_and_minor;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorAndMinor
                                                       
            SDK_MAGIC_PROPERTIES( "_FOUR_PART_VERSION.Version32.$", 0x8, true, 0xf0cc4bdce12c4608 );                             
            SDK_FIXED_SIZE( u0_version32_t, 0x8 );                             
        };                                             
                                                       
        struct u4_version16_t                          
        {                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                         
            _m04 uint16_t revision;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
            _m05 uint16_t build;                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Build
            _m06 uint16_t minor;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Minor
            _m07 uint16_t major;                         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Major
                                                       
            SDK_MAGIC_PROPERTIES( "_FOUR_PART_VERSION.Version16.$", 0x8, true, 0x66b09dd2faf89a6f );                   
            SDK_FIXED_SIZE( u4_version16_t, 0x8 );                   
        };                                             
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                             
        _m00 uint64_t                        version64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version64
        _m03 u0_version32_t                  version32;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version32
        _m08 u4_version16_t                  version16;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version16
                                                       
        SDK_MAGIC_PROPERTIES( "_FOUR_PART_VERSION.$", 0x8, true, 0xd6bf2a2e52f14bf6 );          
        SDK_FIXED_SIZE( four_part_version_t, 0x8 );          
    };                                                 
};
#include "magic/four_part_version_t.end.hpp"
SDK_VERIFY( struct win::four_part_version_t::u0_version32_t, 0x8 );
SDK_VERIFY( struct win::four_part_version_t::u4_version16_t, 0x8 );
SDK_VERIFY( union win::four_part_version_t, 0x8 );
