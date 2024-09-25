#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct activation_context_t; }

#include "magic/load_asdata_table_t.start.hpp"
namespace win
{
    // [struct _LOAD_ASDATA_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_asdata_table_t                                               
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                   
        _m00 void*                            module;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Module
        _m01 wchar_t*                         file_path;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilePath
        _m02 uint64_t                         size;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 void*                            handle;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Handle
        _m04 int32_t                          ref_count;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RefCount
        _m05 struct nt::activation_context_t* entry_point_activation_context;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EntryPointActivationContext
                                                                             
        SDK_MAGIC_PROPERTIES( "_LOAD_ASDATA_TABLE.$", 0x30, true, 0x9d975f28ff0f6631 );                               
        SDK_FIXED_SIZE( load_asdata_table_t, 0x30 );                               
    };                                                                       
};
#include "magic/load_asdata_table_t.end.hpp"
SDK_VERIFY( struct win::load_asdata_table_t, 0x30 );
