#pragma once
#include <sdkgen/support_library.hpp>

namespace dmar
{
    // [struct _DMAR_PAGE_TABLE_STATE]
    // => Windows 11
    //
    struct page_table_state_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_DMAR_PAGE_TABLE_STATE.$", 0x0, false, 0xc42943e56c01d1d7 );
        SDK_FIXED_SIZE( page_table_state_t, 0x0 );
    };                       
};
SDK_VERIFY( struct dmar::page_table_state_t, 0x0 );
