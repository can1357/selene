#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_FILE_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_header_t                      
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint16_t machine;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Machine
        _m01 uint16_t number_of_sections;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NumberOfSections
        _m02 uint32_t time_date_stamp;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m03 uint32_t pointer_to_symbol_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PointerToSymbolTable
        _m04 uint32_t number_of_symbols;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfSymbols
        _m05 uint16_t size_of_optional_header;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfOptionalHeader
        _m06 uint16_t characteristics;          //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .Characteristics
                                              
        SDK_NONVOL_PROPERTIES( "_IMAGE_FILE_HEADER.$", 0x14, true, 0x356689378ba70948 );                        
        SDK_FIXED_SIZE( file_header_t, 0x14 );                        
    };                                        
};
#include "magic/file_header_t.end.hpp"
SDK_VERIFY( struct image::file_header_t, 0x14 );
