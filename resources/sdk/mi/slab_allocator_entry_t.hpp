#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [struct _MI_SLAB_ALLOCATOR_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct slab_allocator_entry_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_MI_SLAB_ALLOCATOR_ENTRY.$", 0x0, true, 0x2d3d8f5c1a7cc7e7 );
        SDK_FIXED_SIZE( slab_allocator_entry_t, 0x0 );
    };                           
};
SDK_VERIFY( struct mi::slab_allocator_entry_t, 0x0 );
