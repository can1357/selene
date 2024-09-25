#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/file_information_class_t.hpp"

#include "magic/file_information_definition_t.start.hpp"
namespace win
{
    // [struct _FILE_INFORMATION_DEFINITION]
    // => Windows 11
    //
    struct file_information_definition_t                               
    {                                                                  
        // Windows 11                                                  
        //                                                             
        _m00 enum nt::file_information_class_t _class;                   //{ +0x0000    } | .Class
        _m01 uint32_t                          next_entry_offset;        //{ +0x0004    } | .NextEntryOffset
        _m02 uint32_t                          file_name_length_offset;  //{ +0x0008    } | .FileNameLengthOffset
        _m03 uint32_t                          file_name_offset;         //{ +0x000c    } | .FileNameOffset
                                                                       
        SDK_MAGIC_PROPERTIES( "_FILE_INFORMATION_DEFINITION.$", 0x0, false, 0xbeff90ed192999cd );                        
        SDK_FIXED_SIZE( file_information_definition_t, 0x10 );                        
    };                                                                 
};
#include "magic/file_information_definition_t.end.hpp"
SDK_VERIFY( struct win::file_information_definition_t, 0x10 );
