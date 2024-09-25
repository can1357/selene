#pragma once
#include <sdkgen/support_library.hpp>
#include "win16rect_t.hpp"

#include "magic/placeablemetaheader_t.start.hpp"
namespace tag
{
    // [struct tagPLACEABLEMETAHEADER]
    // => Windows 10 v1607
    //
    struct placeablemetaheader_t              
    {                                         
        // Windows 10 v1607                   
        //                                    
        _m00 uint32_t                key;       //{ +0x0000    } | .key
        _m01 uint16_t                hmf;       //{ +0x0004    } | .hmf
        _m02 struct tag::win16rect_t bbox;      //{ +0x0006    } | .bbox
        _m03 uint16_t                inch;      //{ +0x000e    } | .inch
        _m04 uint16_t                checksum;  //{ +0x0014    } | .checksum
                                              
        SDK_MAGIC_PROPERTIES( "tagPLACEABLEMETAHEADER.$", 0x0, false, 0xd32881a9a17a415 );         
        SDK_FIXED_SIZE( placeablemetaheader_t, 0x16 );         
    };                                        
};
#include "magic/placeablemetaheader_t.end.hpp"
SDK_VERIFY( struct tag::placeablemetaheader_t, 0x16 );
