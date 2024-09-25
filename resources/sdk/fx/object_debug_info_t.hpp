#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_debug_info_t.start.hpp"
namespace fx
{
    // [struct FxObjectDebugInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_debug_info_t                                   
    {                                                            
        struct u0_bits_t                                         
        {                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                   
            _m02 uint1_t track_references;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TrackReferences
                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                   
            _m03 uint1_t track_object_count_for_leak;              //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .TrackObjectCountForLeak
                                                                 
            SDK_MAGIC_PROPERTIES( "FxObjectDebugInfo.Bits.$", 0x2, true, 0x1369088987c57400 );                                        
            SDK_FIXED_SIZE( u0_bits_t, 0x2 );                                        
        };                                                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                       
        _m00 uint16_t                                object_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 uint16_t                                debug_flags;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DebugFlags
        _m04 u0_bits_t                               bits;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Bits
                                                                 
        SDK_MAGIC_PROPERTIES( "FxObjectDebugInfo.$", 0x4, true, 0x81c6ac5bf6a18f7f );            
        SDK_FIXED_SIZE( object_debug_info_t, 0x4 );              
    };                                                           
};
#include "magic/object_debug_info_t.end.hpp"
SDK_VERIFY( struct fx::object_debug_info_t::u0_bits_t, 0x2 );
SDK_VERIFY( struct fx::object_debug_info_t, 0x4 );
