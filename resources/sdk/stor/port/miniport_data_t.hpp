#pragma once
#include <sdkgen/support_library.hpp>
#include "data_type_t.hpp"

#include "magic/miniport_data_t.start.hpp"
namespace stor::port
{
    // [struct _MINIPORT_DATA]
    // => Windows 11
    //
    struct miniport_data_t                             
    {                                                  
        // Windows 11                                  
        //                                             
        _m00 char*                        name;          //{ +0x0000    } | .Name
        _m01 enum stor::port::data_type_t type;          //{ +0x0008    } | .Type
        _m02 uint16_t                     array_length;  //{ +0x000c    } | .ArrayLength
        _m03 void*                        data;          //{ +0x0010    } | .Data
                                                       
        SDK_MAGIC_PROPERTIES( "_MINIPORT_DATA.$", 0x0, false, 0x41f01752d4781105 );             
        SDK_FIXED_SIZE( miniport_data_t, 0x18 );             
    };                                                 
};
#include "magic/miniport_data_t.end.hpp"
SDK_VERIFY( struct stor::port::miniport_data_t, 0x18 );
