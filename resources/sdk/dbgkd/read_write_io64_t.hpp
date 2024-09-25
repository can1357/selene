#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_write_io64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_WRITE_IO64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_write_io64_t     
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t io_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoAddress
        _m01 uint32_t data_size;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSize
        _m02 uint32_t data_value;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataValue
                                 
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_WRITE_IO64.$", 0x10, true, 0xf9da58d9dad10ca0 );           
        SDK_FIXED_SIZE( read_write_io64_t, 0x10 );           
    };                           
};
#include "magic/read_write_io64_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_write_io64_t, 0x10 );
