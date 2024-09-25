#pragma once
#include <sdkgen/support_library.hpp>
#include "encapsulation_t.hpp"

#include "magic/encapsulation_format_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_ENCAPSULATION_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct encapsulation_format_t                                    
    {                                                                
        struct u0_flags_t                                            
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                       
            _m01 uint1_t fixed_header_size;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FixedHeaderSize
                                                                     
            SDK_MAGIC_PROPERTIES( "_NDIS_ENCAPSULATION_FORMAT.Flags.$", 0x4, true, 0xcf39f1fd69e91ab2 );                                            
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                            
        };                                                           
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                           
        _m00 enum ndis::encapsulation_t    encapsulation;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
        _m02 u0_flags_t                    flags;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint32_t                      encapsulation_header_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EncapsulationHeaderSize
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_ENCAPSULATION_FORMAT.$", 0xc, true, 0x50f49a2c96304451 );                          
        SDK_FIXED_SIZE( encapsulation_format_t, 0xc );                          
    };                                                               
};
#include "magic/encapsulation_format_t.end.hpp"
SDK_VERIFY( struct ndis::encapsulation_format_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct ndis::encapsulation_format_t, 0xc );
