#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_write_io32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_WRITE_IO32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_write_io32_t     
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t data_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSize
        _m01 uint32_t io_address;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IoAddress
        _m02 uint32_t data_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataValue
                                 
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_WRITE_IO32.$", 0xc, true, 0x9a024b41dfd17561 );           
        SDK_FIXED_SIZE( read_write_io32_t, 0xc );           
    };                           
};
#include "magic/read_write_io32_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_write_io32_t, 0xc );
