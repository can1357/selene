#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_symbols64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_LOAD_SYMBOLS64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_symbols64_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t path_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PathNameLength
        _m01 uint64_t base_of_dll;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BaseOfDll
        _m02 uint64_t process_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 uint32_t check_sum;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckSum
        _m04 uint32_t size_of_image;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SizeOfImage
        _m05 uint8_t  unload_symbols;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UnloadSymbols
                                       
        SDK_MAGIC_PROPERTIES( "_DBGKD_LOAD_SYMBOLS64.$", 0x28, true, 0x31cfa3442477a09b );                 
        SDK_FIXED_SIZE( load_symbols64_t, 0x28 );                 
    };                                 
};
#include "magic/load_symbols64_t.end.hpp"
SDK_VERIFY( struct dbgkd::load_symbols64_t, 0x28 );
