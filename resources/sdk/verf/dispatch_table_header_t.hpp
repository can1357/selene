#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatch_table_type_t.hpp"

#include "magic/dispatch_table_header_t.start.hpp"
namespace verf
{
    // [struct _VF_DISPATCH_TABLE_HEADER]
    // => Windows 10 v1607
    //
    struct dispatch_table_header_t                 
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 enum verf::dispatch_table_type_t type;  //{ +0x0000    } | .Type
        _m01 uint32_t                         size;  //{ +0x0004    } | .Size
                                                   
        SDK_MAGIC_PROPERTIES( "_VF_DISPATCH_TABLE_HEADER.$", 0x0, false, 0xc1e187e8865f809b );     
        SDK_FIXED_SIZE( dispatch_table_header_t, 0x8 );     
    };                                             
};
#include "magic/dispatch_table_header_t.end.hpp"
SDK_VERIFY( struct verf::dispatch_table_header_t, 0x8 );
