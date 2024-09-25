#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "file_id_128_t.hpp"
#include "file_id_type_t.hpp"

#include "magic/file_id_descriptor_t.start.hpp"
namespace win
{
    // [struct FILE_ID_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_id_descriptor_t                         
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                              
        _m00 uint32_t                  dw_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 enum win::file_id_type_t  type;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 int64_t                   file_id;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileId
        _m03 struct nt::guid_t         object_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectId
        _m04 struct win::file_id_128_t extended_file_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtendedFileId
                                                        
        SDK_MAGIC_PROPERTIES( "FILE_ID_DESCRIPTOR.$", 0x18, true, 0xefdf659c149ea0c4 );                 
        SDK_FIXED_SIZE( file_id_descriptor_t, 0x18 );                 
    };                                                  
};
#include "magic/file_id_descriptor_t.end.hpp"
SDK_VERIFY( struct win::file_id_descriptor_t, 0x18 );
