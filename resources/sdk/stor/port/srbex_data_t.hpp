#pragma once
#include <sdkgen/support_library.hpp>
#include "srbexdatatype_t.hpp"

#include "magic/srbex_data_t.start.hpp"
namespace stor::port
{
    // [struct _SRBEX_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct srbex_data_t                              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                           
        _m00 enum stor::port::srbexdatatype_t type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 sdk::array<uint8_t, 1>           data;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                     
        SDK_MAGIC_PROPERTIES( "_SRBEX_DATA.$", 0x10, true, 0xa84e2ed9496cd17a );       
        SDK_FIXED_SIZE( srbex_data_t, 0x10 );        
    };                                               
};
#include "magic/srbex_data_t.end.hpp"
SDK_VERIFY( struct stor::port::srbex_data_t, 0x10 );
