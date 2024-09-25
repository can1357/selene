#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copyfile_t.start.hpp"
namespace si
{
    // [struct _SI_COPYFILE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct copyfile_t                                            
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 uint32_t               source_file_name_length;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceFileNameLength
        _m01 uint32_t               destination_file_name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DestinationFileNameLength
        _m02 uint32_t               flags;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 sdk::array<wchar_t, 1> file_name_buffer;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FileNameBuffer
                                                                 
        SDK_NONVOL_PROPERTIES( "_SI_COPYFILE.$", 0x10, true, 0xdc76d0beb87f623b );                             
        SDK_FIXED_SIZE( copyfile_t, 0x10 );                             
    };                                                           
};
#include "magic/copyfile_t.end.hpp"
SDK_VERIFY( struct si::copyfile_t, 0x10 );
