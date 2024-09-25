#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_symbols32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_LOAD_SYMBOLS32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_symbols32_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t path_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PathNameLength
        _m01 uint32_t base_of_dll;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BaseOfDll
        _m02 uint32_t process_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m03 uint32_t check_sum;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CheckSum
        _m04 uint32_t size_of_image;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfImage
        _m05 uint8_t  unload_symbols;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .UnloadSymbols
                                       
        SDK_MAGIC_PROPERTIES( "_DBGKD_LOAD_SYMBOLS32.$", 0x18, true, 0x3d81511a21ba08db );                 
        SDK_FIXED_SIZE( load_symbols32_t, 0x18 );                 
    };                                 
};
#include "magic/load_symbols32_t.end.hpp"
SDK_VERIFY( struct dbgkd::load_symbols32_t, 0x18 );
