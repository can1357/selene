#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mfnd_physical_function_global_properties_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES]
    // => Windows 11
    //
    struct mfnd_physical_function_global_properties_t
    {                                                
        // Windows 11                         
        //                                    
        _m00 uint16_t version;                         //{ +0x0000    } | .Version
        _m01 uint16_t size_in_bytes;                   //{ +0x0002    } | .SizeInBytes
        _m02 uint16_t flags;                           //{ +0x0004    } | .Flags
        _m03 uint16_t namespace_metadata_size;         //{ +0x0006    } | .NamespaceMetadataSize
        _m04 uint8_t  namespace_lba_data_size;         //{ +0x0008    } | .NamespaceLBADataSize
        _m05 uint8_t  namespace_dps;                   //{ +0x0009    } | .NamespaceDPS
        _m06 uint8_t  namespace_nmic;                  //{ +0x000a    } | .NamespaceNMIC
                                                     
        SDK_MAGIC_PROPERTIES( "_MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES.$", 0x0, false, 0x9d1856d70939d888 );                        
        SDK_FIXED_SIZE( mfnd_physical_function_global_properties_t, 0x200 );                        
    };                                               
};
#include "magic/mfnd_physical_function_global_properties_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_physical_function_global_properties_t, 0x200 );
