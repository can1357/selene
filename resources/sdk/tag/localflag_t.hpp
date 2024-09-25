#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagLOCALFLAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class localflag_t : int32_t          
    {                                         
        none =                     0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nonndr =                   0x800,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touchedorblockingasta =    0x1000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inparametermitigation =    0x2000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_quirk =   0x4000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_proxy =   0x8000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_indoubt = 0x10000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
