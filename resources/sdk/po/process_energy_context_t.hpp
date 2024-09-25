#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [struct _PO_PROCESS_ENERGY_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_energy_context_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_PO_PROCESS_ENERGY_CONTEXT.$", 0x0, true, 0x6b2be2ff58baab4 );
        SDK_FIXED_SIZE( process_energy_context_t, 0x0 );
    };                             
};
SDK_VERIFY( struct po::process_energy_context_t, 0x0 );
