#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cloud_property_blob_context_t.start.hpp"
namespace win
{
    // [struct _CLOUD_PROPERTY_BLOB_CONTEXT]
    // => Windows 10 v1607
    //
    struct cloud_property_blob_context_t
    {                                   
        // Windows 10 v1607              
        //                          
        _m00 uint32_t blob_type;          //{ +0x0000    } | .BlobType
        _m01 uint32_t buffer_length;      //{ +0x0004    } | .BufferLength
        _m02 void*    buffer;             //{ +0x0008    } | .Buffer
        _m03 uint64_t alignment;          //{ +0x0008    } | .Alignment
        _m04 uint32_t blob_length;        //{ +0x0010    } | .BlobLength
        _m05 int32_t  status;             //{ +0x0014    } | .Status
                                        
        SDK_MAGIC_PROPERTIES( "_CLOUD_PROPERTY_BLOB_CONTEXT.$", 0x0, false, 0xc412cfc20c55e9ba );              
        SDK_FIXED_SIZE( cloud_property_blob_context_t, 0x18 );              
    };                                  
};
#include "magic/cloud_property_blob_context_t.end.hpp"
SDK_VERIFY( struct win::cloud_property_blob_context_t, 0x18 );
