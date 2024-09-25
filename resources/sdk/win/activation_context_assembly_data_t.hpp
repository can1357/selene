#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_assembly_data_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_ASSEMBLY_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_assembly_data_t    
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                       
        _m00 uint32_t       size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t       flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 const wchar_t* assembly_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AssemblyName
        _m03 uint32_t       assembly_name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AssemblyNameLength
        _m04 uint32_t       hash_algorithm;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .HashAlgorithm
        _m05 uint32_t       pseudo_key;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PseudoKey
                                                 
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_ASSEMBLY_DATA.$", 0x20, true, 0x18c1e6b4c4b68df );                     
        SDK_FIXED_SIZE( activation_context_assembly_data_t, 0x20 );                     
    };                                           
};
#include "magic/activation_context_assembly_data_t.end.hpp"
SDK_VERIFY( struct win::activation_context_assembly_data_t, 0x20 );
