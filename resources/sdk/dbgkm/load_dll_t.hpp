#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_dll_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_LOAD_DLL]
    // => WDK 10 (NV)
    //
    struct load_dll_t                        
    {                                        
        // WDK 10                            
        //                                   
        _m00 void*    file_handle;             //{ +0x0000    } | .FileHandle
        _m01 void*    base_of_dll;             //{ +0x0008    } | .BaseOfDll
        _m02 uint32_t debug_info_file_offset;  //{ +0x0010    } | .DebugInfoFileOffset
        _m03 uint32_t debug_info_size;         //{ +0x0014    } | .DebugInfoSize
        _m04 void*    name_pointer;            //{ +0x0018    } | .NamePointer
                                             
        SDK_NONVOL_PROPERTIES( "_DBGKM_LOAD_DLL.$", 0x0, false, 0xcfdf87618fabd6b6 );                       
        SDK_FIXED_SIZE( load_dll_t, 0x20 );                       
    };                                       
};
#include "magic/load_dll_t.end.hpp"
SDK_VERIFY( struct dbgkm::load_dll_t, 0x20 );
