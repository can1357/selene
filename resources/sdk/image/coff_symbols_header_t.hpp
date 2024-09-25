#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coff_symbols_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_COFF_SYMBOLS_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coff_symbols_header_t                
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t number_of_symbols;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfSymbols
        _m01 uint32_t lva_to_first_symbol;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LvaToFirstSymbol
        _m02 uint32_t number_of_linenumbers;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfLinenumbers
        _m03 uint32_t lva_to_first_linenumber;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LvaToFirstLinenumber
        _m04 uint32_t rva_to_first_byte_of_code;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RvaToFirstByteOfCode
        _m05 uint32_t rva_to_last_byte_of_code;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RvaToLastByteOfCode
        _m06 uint32_t rva_to_first_byte_of_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RvaToFirstByteOfData
        _m07 uint32_t rva_to_last_byte_of_data;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RvaToLastByteOfData
                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_COFF_SYMBOLS_HEADER.$", 0x20, true, 0x2cf5597868b525bc );                          
        SDK_FIXED_SIZE( coff_symbols_header_t, 0x20 );                          
    };                                          
};
#include "magic/coff_symbols_header_t.end.hpp"
SDK_VERIFY( struct image::coff_symbols_header_t, 0x20 );
