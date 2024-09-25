#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/data_block_t.start.hpp"
namespace nls
{
    // [struct _NLS_DATA_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct data_block_t                    
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                 
        _m00 void* ansi_code_page_data;      //{ +0x0000    +0x0000    +0x0000    } | .AnsiCodePageData
        _m01 void* oem_code_page_data;       //{ +0x0008    +0x0008    +0x0008    } | .OemCodePageData
        _m02 void* unicode_case_table_data;  //{ +0x0010    +0x0010    +0x0010    } | .UnicodeCaseTableData
                                           
        SDK_MAGIC_PROPERTIES( "_NLS_DATA_BLOCK.$", 0x18, true, 0x834ce99be7c43463 );                        
        SDK_FIXED_SIZE( data_block_t, 0x18 );                        
    };                                     
};
#include "magic/data_block_t.end.hpp"
SDK_VERIFY( struct nls::data_block_t, 0x18 );
